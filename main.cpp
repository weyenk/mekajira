#include "mekajira.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Mekajira w;
    w.show();

    return a.exec();
}
