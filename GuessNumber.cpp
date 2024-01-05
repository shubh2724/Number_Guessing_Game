#include<iostream>
using namespace std;


int main () {

    cout << endl;
    cout << "                                               WELCOME to the Number Guessing Game" << endl;
    cout << "                         You will have the limited number of chances to guess the number...Good Luck!" << endl;

    int difficulty, n;
    int a = rand();

    cout << "Rules to play game" << endl;
    cout << endl;

    cout << "0 to end the game               1 for easy                    2 for medium                   3 for difficult" << endl;
    cout << endl;
    cout << "Enter the difficulty - ";
    cin >> difficulty;
    cout << endl;

    if (difficulty == 1)
    {
        cout << "You have 10 chances to  guess the number" << endl << endl;
        int choices = 10;
        for (int i = 0; i <= 10; i++) {
            cout << "Guess the number - ";
            cin >> n;
            if (a == n) {
                cout << "You guess the right number" << endl;
                break;
            }

            else if (a%n == 0 || a%n == 1) {
                cout << "You are too close :)"<< endl;
            }

            else if (a > n) {
                cout << "The secret number is greater than your guess" << endl;
            }
            

            else {
                cout << "The secret number is lesser than your guess" << endl;
            }
            choices--;

            if (choices == 1) {
            cout << "last chance" << endl << endl;
            }

            else if (choices == 0) {
                exit(0);
            }

            else {
            cout << choices << " choices left" << endl << endl;

            }
        }
    }
    
    else if (difficulty == 2)
    {
        cout << "You have 6 chances to  guess the number" << endl << endl;
        int choices = 6;
        for (int i = 0; i <= 6; i++) {
            cout << "Guess the number - ";
            cin >> n;
            if (a == n) {
                cout << "You guess the right number" << endl;
                break;
            }

            else if (a%n == 0 || a%n == 1) {
                cout << "You are too close :)"<< endl;
            }

            else if (a > n) {
                cout << "The secret number is greater than your guess" << endl;
            }
            

            else {
                cout << "The secret number is lesser than your guess" << endl;
            }
            choices--;

            if (choices == 1) {
            cout << "last chance" << endl << endl;
            }
            else if (choices == 0) {
                exit(0);
            }
            else {
            cout << choices << " choices left" << endl << endl;

            }

        }
    }
    
    else if (difficulty == 3)
    {
        cout << "You have 3 chances to  guess the number" << endl << endl;
        int choices = 3;
        for (int i = 0; i <= 3; i++) {
            cout << "Guess the number - ";
            cin >> n;
            if (a == n) {
                cout << "You guess the right number" << endl;
                break;
            }
            
            else if (a%n == 0 || a%n == 1) {
                cout << "You are too close :)"<< endl;
            }

            else if (a > n) {
                cout << "The secret number is greater than your guess" << endl;
            }
            

            else {
                cout << "The secret number is lesser than your guess" << endl;
            }
            choices--;

            if (choices == 1) {
            cout << "last chance" << endl << endl;
            }
            else if (choices == 0) {
                exit(0);
            }
            else {
            cout << choices << " choices left" << endl << endl;

            }
        }
    }

    else {
        exit(0);
    }
    


    return 0;
}