#include <iostream>
//#include <stdio.h>

using namespace std;

const int COL_SIZE = 3;
const int ROW_SIZE = 3;

void runGame();
void setPlayers(char &person1, char &person2);
void setBoard();


int main()
{
    runGame();
    return 0;
}

void runGame()
{
    char player1 = 'q';
    char player2 = 'r';
    setPlayers(player1, player2);

    cout << "player 1 and 2 is " << player1 << " and " << player2 << " respectively." << endl;

}

void setPlayers(char &person1, char &person2)
{
    char dummy;
    cout << "Choose X or O. (ex. enter a single character)" << endl;
    cin >> dummy;
    person1 = toupper(dummy);
    if (person1 == 'X')
        person2 = 'O';
    else if(person1 == 'O')
        person2 = 'X';
}

/* • runGame – the game loop
• initializeGame – sets the cells of the 2D array to spaces
• printCurrentBoard – prints whatever is in the current board
• getUserInput – gets the user input, and if valid, sets the game board appropriately
• cellAlreadyOccupied – returns true if a given cell (by row and column) is already occupied
• getWinner – returns “X”, “O” if there is a clear winner, or “ “ (a space) if there is no winner yet
• isBoardFull – returns if the board is full or not */