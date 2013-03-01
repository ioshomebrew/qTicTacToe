#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_button1_clicked();

    void on_button2_clicked();

    void on_button3_clicked();

    void on_button4_clicked();

    void on_button5_clicked();

    void on_button6_clicked();

    void on_button7_clicked();

    void on_button8_clicked();

    void on_button9_clicked();

private:
    Ui::MainWindow *ui;
    char board[9];
    void printBoard();
    void computerEasy(int spot);
    void computerMedium(int spot);
    void computerRand();
    char checkIfWon();
    bool compareArrays(char array1[9], char array2[9]);
    void winner();
};

#endif // MAINWINDOW_H
