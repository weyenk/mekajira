#ifndef MEKAJIRA_H
#define MEKAJIRA_H

#include <QMainWindow>

namespace Ui {
class Mekajira;
}

class Mekajira : public QMainWindow
{
    Q_OBJECT

public:
    explicit Mekajira(QWidget *parent = 0);
    ~Mekajira();

private slots:
    void on_browseButton_clicked();

private:
    Ui::Mekajira *ui;
};

#endif // MEKAJIRA_H
