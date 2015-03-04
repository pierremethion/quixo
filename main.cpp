#include "jeuxquixo.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    jeuxquixo w;
    w.show();

    return a.exec();
}
