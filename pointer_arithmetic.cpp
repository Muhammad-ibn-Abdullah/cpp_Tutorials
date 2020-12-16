#include <iostream>
using namespace std;

int main()
{
    const int NSTRINGS = 5;
    string texts[NSTRINGS] = {"one", "two", "three", "four", "five"};

    //Create a pointer and change where it is pointing to by arithmetic.
    string *ptr = texts;
    ptr += 3;
    cout << *ptr << endl;
    ptr -= 2;
    cout << *ptr << endl;

    cout << endl;

    //Set a specific pointer location by using the address operator.
    string *ptr_end = &texts[NSTRINGS-1];
    ptr = &texts[0];

    //Comparing pointers.
    while (ptr != ptr_end) {
        cout << *ptr << endl;
        ptr++;
    }

    ptr = &texts[0];

    //Arithmetic between two pointers evaluates to an int value.
    long elements = (long)(ptr_end - ptr);
    cout << elements << endl << endl;

    //Point the pointer to the middle element.
    ptr = &texts[0];
    ptr += NSTRINGS/2;
    cout << *ptr << endl;

    return 0;
}