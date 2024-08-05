#include <iostream>
using namespace std;
int main()
{
    float num1,num2;
    char op,repeat;

    do{
    cout << "Please enter your First Number = " << endl;
    cin>> num1;
    cout << "Please enter Opreator = " << endl;
    cin>> op;
    cout << "Please enter your Second Number = " << endl;
    cin>> num2;

    switch (op)
    {
    case '+':
        cout << "Addition = " << num1 + num2 << endl;
        break;
    case '-':
        cout << "Difference = " << num1 - num2 << endl;
        break;
    case '*':
        cout << "Product = " << num1 * num2 << endl;
        break;
    case '/':
        cout << "Division = " << num1 / num2 << endl;
        break;  
    default: 
        cout << "Invalid Operator!" << endl;
        break;
        
    }
    cout << "If want to Repeat, Please Enter 'R' or 'r'" << endl;   
        cin >> repeat;
    }
    while (repeat == 'R' || repeat == 'r');
}