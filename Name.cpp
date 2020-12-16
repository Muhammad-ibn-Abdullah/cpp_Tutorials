//Muhammad ibn Abdullah
//16 December 2020

#include <iostream>
using namespace std;

int main()
{
    string nm;  //Initialize string 
    
    cin >> nm;  //Take input from console

    if (nm.length() > 5)
        cout << "You have a lengthy name, " << nm << ".";
    else 
        cout << "Hello, " << nm << ".";
    return 0;
}