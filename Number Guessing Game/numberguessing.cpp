#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    int range,secretnumber,attempts,guess;
    cout<<"Enter Range of the Game: ";
    cin>>range;
    srand(std::time(0));
    secretnumber=(rand() % range) + 1;
    cout<<"Enter number of Attempts: ";
    cin>>attempts;
    int i=1;
    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "You have " << attempts << " attempts to guess a number between 1 and " << range << "." << endl;
    cout << "Invalid guesses will still count as attempts, so choose wisely!" << endl;

    while(i<=attempts){
        cout<<"Attempt "<<i<<": ";
        cin>>guess;
        if(guess < 1 || guess > range){
        cout << "Invalid guess!! Out of range" << endl;
        }
        else{
            if(guess==secretnumber){
            cout<<"Your guess is correct!"<<endl;
            break;
        }
        else{
            if(guess<secretnumber) cout<<"Less than the Secret Number!"<<endl;
            if(guess>secretnumber) cout<<"Greater than the Secret Number!"<<endl;
            
        }
    }
    if(i==attempts) cout<<"Game Over!! The Secret Number was: "<<secretnumber<<endl;
     i++;
        }
    return 0;
}
