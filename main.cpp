#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    //Ejemplo de una aplicaci'on en Qt
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
