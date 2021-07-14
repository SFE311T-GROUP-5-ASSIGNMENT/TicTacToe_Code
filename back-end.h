#pragma once
#include <iostream>
#include <stdlib.h>
using namespace std;

char board[3][3] = { {'1','2','3'},{'4','5','6'},{'7','8','9'} };
int choice;
int row, column;
char turn = 'X';
bool draw = false;

//This function displays configuration of the game board

void showBoard() {

    //Dispay the layout of the baord
    
    cout << "PLAYER 1 [X]\t PLAYER  2 [O]\n\n";
    cout << "\t\t__________________\n";
    cout << "\t\t|     |     |     | \n";
    cout << "\t\t|  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << "  |\n";
    cout << "\t\t|_____|_____|_____|\n";
    cout << "\t\t|     |     |     |\n";
    cout << "\t\t|  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << "  |\n";
    cout << "\t\t|_____|_____|_____|\n";
    cout << "\t\t|     |     |     |\n";
    cout << "\t\t|  " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << "  |\n";
    cout << "\t\t|_____|_____|_____|\n";
    
}

//Function to get the player input and update the board
//this function will take the player input and then update the board
void playerTurn() {
    if (turn == 'X') {
        cout << "\n\tPlayer 1 [X] turn : ";
    }
    else if (turn == 'O') {
        cout << "\n\tPlayer 2 [O] turn : ";
    }
    //Taking input from user
    //updating the board according to choice and reassigning the turn Start

//This while-loop will restrict user from entering a character 
while (true)
	{
		cin >> choice;
		if (!cin)
		{
			cout << "Wrong Choice. Enter again " << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			continue;
		}
		else break;
	}//end while-loop
    
    //switch case to get which row and column will be update

    switch (choice) {
    case 1: row = 0; column = 0; break;
    case 2: row = 0; column = 1; break;
    case 3: row = 0; column = 2; break;
    case 4: row = 1; column = 0; break;
    case 5: row = 1; column = 1; break;
    case 6: row = 1; column = 2; break;
    case 7: row = 2; column = 0; break;
    case 8: row = 2; column = 1; break;
    case 9: row = 2; column = 2; break;
    default:
    cout << "Invalid Entry";
    }

    if (turn == 'X' && board[row][column] != 'X' && board[row][column] != 'O') {
        /*updating the position for 'X' symbol if
        it is not already occupied*/
        board[row][column] = 'X';
        turn = 'O';
    }
    else if (turn == 'O' && board[row][column] != 'X' && board[row][column] != 'O') {
        /*this will update the position for 'O' symbol if
        it is not already occupied*/
        board[row][column] = 'O';
        turn = 'X';
    }
    else {
        //checking if a position has been filled
        cout << "Box already filled!\n Please choose another!!\n\n";
        playerTurn();
    }

    cout << endl;
    /* Ends */
  // showBoard();
}

//This function is to determine the winner or whether the game is drawn
bool endOfgame() {

    //checking the win for Simple Rows and Simple Column
    for (int i = 0; i < 3; i++)
        if (board[i][0] == board[i][1] && board[i][0] == board[i][2] || board[0][i] == board[1][i] && board[0][i] == board[2][i])
            return false;

    //checking the win for both diagonal
    if (board[0][0] == board[1][1] && board[0][0] == board[2][2] || board[0][2] == board[1][1] && board[0][2] == board[2][0])
        return false;

    //Checking the game is in continue mode or not
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] != 'X' && board[i][j] != 'O')
                return true;

    //Checking the if game already draw
    draw = true;
    return false;
}
