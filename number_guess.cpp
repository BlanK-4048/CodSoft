#include <iostream>
#include <cstdlib>
using namespace std;


int main() {
    int N = 100;
    int input= -1;
    int guess= rand() %N;
    while(guess!=input)
    {
        cout<<"Enter your guess: "<<endl;
        cin>>input;
        if(guess>input)
            cout<<"Guess is too low. Try again!"<<endl;
        else if(guess<input)
            cout<<"Guess is too high. Try again!"<<endl;
        else
            cout<<"Congrats"<<endl;
    }
    cout<<"The number is "<<guess<<endl;
    return 0;
}
