#ifndef JEUXQUIXO_H
#define JEUXQUIXO_H

#include <QMainWindow>

namespace Ui {
class jeuxquixo;
}

class jeuxquixo : public QMainWindow
{
    Q_OBJECT

public:
    explicit jeuxquixo(QWidget *parent = 0);
    ~jeuxquixo();

private:
    Ui::jeuxquixo *ui;
};

#endif // JEUXQUIXO_H
