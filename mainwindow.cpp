#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // setup board
    for(int i = 0; i < 9; i++)
    {
        board[i] = 'b';
    }

    // print board
    printBoard();
}

void MainWindow::printBoard()
{
    switch(board[0])
    {
        case 'b':
        {
            ui->button1->setText("Blank");
        }
        break;

        case 'x':
        {
            ui->button1->setText("X");
        }
        break;

        case 'o':
        {
            ui->button1->setText("O");
        }
        break;
    }


    switch(board[1])
    {
        case 'b':
        {
            ui->button2->setText("Blank");
        }
        break;

        case 'x':
        {
            ui->button2->setText("X");
        }
        break;

        case 'o':
        {
            ui->button2->setText("O");
        }
        break;
    }


    switch(board[2])
    {
        case 'b':
        {
            ui->button3->setText("Blank");
        }
        break;

        case 'x':
        {
            ui->button3->setText("X");
        }
        break;

        case 'o':
        {
            ui->button3->setText("O");
        }
        break;
    }


    switch(board[3])
    {
        case 'b':
        {
            ui->button4->setText("Blank");
        }
        break;

        case 'x':
        {
            ui->button4->setText("X");
        }
        break;

        case 'o':
        {
            ui->button4->setText("O");
        }
        break;
    }


    switch(board[4])
    {
        case 'b':
        {
            ui->button5->setText("Blank");
        }
        break;

        case 'x':
        {
            ui->button5->setText("X");
        }
        break;

        case 'o':
        {
            ui->button5->setText("O");
        }
        break;
    }


    switch(board[5])
    {
        case 'b':
        {
            ui->button6->setText("Blank");
        }
        break;

        case 'x':
        {
            ui->button6->setText("X");
        }
        break;

        case 'o':
        {
            ui->button6->setText("O");
        }
        break;
    }


    switch(board[6])
    {
        case 'b':
        {
            ui->button7->setText("Blank");
        }
        break;

        case 'x':
        {
            ui->button7->setText("X");
        }
        break;

        case 'o':
        {
            ui->button7->setText("O");
        }
        break;
    }


    switch(board[7])
    {
        case 'b':
        {
            ui->button8->setText("Blank");
        }
        break;

        case 'x':
        {
            ui->button8->setText("X");
        }
        break;

        case 'o':
        {
            ui->button8->setText("O");
        }
        break;
    }


    switch(board[8])
    {
        case 'b':
        {
            ui->button9->setText("Blank");
        }
        break;

        case 'x':
        {
            ui->button9->setText("X");
        }
        break;

        case 'o':
        {
            ui->button9->setText("O");
        }
        break;
    }
}

void MainWindow::computerRand()
{
    // declarations
    bool went = false;

    while(went == false)
    {
        // choose a random spot
        int spot = rand() % 9;

        // check to make sure spot isn't occupied
        if(board[spot] == 'b')
        {
            board[spot] = 'o';
            went = true;
        }
    }
}

