#include "mekajira.h"
#include "ui_mekajira.h"
#include <QFileDialog>

Mekajira::Mekajira(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Mekajira)
{
    ui->setupUi(this);
}

Mekajira::~Mekajira()
{
    delete ui;
}

void Mekajira::on_browseButton_clicked()
{
    QString filename = QFileDialog::getOpenFileName(
                this,
                tr("Open JSON settings file"),
                "./",
                "JSON (*.json)"
            );
    ui->configFileLocation->setText(filename);
    ui->epicComboBox->setEnabled(true);

}
