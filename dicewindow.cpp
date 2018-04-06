#include "dicewindow.h"
#include "ui_dicewindow.h"

DiceWindow::DiceWindow(QWidget* parent) :
    QMainWindow(parent),
    ui(new Ui::DiceWindow)
{
    ui->setupUi(this);
}

DiceWindow::~DiceWindow()
{
    delete ui;
}
