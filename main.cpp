
#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include <stdio.h>
#include <QMainWindow>
#include <QVector>
using namespace std;
using namespace cv;


int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}