void MainWindow::computerEasy(int spot)
{
    // predifined moves
    switch(spot)
    {
        case 0:
        {
            if(board[1] != 'b')
            {
                if(board[3] != 'b')
                {
                    if(board[4] != 'b')
                    {
                        computerRand();
                        break;
                    }
                    else
                    {
                        board[4] = 'o';
                        break;
                    }
                }
                else
                {
                    board[3] = 'o';
                    break;
                }
            }
            else
            {
                board[1] = 'o';
                break;
            }
        }
        break;

        case 1:
        {
            if(board[2] != 'b')
            {
                if(board[4] != 'b')
                {
                    if(board[5] != 'b')
                    {
                        if(board[0] != 'b')
                        {
                            if(board[3] != 'b')
                            {
                                computerRand();
                                break;
                            }
                            else
                            {
                                board[3] = 'o';
                                break;
                            }
                        }
                        else
                        {
                            board[0] = 'o';
                            break;
                        }
                    }
                    else
                    {
                        board[5] = 'o';
                        break;
                    }
                }
                else
                {
                    board[4] = 'o';
                    break;
                }
            }
            else
            {
                board[2] = 'o';
                break;
            }
        }
        break;

        case 2:
        {
            if(board[5] != 'b')
            {
                if(board[4] != 'b')
                {
                    if(board[1] != 'b')
                    {
                        computerRand();
                        break;
                    }
                    else
                    {
                        board[1] = 'o';
                        break;
                    }
                }
                else
                {
                    board[4] = 'o';
                    break;
                }
            }
            else
            {
                board[5] = 'o';
                break;
            }
        }

        case 3:
        {
            if(board[4] != 'b')
            {
                if(board[6] != 'b')
                {
                    if(board[7] != 'b')
                    {
                        if(board[0] != 'b')
                        {
                            if(board[1] != 'b')
                            {
                                computerRand();
                                break;
                            }
                            else
                            {
                                board[1] = 'o';
                                break;
                            }
                        }
                        else
                        {
                            board[0] = 'o';
                            break;
                        }
                    }
                    else
                    {
                        board[7] = 'o';
                        break;
                    }
                }
                else
                {
                    board[6] = 'o';
                    break;
                }
            }
            else
            {
                board[4] = 'o';
                break;
            }
        }

        case 4:
        {
            if(board[5] != 'b')
            {
                if(board[7] != 'b')
                {
                    if(board[8] != 'b')
                    {
                        if(board[6] != 'b')
                        {
                            if(board[0] != 'b')
                            {
                                if(board[2] != 'b')
                                {
                                    computerRand();
                                    break;
                                }
                                else
                                {
                                    board[2] = 'o';
                                    break;
                                }
                            }
                            else
                            {
                                board[0] = 'o';
                                break;
                            }
                        }
                        else
                        {
                            board[6] = 'o';
                            break;
                        }
                    }
                    else
                    {
                        board[8] = 'o';
                        break;
                    }
                }
                else
                {
                    board[7] = 'o';
                    break;
                }
            }
            else
            {
                board[5] = 'o';
                break;
            }
        }
        break;

        case 5:
        {
            if(board[4] != 'b')
            {
                if(board[8] != 'b')
                {
                    if(board[7] != 'b')
                    {
                        if(board[2] != 'b')
                        {
                            if(board[3] != 'b')
                            {
                                computerRand();
                                break;
                            }
                            else
                            {
                                board[3] = 'o';
                                break;
                            }
                        }
                        else
                        {
                            board[2] = 'o';
                            break;
                        }
                    }
                    else
                    {
                        board[7] = 'o';
                        break;
                    }
                }
                else
                {
                    board[8] = 'o';
                    break;
                }
            }
            else
            {
                board[4] = 'o';
                break;
            }
        }
        break;

        case 6:
        {
            if(board[7] != 'b')
            {
                if(board[3] != 'b')
                {
                    if(board[4] != 'b')
                    {
                        computerRand();
                        break;
                    }
                    else
                    {
                        board[4] = 'o';
                        break;
                    }
                }
                else
                {
                    board[3] = 'o';
                    break;
                }
            }
            else
            {
                board[7] = 'o';
                break;
            }
        }
        break;

        case 7:
        {
            if(board[8] != 'b')
            {
                if(board[6] != 'b')
                {
                    if(board[4] != 'b')
                    {
                        if(board[3] != 'b')
                        {
                            if(board[5] != 'b')
                            {
                                computerRand();
                                break;
                            }
                            else
                            {
                                board[5] = 'o';
                                break;
                            }
                        }
                        else
                        {
                            board[3] = 'o';
                            break;
                        }
                    }
                    else
                    {
                        board[4] = 'o';
                        break;
                    }
                }
                else
                {
                    board[6] = 'o';
                    break;
                }
            }
            else
            {
                board[8] = 'o';
                break;
            }
        }
        break;

        case 8:
        {
            if(board[7] != 'b')
            {
                if(board[5] != 'b')
                {
                    if(board[4] != 'b')
                    {
                        computerRand();
                        break;
                    }
                    else
                    {
                        board[4] = 'o';
                        break;
                    }
                }
                else
                {
                    board[5] = 'o';
                    break;
                }
            }
            else
            {
                board[7] = 'o';
                break;
            }
        }
        break;
    }
}

