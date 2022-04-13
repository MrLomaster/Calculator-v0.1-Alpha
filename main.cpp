#include "mainwindow.h"
#include <iostream>

#include <QApplication>

int main(int argc, char *argv[])
{

//    int int1, int2, int3, int4, int5, int6, int7, int8, int9, int0;
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
