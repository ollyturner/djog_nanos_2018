#include "kamer_jesper.h"
#include "ui_kamer_jesper.h"
#include "hoofd_scherm.h"

kamer_jesper::kamer_jesper(hoofd_scherm * het_hoofd_scherm, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::kamer_jesper),
    m_hoofd_scherm(het_hoofd_scherm)
{
    this->ui->setupUi(this);
    this->ui->pushButton_2->setHidden(true);
    this->ui->knop_deur->setText("deur is dicht");
    this->ui->pushButton_3->setHidden(true);
    this->ui->pushButton_6->setHidden(true);
}

kamer_jesper::~kamer_jesper()
{
  delete this->ui;
}

void kamer_jesper::on_pushButton_clicked()
{
    this->ui->pushButton->move(this->k_x, this->k_y);
    this->ui->pushButton_2->setVisible(true);
    this->ui->pushButton_3->setVisible(true);
    this->ui->pushButton_6->setVisible(true);
}

void kamer_jesper::on_toolButton_pressed()
{
     this->ui->knop_deur->setText("deur is open");
}

void kamer_jesper::on_toolButton_released()
{
         this->ui->knop_deur->setText("deur is dicht");
}


void kamer_jesper::on_pushButton_2_clicked()
{
}
