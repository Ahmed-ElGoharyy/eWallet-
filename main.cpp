#include "stdafx.h"
#include "eWallet.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    eWallet w;
    w.show();
    return a.exec();
}
