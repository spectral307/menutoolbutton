#ifndef MENUTOOLBUTTON_H
#define MENUTOOLBUTTON_H

#include <QAction>
#include <QString>
#include <QStringList>
#include <QToolButton>
#include <QWidget>

class MenuToolButton : public QToolButton
{
	Q_OBJECT
public:
	explicit MenuToolButton(QWidget* parent = 0);
	explicit MenuToolButton(const QStringList& items, QWidget* parent = 0);

signals:
	void currentTextChanged(const QString& text);

protected slots:
	void changeCurrentText(QAction* action);
};

#endif // MENUTOOLBUTTON_H
