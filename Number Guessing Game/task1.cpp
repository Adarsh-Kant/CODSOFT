#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
    int random, guess, guess_is_small=0, guess_is_large=100, no_of_guesses=0, game=1;
    while(game==1)
    {
        system("cls");
        srand(time(0));
        random=rand()%100+1;
        if(random==100)
        {
            random=99;
        }
        else if(random==1)
        {
            random=2;
        }
        cout<<"WELCOME TO THE WORLD OF GUESSING NUMBER\n\n\n";
        cout<<"Guess a number between 1 to 100: ";
        while(1)
        {
            cin>>guess;
            no_of_guesses++;
            if(guess>random)
            {
                guess_is_large=guess;
                cout<<"\nSorry, Guess a number larger than "<<guess_is_small<<" and smaller than "<<guess_is_large<<": ";
            }
            else if(guess<random)
            {
                guess_is_small=guess;
                cout<<"\nSorry, Guess a number larger than "<<guess_is_small<<" and smaller than "<<guess_is_large<<": ";
            }
            else
            {
                cout<<"\n\n\n\n***********************************************************************************\n";
                cout<<"CONGRATULATIONS!!.....YOU HAVE SUCCESSFULLY GUESSED THE RIGHT NUMBER IN "<<no_of_guesses<<" ATTEMPTS";
                cout<<"\n***********************************************************************************\n\n\n\n";
                break;
            }
        } 
        guess_is_small=0,guess_is_large=100,no_of_guesses=0;
        cout<<"Enter 1: To play the game again\n";
        cout<<"Enter 0: To exit the game\n";
        cout<<"Enter: ";
        cin>>game;
    }
    cout<<"\n\n\n\nBye Bye, Thanks for playing";
    cout<<"\n\nDeveloped By: ADARSH KANT\n\n";
    return 0;
}