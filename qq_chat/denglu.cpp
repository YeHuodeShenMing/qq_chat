#include "denglu.h"
#include "ui_denglu.h"

denglu::denglu(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::denglu)
{
    ui->setupUi(this);
}

denglu::~denglu()
{
    delete ui;
}
