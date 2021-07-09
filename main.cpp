#include "back-end.h"

int main()
{
    cout << "=== T I C K -- T A C -- T O E -- G A M E ===";
    cout << "\nttttFOR 2 PLAYERS\n";
    while (gameover()) {
        display_board();
        player_turn();
        gameover();
    }
    if (turn == 'X' && draw == false) {
        cout << "nnCongratulations!Player with 'X' has won the game";
    }
    else if (turn == 'O' && draw == false) {
        cout << "nnCongratulations!Player with 'O' has won the game";
    }
    else
        cout << "nnGAME DRAW!!!nn";


	return 0;
}
