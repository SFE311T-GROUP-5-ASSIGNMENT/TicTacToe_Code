#include "back-end.h"

int main()
{
    cout << "=== T I C K -- T A C -- T O E -- G A M E ===";
    cout << "\n\t\t\t\tFOR 2 PLAYERS\n";
    while (gameover()) {
        display_board();
        player_turn();
        gameover();
    }
    if (turn == 'X' && draw == false) {
        cout << "\n\nCongratulations!Player with 'X' has won the game";
    }
    else if (turn == 'O' && draw == false) {
        cout << "\n\nCongratulations!Player with 'O' has won the game";
    }
    else
        cout << "nnGAME DRAW!!!\n\n";


	return 0;
}
