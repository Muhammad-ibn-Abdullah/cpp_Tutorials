#include <iostream>
using namespace std;

int main()
{
    char text[] = "hello";  //Create a char array

    for (int i = 0; i < sizeof(text); i++)
        //sizeof(text) returns the size of the char array
        //because each char holds 1 byte.
        cout << i << ": " << text[i] << endl;
        //The final output: 5: is actually the null char, which isn't outputted
        //but has an int value of 0;

    int k = 0;

    while (true) {
        if (text[k] == '\0')
            break;
        cout << text[k] << endl;
        k++;
    }

    char str[] = "Muhammad ibn Abdullah";

    //Set the condition to if the loop is not at the end of the char
    //Known as the null char: '\0'
    for (int i = 0; str[i] != '\0'; i++)
        cout << str[i];
    cout << endl;

    //Do the same thing as above, but with a while loop.
    int i = 0;
    while (str[i] != '\0') {
        cout << str[i];
        i++;
    }
    return 0;
}