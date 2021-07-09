/*Find description of code 
at 
https://github.com/SFE311T-GROUP-5-ASSIGNMENT/TicTacToe_Code/blob/0ebce2a45da3ce1c52a09bb4918505c107f2385a/README.md
*/

#include "back-end.h"

int main()
{
    cout << "===== T I C K - T A C - T O E =====";
    cout << "\n\t\t--- 2 PLAYER GAME!! ---\n";
    cout << "---NB* Board layout configured according to standard NUMPAD layout\n\n";
   
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

        cout << endl;
        cout << "GAME OVER!!\n\nGoodbye----" << endl;
        system("pause");
	return 0;
}
