#include "jeuxquixo.h"
#include "ui_jeuxquixo.h"

jeuxquixo::jeuxquixo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::jeuxquixo)
{
    ui->setupUi(this);
}

jeuxquixo::~jeuxquixo()
{
    delete ui;
}
