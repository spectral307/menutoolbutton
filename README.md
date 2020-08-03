Кнопка с меню для виджета QToolBar.

Вариан использования 1:
```c++
// список элементов меню
QStringList items;
items << "item 1" << "item 2" << "item 3";

MenuToolButton* menuToolButton = new MenuToolButton(items, toolBar);

menuToolButton->setIcon(QIcon("PLUS.png"));

toolBar->addWidget(menuToolButton);
```

Вариант использования 2:
```c++
// список элементов меню
QStringList items;
items << "item 1" << "item 2" << "item 3";

MenuToolButton* menuToolButton = new MenuToolButton(items, toolBar);

QAction* action = new QAction(QIcon("PLUS.png"), "", menuToolButton);
// взять значения свойств от QAction (иконку и все остальные)
menuToolButton->setDefaultAction(action);

toolBar->addWidget(menuToolButton);
```

Сигналы:

```c++
void currentTextChanged(const QString &text)
```