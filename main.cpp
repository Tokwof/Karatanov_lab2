﻿#include <QApplication>
#include <QPushButton>
 
int main(int argc, char *argv[ ]) 
{
QApplication app(argc, argv);
 
QPushButton button("Hello, World!");
button.resize(200, 60);
button.show( );
 пишу код в новой ветке пойнтер
<<<<<<< HEAD
пишу код в новой ветке пойнтер опять уже после мерджа2
======
пишу код в мейне для конфликта
>>>>>>> master
пробуем под черипик(2)
return app.exec( );
}
