#include <iostream>

using namespace std;
class ttt
{
public:
    bool isOver(char arr[],char a)
    {
        int c =0;
        if(arr[1]==a&&arr[2]==a&&arr[3]==a)
        {
            cout << a << " wins"<<endl;
            return false;
        }
        else if(arr[4]==a&&arr[5]==a&&arr[6]==a)
        {
            cout << a << " wins"<<endl;
            return false;
        }
        else if(arr[7]==a&&arr[8]==a&&arr[9]==a)
        {
            cout << a << " wins"<<endl;
            return false;
        }
        else if(arr[1]==a&&arr[4]==a&&arr[7]==a)
        {
            cout << a << " wins"<<endl;
            return false;
        }
        else if(arr[5]==a&&arr[2]==a&&arr[8]==a)
        {
            cout << a << " wins"<<endl;
            return false;
        }
        else if(arr[9]==a&&arr[6]==a&&arr[3]==a)
        {
            cout << a << " wins"<<endl;
            return false;
        }
        else if(arr[1]==a&&arr[5]==a&&arr[9]==a)
        {
            cout << a << " wins"<<endl;
            return false;
        }
        else if(arr[3]==a&&arr[5]==a&&arr[7]==a)
        {
            cout << a << " wins"<<endl;
            return false;
        }
        else
        {
            for(int i=1;i<=9;i++)
            {
                if(arr[i]==' ')
                    c++;
            }
            if(c>0)
                return true;
            else
            {
                cout<<"Game Over.Try again."<<endl;
                return false;
            }
        }
    }
    void takeInput(char a)
    {
        if((a!='X')&&(a!='O'))
        {
            cout << "Wrong Input.Enter again:"<<endl;
            cin>> a;
            takeInput(a);
        }
    }

    void printBoard(char arr[])
    {
        cout<<endl;
        cout<< "-------" << endl;
        cout<< "|";
        for(int i=1; i<=3; i++)
        {
            cout<<arr[i]<<"|";
        }
        cout<<endl;
        cout << "-------" << endl;
        cout<< "|";

        for(int i=4; i<=6; i++)
        {
            cout<<arr[i]<<"|";
        }
        cout<<endl;
        cout << "-------" << endl;
        cout<< "|";

        for(int i=7; i<=9; i++)
        {
            cout<<arr[i]<<"|";
        }
        cout<<endl;
        cout << "-------" << endl;


    }
};

int main() {
    char arr[10];
    int d=4;
    for (int i = 0; i <= 9; i++)
        arr[i] = ' ';
    char turn;
    char cturn;
    int move;
    bool cont = true;
    bool over = true;
    while(cont==true)
    {
        cout << "Welcome to Tic-Tac-Toe game" << endl;
        cout << "The position are as follows corresponding to the digits" << endl;
        cout << "-------" << endl;
        cout << "|";
        for (int i = 1; i <= 3; i++)
        {
        cout << i << "|";
        }
        cout << endl;
        cout << "-------" << endl;
        cout << "|";
        for (int i = 4; i <= 6; i++) {
        cout << i << "|";
        }
        cout << endl;
        cout << "-------" << endl;
        cout << "|";
        for (int i = 7; i <= 9; i++) {
        cout << i << "|";
        }
        cout << endl;
        cout << "-------" << endl;
        cout << "Each Player can enter X or O in the places of the digits" << endl;
        cout << "If Player1 is X, Player2 is O" << endl;
        cout << "Start the Game. Player1 enter choice(X or O): " << endl;
        cin >> turn;
        ttt g;
        g.takeInput(turn);
        if (turn == 'X')
        cout << "Player1 -> X   Player2 -> O" << endl;
        else
        cout<<"Player1 -> O   Player2 -> X"<<endl;
        cout<<"Move= any digit from 1 to 9"<<endl;
        g.printBoard(arr);
        int c=0;
        over=true;
        while(over == true)
        {

            if(c%2==0)
            {
                cout << "Player 1 enter the move: ";
                cin >> move;
                if(arr[move]==' ')
                {
                    if(turn=='X')
                    {
                        arr[move] = 'X';
                        cturn = 'X';
                    }
                    else
                    {
                        arr[move] = 'O';
                        cturn = 'O';
                    }
                }
                else
                {
                    cout << "Wrong Input,already occupied" << endl;
                    c--;
                }

            }
            else
            {
                cout<<"Player 2 enter the move: ";
                cin >> move;
                if(arr[move]==' ')
                {
                    if (turn == 'X')
                    {
                        arr[move] = 'O';
                        cturn = 'O';
                    }
                    else
                    {
                        arr[move] = 'X';
                        cturn = 'X';
                    }
                }
                else
                {
                    cout << "Wrong Input,already occupied" << endl;
                    c--;
                }
            }

            g.printBoard(arr);
            over = g.isOver(arr, cturn);
            c++;
        }
        while(d>2)
        {
            cout << "Want to play another game?Enter '0' for 'true' or '1' for 'false'." << endl;
            cin >> d;
            if (d == 0)
                cont = true;
            else if(d == 1)
                cont = false;
            else
                cout<<"Wrong choice. Enter again.";
        }
    }
    return 0;
}
