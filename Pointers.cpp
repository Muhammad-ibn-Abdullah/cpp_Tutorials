//Copyright (c) Satoshi Nakamoto 2020
//Date: 14 Dec. 2020

#include <iostream>
using namespace std;

void manipulate(double *ptrValue)   //Call by reference
{
    cout << "Initial value: " << *ptrValue << endl;
    *ptrValue = 10.0;
    cout << "Final value: " << *ptrValue << endl; 
}

int main()
{
    string texts[] = {"one", "two", "three"};
    string *ptr = texts;

    for (int i = 0; i < sizeof(texts)/sizeof(string); i++) {
        cout << ptr[i] << endl;
    }

    for (int i = 0; i < sizeof(texts)/sizeof(string); i++, ptr++) {
        cout << *ptr << endl;
    }

    cout << endl;
    string *pElement = &texts[0];
    string *pEnd = &texts[2];

    while (true) {
        cout << *pElement << endl;
        if (pElement == pEnd) {
            break;
        }
        pElement++;
    }
}