void MainWindow::computerMedium(int spot)
{
    switch(spot)
    {
        case 0:
        {
            // check to see if player is about to win
            if(board[1] == 'x')
            {
                // block move
                if(board[2] == 'b')
                {
                    board[2] = 'o';
                    return;
                }
            }
            if(board[3] == 'x')
            {
                // block move
                if(board[6] == 'b')
                {
                    board[6] = 'o';
                    return;
                }
            }

            // randomly choose to go next/below/diangol
            int choice = rand() % 3;

            switch(choice)
            {
                case 0:
                {
                    // go next to
                    if(board[1] == 'b')
                    {
                        board[1] = 'o';
                        return;
                    }
                }
                break;

                case 1:
                {
                    // go below
                    if(board[3] == 'b')
                    {
                        board[3] = 'o';
                        return;
                    }
                }
                break;

                case 2:
                {
                    // go diangol
                    if(board[4] == 'b')
                    {
                        board[4] = 'o';
                        return;
                    }
                }
                break;
            }
        }
        break;

        case 1:
        {
            // check if player is about to win
            if(board[0] == 'x')
            {
                // block move
                if(board[2] == 'b')
                {
                    board[2] = 'o';
                    return;
                }
            }
            if(board[2] == 'x')
            {
                // block move
                if(board[0] == 'b')
                {
                    board[0] = 'o';
                    return;
                }
            }
            if(board[4] == 'x')
            {
                // block move
                if(board[7] == 'b')
                {
                    board[7] = 'o';
                    return;
                }
            }

            // randomly choose
            int choice = rand() % 5;

            switch(choice)
            {
                case 0:
                {
                    // go left
                    if(board[0] == 'b')
                    {
                        board[0] = 'o';
                        return;
                    }
                }
                break;

                case 1:
                {
                    // go right
                    if(board[2] == 'b')
                    {
                        board[2] = 'o';
                        return;
                    }
                }
                break;

                case 2:
                {
                    // go down
                    if(board[4] == 'b')
                    {
                        board[4] = 'o';
                        return;
                    }
                }
                break;

                case 3:
                {
                    // go diangol left
                    if(board[3] == 'b')
                    {
                        board[3] = 'o';
                        return;
                    }
                }
                break;

                case 4:
                {
                    // go diangol right
                    if(board[5] == 'b')
                    {
                        board[5] = 'o';
                        return;
                    }
                }
                break;
            }
        }
        break;

        case 2:
        {
            // check if player is about to win
            if(board[1] == 'x')
            {
                // block move
                if(board[0] == 'b')
                {
                    board[0] = 'o';
                    return;
                }
            }
            if(board[5] == 'x')
            {
                // block move
                if(board[8] == 'b')
                {
                    board[8] = 'o';
                    return;
                }
            }
            if(board[4] == 'x')
            {
                // block move
                if(board[6] == 'b')
                {
                    board[6] = 'o';
                    return;
                }
            }

            // randomly choose
            int choice = rand() % 3;

            switch(choice)
            {
                case 0:
                {
                    // go left
                    if(board[1] == 'b')
                    {
                        board[1] = 'o';
                        return;
                    }
                }
                break;

                case 1:
                {
                    // go down
                    if(board[5] == 'b')
                    {
                        board[5] = 'o';
                        return;
                    }
                }
                break;

                case 2:
                {
                    // go diangol left
                    if(board[4] == 'b')
                    {
                        board[4] = 'o';
                        return;
                    }
                }
                break;
            }
        }
        break;

        case 3:
        {
            // check if player is about to win
            if(board[4] == 'x')
            {
                // block move
                if(board[5] == 'b')
                {
                    board[5] = 'o';
                    return;
                }
            }
            if(board[6] == 'x')
            {
                // block move
                if(board[0] == 'b')
                {
                    board[0] = 'o';
                    return;
                }
            }
            if(board[0] == 'x')
            {
                // block move
                if(board[6] == 'b')
                {
                    board[6] = 'o';
                    return;
                }
            }

            // randomly decide
            int choice = rand() % 5;

            switch(choice)
            {
                case 0:
                {
                    // go right
                    if(board[4] == 'b')
                    {
                        board[4] = 'o';
                        return;
                    }
                }

                case 1:
                {
                    // go above
                    if(board[0] == 'b')
                    {
                        board[0] = 'o';
                        return;
                    }
                }

                case 2:
                {
                    // go below
                    if(board[6] == 'b')
                    {
                        board[6] = 'o';
                        return;
                    }
                }

                case 3:
                {
                    // go diangol up
                    if(board[1] == 'b')
                    {
                        board[1] = 'o';
                        return;
                    }
                }

                case 4:
                {
                    // go diangol down
                    if(board[7] == 'b')
                    {
                        board[7] = 'o';
                        return;
                    }
                }
                break;
            }
        }
        break;

        case 4:
        {
            // check if player is about to win
            if(board[5] == 'x')
            {
                // block move
                if(board[3] == 'b')
                {
                    board[3] = 'o';
                    return;
                }
            }
            if(board[3] == 'x')
            {
                // block move
                if(board[5] == 'b')
                {
                    board[5] = 'o';
                    return;
                }
            }
            if(board[1] == 'x')
            {
                // block move
                if(board[7] == 'b')
                {
                    board[7] = 'o';
                    return;
                }
            }
            if(board[7] == 'x')
            {
                // block move
                if(board[1] == 'b')
                {
                    board[1] = 'o';
                    return;
                }
            }
            if(board[6] == 'x')
            {
                // block move
                if(board[2] == 'b')
                {
                    board[2] = 'o';
                    return;
                }
            }
            if(board[8] == 'x')
            {
                // block move
                if(board[0] == 'b')
                {
                    board[0] = 'o';
                    return;
                }
            }
            if(board[0] == 'x')
            {
                // block move
                if(board[8] == 'b')
                {
                    board[8] = 'o';
                    return;
                }
            }
            if(board[2] == 'x')
            {
                // block move
                if(board[6] == 'b')
                {
                    board[6] = 'o';
                    return;
                }
            }

            // choose a random move
            int choice = rand() % 8;

            switch(choice)
            {
                case 0:
                {
                    // go diangol up left
                    if(board[0] == 'b')
                    {
                        board[0] = 'o';
                        return;
                    }
                }

                case 1:
                {
                    // go above
                    if(board[1] == 'b')
                    {
                        board[1] = 'o';
                        return;
                    }
                }

                case 2:
                {
                    // go diangol up right
                    if(board[2] == 'b')
                    {
                        board[2] = 'o';
                        return;
                    }
                }

                case 3:
                {
                    // go left
                    if(board[3] == 'b')
                    {
                        board[3] = 'o';
                        return;
                    }
                }

                case 4:
                {
                    // go right
                    if(board[5] == 'b')
                    {
                        board[5] = 'o';
                        return;
                    }
                }

                case 5:
                {
                    // go diangol left down
                    if(board[6] == 'b')
                    {
                        board[6] = 'o';
                        return;
                    }
                }

                case 6:
                {
                    // go down
                    if(board[7] == 'b')
                    {
                        board[7] = 'o';
                        return;
                    }
                }

                case 7:
                {
                    // go diangol right down
                    if(board[8] == 'b')
                    {
                        board[8] = 'o';
                        return;
                    }
                }
                break;
            }
        }
        break;

        case 5:
        {
            // check if player is about to win
            if(board[4] == 'x')
            {
                // block move
                if(board[3] == 'b')
                {
                    board[3] = 'o';
                    return;
                }
            }
            if(board[8] == 'x')
            {
                // block move
                if(board[2] == 'b')
                {
                    board[2] = 'o';
                    return;
                }
            }
            if(board[2] == 'b')
            {
                // block move
                if(board[8] == 'b')
                {
                    board[8] = 'o';
                    return;
                }
            }

            // randomly choose where to go
            int choice = rand() % 5;

            switch(choice)
            {
                case 0:
                {
                    // go above
                    if(board[2] == 'b')
                    {
                        board[2] = 'o';
                        return;
                    }
                }

                case 1:
                {
                    // go diangol up left
                    if(board[1] == 'b')
                    {
                        board[1] = 'o';
                        return;
                    }
                }

                case 2:
                {
                    // go left
                    if(board[3] == 'b')
                    {
                        board[3] = 'o';
                        return;
                    }
                }

                case 3:
                {
                    // go diangol down left
                    if(board[7] == 'b')
                    {
                        board[7] = 'o';
                        return;
                    }
                }

                case 4:
                {
                    // go down
                    if(board[8] == 'b')
                    {
                        board[8] = 'o';
                        return;
                    }
                }
                break;
            }
        }
        break;

        case 6:
        {
            // check if player is about to win
            if(board[0] == 'x')
            {
                // block move
                if(board[3] == 'b')
                {
                    board[3] = 'o';
                    return;
                }
            }
            if(board[3] == 'x')
            {
                // block move
                if(board[0] == 'b')
                {
                    board[0] = 'o';
                    return;
                }
            }
            if(board[4] == 'x')
            {
                // block move
                if(board[2] == 'b')
                {
                    board[2] = 'o';
                    return;
                }
            }
            if(board[2] == 'x')
            {
                // block move
                if(board[4] == 'b')
                {
                    board[4] = 'o';
                    return;
                }
            }
            if(board[7] == 'x')
            {
                // block move
                if(board[8] == 'b')
                {
                    board[8] = 'o';
                    return;
                }
            }
            if(board[8] == 'x')
            {
                // block move
                if(board[7] == 'b')
                {
                    board[7] = 'o';
                    return;
                }
            }

            // randomly choose where to go
            int choice = rand() % 3;

            switch(choice)
            {
                case 0:
                {
                    // go above
                    if(board[3] == 'b')
                    {
                        board[3] = 'o';
                        return;
                    }
                }

                case 1:
                {
                    // go diangol
                    if(board[4] == 'b')
                    {
                        board[4] = 'o';
                        return;
                    }
                }

                case 2:
                {
                    // go right
                    if(board[7] == 'b')
                    {
                        board[7] = 'o';
                        return;
                    }
                }
                break;
            }
        }
        break;

        case 7:
        {
            // check if player is about to win
            if(board[6] == 'x')
            {
                // block move
                if(board[8] == 'b')
                {
                    board[8] = 'o';
                    return;
                }
            }
            if(board[8] == 'x')
            {
                // block move
                if(board[6] == 'b')
                {
                    board[6] = 'o';
                    return;
                }
            }
            if(board[1] == 'x')
            {
                // block move
                if(board[4] == 'b')
                {
                    board[4] = 'o';
                    return;
                }
            }
            if(board[4] == 'x')
            {
                // block move
                if(board[1] == 'b')
                {
                    board[1] = 'o';
                    return;
                }
            }

            // randomly choose a move
            int choice = rand() % 5;

            switch(choice)
            {
                case 0:
                {
                    // go left
                    if(board[6] == 'b')
                    {
                        board[6] = 'o';
                        return;
                    }
                }

                case 1:
                {
                    // go diangol up left
                    if(board[3] == 'b')
                    {
                        board[3] = 'o';
                        return;
                    }
                }

                case 2:
                {
                    // go up
                    if(board[4] == 'b')
                    {
                        board[4] = 'o';
                        return;
                    }
                }

                case 3:
                {
                    // go diangol right
                    if(board[5] == 'b')
                    {
                        board[5] = 'o';
                        return;
                    }
                }

                case 4:
                {
                    // go right
                    if(board[8] == 'b')
                    {
                        board[8] = 'o';
                        return;
                    }
                }
                break;
            }
        }
        break;

        case 8:
        {
            // check if player is about to win
            if(board[7] == 'x')
            {
                // block move
                if(board[6] == 'b')
                {
                    board[6] = 'o';
                    return;
                }
            }
            if(board[6] == 'x')
            {
                // block move
                if(board[7] == 'b')
                {
                    board[7] = 'o';
                    return;
                }
            }
            if(board[5] == 'x')
            {
                // block move
                if(board[2] == 'b')
                {
                    board[2] = 'o';
                    return;
                }
            }
            if(board[2] == 'x')
            {
                // block move
                if(board[5] == 'b')
                {
                    board[5] = 'o';
                    return;
                }
            }
            if(board[4] == 'x')
            {
                // block move
                if(board[0] == 'b')
                {
                    board[0] = 'o';
                    return;
                }
            }
            if(board[0] == 'x')
            {
                // block move
                if(board[4] == 'b')
                {
                    board[0] = 'o';
                    return;
                }
            }

            // randomly choose a move
            int choice = rand() % 3;

            switch(choice)
            {
                case 0:
                {
                    // go left
                    if(board[7] == 'b')
                    {
                        board[7] = 'o';
                        return;
                    }
                }

                case 1:
                {
                    // go up
                    if(board[5] == 'b')
                    {
                        board[5] = 'o';
                        return;
                    }
                }

                case 2:
                {
                    // go diangol
                    if(board[4] == 'b')
                    {
                        board[4] = 'o';
                        return;
                    }
                }
                break;
            }
        }
        break;
    }

    // if artificial intelligence fails
    computerRand();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_button1_clicked()
{
    // occupy spot
    if(board[0] == 'b')
    {
        board[0] = 'x';
    }

    // see if anyone has won
    if(checkIfWon() != 'b')
    {
        winner();
    }
    else
    {
        // make the computer go
        // computerMedium(0);

        // check for a winner
        if(checkIfWon() != 'b')
        {
            winner();
        }
    }

    // print the board
    printBoard();
}

void MainWindow::on_button2_clicked()
{
    // occupy spot
    if(board[1] == 'b')
    {
        board[1] = 'x';
    }

    // see if anyone has won
    if(checkIfWon() != 'b')
    {
        winner();
    }
    else
    {
        // make the computer go
        // computerMedium(1);

        // check for a winner
        if(checkIfWon() != 'b')
        {
            winner();
        }
    }

    // print the board
    printBoard();
}

void MainWindow::on_button3_clicked()
{
    // occupy spot
    if(board[2] == 'b')
    {
        board[2] = 'x';
    }

    // see if anyone has won
    if(checkIfWon() != 'b')
    {
        winner();
    }
    else
    {
        // make the computer go
        // computerMedium(2);

        // check for a winner
        if(checkIfWon() != 'b')
        {
            winner();
        }
    }

    // print the board
    printBoard();
}

void MainWindow::on_button4_clicked()
{
    // occupy spot
    if(board[3] == 'b')
    {
        board[3] = 'x';
    }

    // see if anyone has won
    if(checkIfWon() != 'b')
    {
        winner();
    }
    else
    {
        // make the computer go
        // computerMedium(3);

        // check for a winner
        if(checkIfWon() != 'b')
        {
            winner();
        }
    }

    // print the board
    printBoard();
}

void MainWindow::on_button5_clicked()
{
    // occupy spot
    if(board[4] == 'b')
    {
        board[4] = 'x';
    }

    // see if anyone has won
    if(checkIfWon() != 'b')
    {
        winner();
    }
    else
    {
        // make the computer go
        // computerMedium(4);

        // check for a winner
        if(checkIfWon() != 'b')
        {
            winner();
        }
    }

    // print the board
    printBoard();
}

void MainWindow::on_button6_clicked()
{
    // occupy spot
    if(board[5] == 'b')
    {
        board[5] = 'x';
    }

    // see if anyone has won
    if(checkIfWon() != 'b')
    {
        winner();
    }
    else
    {
        // make the computer go
        // computerMedium(5);

        // check for a winner
        if(checkIfWon() != 'b')
        {
            winner();
        }
    }

    // print the board
    printBoard();
}

void MainWindow::on_button7_clicked()
{
    // occupy spot
    if(board[6] == 'b')
    {
        board[6] = 'x';
    }

    // see if anyone has won
    if(checkIfWon() != 'b')
    {
        winner();
    }
    else
    {
        // make the computer go
        // computerMedium(6);

        // check for a winner
        if(checkIfWon() != 'b')
        {
            winner();
        }
    }

    // print the board
    printBoard();
}

void MainWindow::on_button8_clicked()
{
    // occupy spot
    if(board[7] == 'b')
    {
        board[7] = 'x';
    }

    // see if anyone has won
    if(checkIfWon() != 'b')
    {
        winner();
    }
    else
    {
        // make the computer go
        // computerMedium(7);

        // check for a winner
        if(checkIfWon() != 'b')
        {
            winner();
        }
    }

    // print the board
    printBoard();
}

void MainWindow::on_button9_clicked()
{
    // occupy spot
    if(board[8] == 'b')
    {
        board[8] = 'x';
    }

    // see if anyone has won
    if(checkIfWon() != 'b')
    {
        winner();
    }
    else
    {
        // make the computer go
       //  computerMedium(8);

        // check for a winner
        if(checkIfWon() != 'b')
        {
            winner();
        }
    }

    // print the board
    printBoard();
}

char MainWindow::checkIfWon()
{
    // check for a tie
    int b = 0;
    for(int i = 0; i < 9; i++)
    {
        if(board[i] == 'b')
        {
            b++;
        }
    }
    if(b == 0)
    {
        return 'n';
    }

    // check for 3 in a row verticly (row 1)
    int x = 0;
    int o = 0;
    for(int i = 0; i <= 2; i++)
    {
        if(board[i] == 'x')
        {
            x += 1;
            qDebug() << "x = ";
            if(x == 3)
            {
                qDebug() << "X won (first check)";
                return 'x';
            }
        }
        if(board[i] != 'x')
        {
            break;
        }
    }
    for(int i = 0; i <= 2; i++)
    {
        if(board[i] == 'o')
        {
            o++;
            if(o == 3)
            {
                qDebug() << "O won (first check)";
                return 'o';
            }
        }
        if(board[i] != 'o')
        {
            qDebug() << "break";
            break;
        }
    }

    // reset variables
    x = 0;
    o = 0;

    // check for 3 in a row verticly (row 2)
    for(int i = 3; i <= 6; i++)
    {
        if(board[i] == 'x')
        {
            x++;
            if(x == 3)
            {
                qDebug() << "X won (second check)";
                return 'x';
            }
        }
        if(board[i] != 'x')
        {
            x = 0;
        }
    }
    for(int i = 3; i <= 6; i++)
    {
        if(board[i] == 'o')
        {
            o++;
            if(o == 3)
            {
                qDebug() << "O won (second check)";
                return 'o';
            }
        }
        if(board[i] != 'o')
        {
            break;
        }
    }

    // reset variables
    x = 0;
    o = 0;

    // check for row verticly (row 3)
    for(int i = 6; i <= 8; i++)
    {
        if(board[i] == 'x')
        {
            x++;
            if(x == 3)
            {
                qDebug() << "X won (third check)";
                return 'x';
            }
        }
        if(board[i] != 'x')
        {
            x = 0;
        }
    }
    for(int i = 6; i <= 8; i++)
    {
        if(board[i] == 'o')
        {
            o++;
            if(o == 3)
            {
                qDebug() << "O won (third check)";
                return 'o';
            }
        }
        if(board[i] != 'o')
        {
            break;
        }
    }

    // reset variables
    x = 0;
    o = 0;

    // check for 3 in a row horizontally (row 1)
    for(int i = 0; i <= 6; i += 3)
    {
        if(board[i] == 'x')
        {
            x++;
            if(x == 3)
            {
                qDebug() << "X won (forth check)";
                return 'x';
            }
        }
        if(board[i] != 'x')
        {
            break;
        }
    }
    for(int i = 0; i <= 6; i += 3)
    {
        if(board[i] == 'o')
        {
            o++;
            if(o == 3)
            {
                qDebug() << "O won (forth check)";
                return 'o';
            }
        }
        if(board[i] != 'o')
        {
            break;
        }
    }

    // reset variables
    x = 0;
    o = 0;

    // check for 3 in a row horizontally (row 2)
    for(int i = 1; i <= 8; i += 3)
    {
        if(board[i] == 'x')
        {
            x++;
            if(x == 3)
            {
                qDebug() << "X won (5th check)";
                return 'x';
            }
        }
        if(board[i] != 'x')
        {
            break;
        }
    }
    for(int i = 1; i <= 8; i += 3)
    {
        if(board[i] == 'o')
        {
            o++;
            if(o == 3)
            {
                qDebug() << "O won (5th check)";
                return 'o';
            }
        }
        if(board[i] != 'o')
        {
            break;
        }
    }

    // reset variables
    x = 0;
    o = 0;

    // check for 3 in a row horizontally (row 3)
    for(int i = 2; i <= 8; i += 3)
    {
        if(board[i] == 'x')
        {
            x++;
            if(x == 3)
            {
                qDebug() << "X won (6th check)";
                return 'x';
            }
        }
        if(board[i] != 'x')
        {
            break;
        }
    }
    for(int i = 2; i <= 8; i += 3)
    {
        if(board[i] == 'o')
        {
            o++;
            if(o == 3)
            {
                qDebug() << "O won (6th check)";
                return 'o';
            }
        }
        if(board[i] != 'o')
        {
            break;
        }
    }

    // reset variables
    x = 0;
    o = 0;

    // check diagonally
    for(int i = 0; i <= 8; i += 4)
    {
        if(board[i] == 'x')
        {
            x++;
            if(x == 3)
            {
                qDebug() << "X won (7th check)";
                return 'x';
            }
        }
        if(board[i] != 'x')
        {
            break;
        }
    }
    for(int i = 0; i <= 8; i += 4)
    {
        if(board[i] == 'o')
        {
            o++;
            if(o == 3)
            {
                qDebug() << "O won (7th check)";
                return 'o';
            }
        }
        if(board[i] != 'o')
        {
            break;
        }
    }

    // reset variables
    x = 0;
    o = 0;

    // check diagonal the other way
    for(int i = 2; i <= 8; i += 2)
    {
        if(board[i] == 'x')
        {
            x++;
            if(x == 3)
            {
                qDebug() << "X won (8th check)";
                return 'x';
            }
        }
        if(board[i] != 'x')
        {
            break;
        }
    }
    for(int i = 2; i <= 8; i += 2)
    {
        if(board[i] == 'o')
        {
            o++;
            if(o == 3)
            {
                qDebug() << "O won (8th check)";
                return 'o';
            }
        }
        if(board[i] != 'o')
        {
            break;
        }
    }

    // reset variables
    x = 0;
    o = 0;

    return 'b';
}

bool MainWindow::compareArrays(char array1[9], char array2[9])
{
    // check arrays
    for(int i = 0; i < 9; i++)
    {
        if(array1[i] != array2[i])
        {
            return false;
        }
    }

    return true;
}

void MainWindow::winner()
{
    // print the board
    printBoard();

    // see if anyone won
    char winner = checkIfWon();

    switch(winner)
    {
        case 'b':
        {
            // no one won
        }
        break;

        case 'x':
        {
            // create message box
            QMessageBox msgBox;
            msgBox.setText("Winner");
            msgBox.setInformativeText("Congrats, You have won");
            msgBox.setDefaultButton(QMessageBox::Ok);
            msgBox.exec();

            // reset board
            for(int i = 0; i < 9; i++)
            {
                board[i] = 'b';
            }
        }
        break;

        case 'o':
        {
            // create message box
            QMessageBox msgBox;
            msgBox.setText("You have lost");
            msgBox.setInformativeText("The computer has won");
            msgBox.setDefaultButton(QMessageBox::Ok);
            msgBox.exec();

            // reset board
            for(int i = 0; i < 9; i++)
            {
                board[i] = 'b';
            }
        }
        break;

        case 'n':
        {
            // create message box
            QMessageBox msgBox;
            msgBox.setText("Tie");
            msgBox.setInformativeText("Resetting board...");
            msgBox.setDefaultButton(QMessageBox::Ok);
            msgBox.exec();

            // reset board
            for(int i = 0; i < 9; i++)
            {
                board[i] = 'b';
            }
        }
        break;
    }
}
