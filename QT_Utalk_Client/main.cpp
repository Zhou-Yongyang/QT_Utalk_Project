#include "clientwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ClientWindow w;
    
    w.show(false);
    return a.exec();
}
