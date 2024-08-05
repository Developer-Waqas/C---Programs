#include <iostream> 
#include <conio.h>
using namespace std;

struct address
{
    char city[15];
    int pcode;
};

int main()
{
    address taq;
    cout << "Enter yor City name: " << endl;
    cin>>taq.city;
    cout << "Output from Structure " << endl;
    cout << "City:        " << taq.city << endl;
    cout << "Postal Code: " <<taq.pcode << endl;
    return 0 ;    
}
