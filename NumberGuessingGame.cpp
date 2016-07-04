#include <iostream>
#include <cstdlib>
#include <ctime>
#define tab '\t'
#define newl '\n'

using namespace std;

int main()

{srand(static_cast<unsigned int>(time(0)));
    int randint = rand() % 100 + 1;
    int guess;
    int tries = 1;
    
    cout << tab << tab << tab << tab;
    cout << "Random number game!" << endl;
    cout << newl;
    
    do
    {cout << "Guess a number between 1 and 100: ";
        cin >> guess;
        cout << newl;
        
        if (guess < 1 || guess > 100 )
        {cout << "Please put a number between 1 and 100." << endl;
            cout << newl;}
        
        else if (guess > randint)
        {cout << "You guessed too high! Computer's turn" << endl;
            cout << newl;
            cout << newl;
            tries = tries + 1;
            int compguess = rand() % 100 + 1;
            cout << "Computer's pick: " << compguess << endl;
            cout << newl;
            
            if (compguess != randint)
            {cout << "Computer guessed incorrectly. Your turn." << endl;;
                cout << newl;
                cout << newl;}
            
            else
            {cout << "Computer guessed correctly." << endl;
                break;}}
        
        else if (guess < randint)
        {cout << "You guessed too low! Computer's turn" << endl;
            cout << newl;
            cout << newl;
            tries = tries + 1;
            int compguess = rand() % 100 + 1;
            cout << "Computer's pick: " << compguess << endl;
            cout << newl;
            
            if (compguess != randint)
            {cout << "Computer guessed incorrectly. Your turn." << endl;
                cout << newl;
                cout << newl;}
            
            else
            {cout << "Computer guessed correctly." << endl;
                break;}}
        
        else
        {cout << "You guessed correctly! Congratulations!"  << endl;
            cout << newl;
            cout << "Total Attempts: " << tries << endl;
            if (tries < 2)
            {cout << newl;
                cout << "You got it on the first try!!! Wow!!!";
                cout << newl;}
        }
	 	 } while(guess != randint);
    
}