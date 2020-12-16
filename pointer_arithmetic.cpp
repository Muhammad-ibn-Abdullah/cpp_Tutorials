#include <iostream>
using namespace std;

int main()
{
    const int NSTRINGS = 5;
    string texts[NSTRINGS] = {"one", "two", "three", "four", "five"};

    string *ptr = texts;
    ptr += 3;
    cout << *ptr << endl;
    ptr -= 2;
    cout << *ptr << endl;

    cout << endl;

    string *ptr_end = &texts[NSTRINGS-1];
    ptr = &texts[0];

    while (ptr != ptr_end) {
        cout << *ptr << endl;
        ptr++;
    }

    ptr = &texts[0];

    long elements = (long)(ptr_end - ptr);
    cout << elements << endl << endl;

    ptr = &texts[0];
    ptr += NSTRINGS/2;
    cout << *ptr << endl;

    return 0;
}