#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_eWallet.h"


class eWallet : public QMainWindow
{
    Q_OBJECT

public:
    eWallet(QWidget *parent = nullptr);
    ~eWallet();

private:
    Ui::eWalletClass ui;
};