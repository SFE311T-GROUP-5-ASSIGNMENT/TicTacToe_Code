/*This is a text-based game of tic-tac-toe. Tic-tac-toe or noughts and
crosses is a game where two players take turns marking an empty cell in a 3 x
3 grid with their respective tokens. Each player has either an X token or an O
token. A player wins whenever they place three of their tokens in a horizontal,
vertical, or diagonal row on the grid. A draw occurs when all the cells on the
grid have been filled with tokens and neither player has won.*/

#include "back-end.h"

int main()
{
    cout << "=== T I C K -- T A C -- T O E -- G A M E ===";
    cout << "\n\t\t\t\tFOR 2 PLAYERS\n";
   
    while (endOfgame()) 
    {
        showBoard();
        playerTurn();
        endOfgame();
    }
        if (turn == 'X' && draw == false) 
        {
        cout << "\n\nPlayer 1 wins";
        }
   
            else if (turn == 'O' && draw == false) 
            {
            cout << "\n\nPlayer 2 wins";
            }
                 else
                 cout << "\n\nThis Game was a draw\n\n";


        system("pause");
	return 0;
}
