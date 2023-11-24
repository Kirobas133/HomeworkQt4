#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private Q_SLOTS:
//    void pb_10plusPressed();
//    void pb_10plusReleased();
    void pb_10plusClicked(bool checked = false);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
