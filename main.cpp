#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <random>
#include <ctime>

using namespace std;
int main() {
    string choice1;
    cout << "Please choose rock, paper or scissors." << endl;
    getline(cin,choice1);
    if(choice1 != "rock" && choice1 != "paper" && choice1 != "scissors"){
        cout <<"You did not enter your choice right. Please choose between rock, paper, scissors"<< endl;
        getline(cin,choice1);


    }

   // randomizing ai choice
    string which[3] = {"rock","paper","scissors"};
    srand(time(0));
    int choice2 = rand() % 3;
    string choice3 = which[choice2];

    cout << "The AI has chosen: " << choice3 << endl;
    // choice3

    // Choice 1 = rock
     if(choice1 == "rock") {
        if(choice2 == 0) {
            cout << "The game is draw" << endl;
        } else if(choice2 == 1) {
            cout <<"AI has won the game." << endl;

        }else {
            cout <<"Player has won the game." <<endl;
        }
    }
     // Choice1 = paper
    if(choice1 == "paper") {
        if(choice2 == 0) {
            cout << "Player has won the game." << endl;
        } else if(choice2 == 1) {
            cout <<"The game is draw." << endl;

        }else {
            cout <<"AI has won the game." <<endl;
        }
    }
     // Choice = scissors
    if(choice1 == "scissors") {
        if(choice2 == 0) {
            cout << "AI has won the game." << endl;
        } else if(choice2 == 1) {
            cout <<"Player has won the game." << endl;

        }else {
            cout <<"The game is draw." <<endl;
        }
    }
}
