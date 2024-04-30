#include <iostream>
#include <string>
#include <fstream>
#include "NumMonster.h"
#include "Guess_Your_Luck.h"
#include "tictactoe.h"
using namespace std;


int main() {
    string con;
	string player1 = "Player 1", player2 = "Player 2";
    cout << "Welcome to XXXXXXX" << endl;
    cout << "This a game is for two player" << endl;
    cout << "You will play three different games" << endl;
    cout << "In each game, player who win will gain a mark" << endl;
    cout << "After three games, who get the highest mark will win!!!" << endl;
    cout << "Press enter to start the game";
    eliminate(player1, player2);
    cout << "Press enter to start the next game";
    cin >> con;
    Guess_Your_Luck(player1, player2);
    cout << "Press enter to start the next game";
    cin >> con;
    playGame();
    ifstream fin;
    fin.open("counting.txt");
    if ( fin.fail() ){
        cout << "Error in file opening!"
        << endl;
        exit(1);
    }
    char win;
    int count = 0;
    while (fin.get(win)) {
        if (win == '1') {
            count++;
        }
    }
    if (count >= 2){
        cout << "player1 " << "win!!!" << endl;
    }
    else{
        cout << "player2 " << "win!!!" << endl;
    }
}
