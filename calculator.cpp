#include <iostream>
using namespace std;

class calculator
{
public:
    void add(float a, float b)
    {
        float c= a+b;
        cout<<"The sum is: "<<c<<endl;
    }
    void diff(float a, float b)
    {
        float c= a-b;
        cout<<"The difference is: "<<c<<endl;
    }
    void mult(float a, float b)
    {
        float c= a*b;
        cout<<"The product is: "<<c<<endl;
    }
    void div(float a, float b)
    {
        float c= a/b;
        cout<<"The division is: "<<c<<endl;
    }

};
int main()
{
    float a,b;
    int c;
    cout<<"Welcome to calculator"<<endl;

    cout<<"Enter two numbers."<<endl;
    cin>>a>>b;
    cout<<"This performs the following tasks: "<<endl;
    cout<<"1.Addition"<<endl;
    cout<<"2.Subtraction"<<endl;
    cout<<"3.Multiplication"<<endl;
    cout<<"4.Division"<<endl;
    cout<<"Enter the operation number(1 to 4). "<<endl;
    cin>>c;
    calculator x;
    switch(c)
    {
        case 1:
            x.add(a,b);
        break;
        case 2:
            x.diff(a,b);
        break;
        case 3:
            x.mult(a,b);
        break;
        case 4:
            x.div(a,b);
        break;
        default:
            cout<<"Wrong Choice!";
    }


    return 0;
}
