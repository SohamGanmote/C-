//TicTacToe Game By Soham (me) and Yasin (Friend)
#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
char bord[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
int chake[9];
int cho;
int i = 0;
char turn = 'X';
int display();
int player_turn();
int vs_computer();
int winner();
int display()
{
    cout << endl;
    cout << " " << bord[0][0] << " | " << bord[0][1] << " | " << bord[0][2] << endl;
    cout << "-----------" << endl;
    cout << " " << bord[1][0] << " | " << bord[1][1] << " | " << bord[1][2] << endl;
    cout << "-----------" << endl;
    cout << " " << bord[2][0] << " | " << bord[2][1] << " | " << bord[2][2] << endl;
    return 0;
}
int player_turn()
{

    if (turn == 'X')
    {
    start:
        cout << "Player 1 (X) : ";
        cin >> cho;
        system("CLS");
        for (int j = 0; j < 9; j++)
        {
            if (chake[j] == cho)
            {
                display();
                cout << "Invalid Play" << endl;
                goto start;
            }
        }
        chake[i] = cho;
        turn = 'O';
        switch (cho)
        {
        case 1:
            bord[0][0] = 'X';
            break;
        case 2:
            bord[0][1] = 'X';
            break;
        case 3:
            bord[0][2] = 'X';
            break;
        case 4:
            bord[1][0] = 'X';
            break;
        case 5:
            bord[1][1] = 'X';
            break;
        case 6:
            bord[1][2] = 'X';
            break;
        case 7:
            bord[2][0] = 'X';
            break;
        case 8:
            bord[2][1] = 'X';
            break;
        case 9:
            bord[2][2] = 'X';
            break;
        }
        i = i + 1;
    }
    else if (turn == 'O')
    {
    start2:
        cout << "Player 2 (O) : ";
        cin >> cho;
        system("CLS");
        for (int j = 0; j < 9; j++)
        {
            if (chake[j] == cho)
            {
                display();
                cout << "Invalid Play" << endl;
                goto start2;
            }
        }
        chake[i] = cho;
        turn = 'X';
        switch (cho)
        {
        case 1:
            bord[0][0] = 'O';
            break;
        case 2:
            bord[0][1] = 'O';
            break;
        case 3:
            bord[0][2] = 'O';
            break;
        case 4:
            bord[1][0] = 'O';
            break;
        case 5:
            bord[1][1] = 'O';
            break;
        case 6:
            bord[1][2] = 'O';
            break;
        case 7:
            bord[2][0] = 'O';
            break;
        case 8:
            bord[2][1] = 'O';
            break;
        case 9:
            bord[2][2] = 'O';
            break;
        }
        i = i + 1;
    }
    return 0;
}
int vs_computer()
{
    if (turn == 'X')
    {
    start:
        cout << "Computer (X) : ";
        cho = rand() % 10;
        system("CLS");
        for (int j = 0; j < 9; j++)
        {
            if (chake[j] == cho)
            {
                goto start;
            }
        }
        chake[i] = cho;
        turn = 'O';
        switch (cho)
        {
        case 1:
            bord[0][0] = 'X';
            break;
        case 2:
            bord[0][1] = 'X';
            break;
        case 3:
            bord[0][2] = 'X';
            break;
        case 4:
            bord[1][0] = 'X';
            break;
        case 5:
            bord[1][1] = 'X';
            break;
        case 6:
            bord[1][2] = 'X';
            break;
        case 7:
            bord[2][0] = 'X';
            break;
        case 8:
            bord[2][1] = 'X';
            break;
        case 9:
            bord[2][2] = 'X';
            break;
        }
        i = i + 1;
    }
    else if (turn == 'O')
    {
    start2:
        cout << "Player (O) : ";
        cin >> cho;
        system("CLS");
        for (int j = 0; j < 9; j++)
        {
            if (chake[j] == cho)
            {
                display();
                cout << "Invalid Play" << endl;
                goto start2;
            }
        }
        chake[i] = cho;
        turn = 'X';
        switch (cho)
        {
        case 1:
            bord[0][0] = 'O';
            break;
        case 2:
            bord[0][1] = 'O';
            break;
        case 3:
            bord[0][2] = 'O';
            break;
        case 4:
            bord[1][0] = 'O';
            break;
        case 5:
            bord[1][1] = 'O';
            break;
        case 6:
            bord[1][2] = 'O';
            break;
        case 7:
            bord[2][0] = 'O';
            break;
        case 8:
            bord[2][1] = 'O';
            break;
        case 9:
            bord[2][2] = 'O';
            break;
        }
        i = i + 1;
    }
    return 0;
}
int winner()
{
    if (bord[0][0] == 'X' && bord[0][1] == 'X' && bord[0][2] == 'X')
    {
        cout << "X is The Winner ";
        exit(1);
    }
    if (bord[1][0] == 'X' && bord[1][1] == 'X' && bord[1][2] == 'X')
    {
        cout << "X is The Winner ";
        exit(1);
    }
    if (bord[2][0] == 'X' && bord[2][1] == 'X' && bord[2][2] == 'X')
    {
        cout << "X is The Winner ";
        exit(1);
    }
    if (bord[0][0] == 'X' && bord[1][0] == 'X' && bord[2][0] == 'X')
    {
        cout << "X is The Winner ";
        exit(1);
    }
    if (bord[0][1] == 'X' && bord[1][1] == 'X' && bord[2][1] == 'X')
    {
        cout << "X is The Winner ";
        exit(1);
    }
    if (bord[0][2] == 'X' && bord[1][2] == 'X' && bord[2][2] == 'X')
    {
        cout << "X is The Winner ";
        exit(1);
    }
    if (bord[0][0] == 'X' && bord[1][1] == 'X' && bord[2][2] == 'X')
    {
        cout << "X is The Winner ";
        exit(1);
    }
    if (bord[0][2] == 'X' && bord[1][1] == 'X' && bord[2][0] == 'X')
    {
        cout << "X is The Winner ";
        exit(1);
    }
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    if (bord[0][0] == 'O' && bord[0][1] == 'O' && bord[0][2] == 'O')
    {
        cout << "O is The Winner ";
        exit(1);
    }
    if (bord[1][0] == 'O' && bord[1][1] == 'O' && bord[1][2] == 'O')
    {
        cout << "O is The Winner ";
        exit(1);
    }
    if (bord[2][0] == 'O' && bord[2][1] == 'O' && bord[2][2] == 'O')
    {
        cout << "O is The Winner ";
        exit(1);
    }
    if (bord[0][0] == 'O' && bord[1][0] == 'O' && bord[2][0] == 'O')
    {
        cout << "O is The Winner ";
        exit(1);
    }
    if (bord[0][1] == 'O' && bord[1][1] == 'O' && bord[2][1] == 'O')
    {
        cout << "O is The Winner ";
        exit(1);
    }
    if (bord[0][2] == 'O' && bord[1][2] == 'O' && bord[2][2] == 'O')
    {
        cout << "O is The Winner ";
        exit(1);
    }
    if (bord[0][0] == 'O' && bord[1][1] == 'O' && bord[2][2] == 'O')
    {
        cout << "O is The Winner ";
        exit(1);
    }
    if (bord[0][2] == 'O' && bord[1][1] == 'O' && bord[2][0] == 'O')
    {
        cout << "O is The Winner ";
        exit(1);
    }
    return 0;
}
int main()
{
start:
    int opction;

    srand(time(NULL));

    cout << "\033[0;36m";
    cout << "***************" << endl;
    cout << "TicTacToe Game" << endl;
    cout << "***************" << endl;
    cout << "\033[0m";

    int menu;
    cout << "1.Player Vs Player" << endl;
    cout << "2.Player Vs Computer" << endl;
    cout << "3.Exit" << endl;
    cout << "=>";
    cin >> menu;

    switch (menu)
    {
    case 1:
        cout << "Player Vs Player Mode" << endl;
        display();
        cout << endl;

        winner();
        player_turn();
        display();
        cout << endl;

        winner();
        player_turn();
        display();
        cout << endl;

        winner();
        player_turn();
        display();
        cout << endl;

        winner();
        player_turn();
        display();
        cout << endl;

        cout << "\033[0;33m";
        winner();
        cout << "\033[0m";
        player_turn();
        display();
        cout << endl;

        cout << "\033[0;33m";
        winner();
        cout << "\033[0m";
        player_turn();
        display();
        cout << endl;

        cout << "\033[0;33m";
        winner();
        cout << "\033[0m";
        player_turn();
        display();
        cout << endl;

        cout << "\033[0;33m";
        winner();
        cout << "\033[0m";
        player_turn();
        display();
        cout << endl;

        cout << "\033[0;33m";
        winner();
        cout << "\033[0m";
        player_turn();
        display();
        cout << endl;

        cout << "************" << endl;
        cout << "Match Tie" << endl;
        cout << "************" << endl;

        break;

    case 2:
        cout << "Player Vs Computer" << endl;
        cout << "Computer = X " << endl;
        cout << "Player = O " << endl;

        display();
        cout << endl;

        winner();
        vs_computer();
        display();
        cout << endl;

        winner();
        vs_computer();
        display();
        cout << endl;

        winner();
        vs_computer();
        display();
        cout << endl;

        winner();
        vs_computer();
        display();
        cout << endl;

        cout << "\033[0;33m";
        winner();
        cout << "\033[0m";
        vs_computer();
        display();
        cout << endl;

        cout << "\033[0;33m";
        winner();
        cout << "\033[0m";
        vs_computer();
        display();
        cout << endl;

        cout << "\033[0;33m";
        winner();
        cout << "\033[0m";
        vs_computer();
        display();
        cout << endl;

        cout << "\033[0;33m";
        winner();
        cout << "\033[0m";
        vs_computer();
        display();
        cout << endl;

        cout << "\033[0;33m";
        winner();
        cout << "\033[0m";
        vs_computer();
        display();
        cout << endl;

        winner();

        cout << "************" << endl;
        cout << "Match Tie" << endl;
        cout << "************" << endl;
        break;
    case 3:
        exit(1);

    default:
        cout << "Error";
    }

    return 0;
}
