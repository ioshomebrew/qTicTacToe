#include "mainwindow.h"
#include <QApplication>
#include <time.h>

int main(int argc, char *argv[])
{
    // seed random number generator
    srand(time(0));

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    
    return a.exec();
}
