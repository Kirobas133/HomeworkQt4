#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QPushButton>
#include <QProgressBar>
#include <QComboBox>
#include <QRadioButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //All for progress bar
    ui->prbr_for10->setRange(0,100);
    ui->prbr_for10->reset();
    ui->prbr_for10->setValue(0);

    //All for combo box
    QList<QString> qlist;
    qlist.push_back("Second string");
    qlist.push_back("Third string");
    qlist.push_back("Fourth string");

    ui->cb_rndTxt->addItem("First string");
    ui->cb_rndTxt->addItems(qlist);

    //All for button
    ui->pb_10plus->setText("Plus 10%");
    ui->pb_10plus->setCheckable(true);
    connect(ui->pb_10plus, &QPushButton::clicked, this, &MainWindow::pb_10plusClicked);

    //All for radio buttons
    ui->rb_unk1->setText("Unexpectedly!");
    ui->rb_unk2->setText("Unbelievable!");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::pb_10plusClicked(bool checked){
//    ui->prbr_for10->
    if(ui->prbr_for10->value() == 100){
        ui->prbr_for10->reset();
        ui->prbr_for10->setValue(0);
    }
    else{
    ui->prbr_for10->setValue(ui->prbr_for10->value() + 10);
    }


    qDebug() << Q_FUNC_INFO;
    qDebug() << checked;
}
