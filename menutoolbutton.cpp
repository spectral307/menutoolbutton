#include <QMenu>
#include "menutoolbutton.h"

MenuToolButton::MenuToolButton(QWidget* parent) : QToolButton(parent)
{
}

MenuToolButton::MenuToolButton(const QStringList& items, QWidget* parent) : QToolButton(parent)
{
	QMenu* menu;
	menu = new QMenu(this);
	foreach(QString item, items)
	{
		menu->addAction(item);
	}
	QObject::connect(menu, SIGNAL(triggered(QAction*)), this, SLOT(changeCurrentText(QAction*)));
	this->setMenu(menu);
	this->setPopupMode(QToolButton::ToolButtonPopupMode::InstantPopup);
}

void MenuToolButton::changeCurrentText(QAction* action)
{
	emit currentTextChanged(action->text());
}