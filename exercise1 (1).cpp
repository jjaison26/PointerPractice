//Excercise 1
//Alex
//Humberto
//Jewel
//stubmit to: vc29645@harpercollege.edu


#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    int b = 0;

    int *ptrB = &b;
    int *ptrA = &a;

    cout << "\n\nWhat is interger a?\n";
    cin >> a;
    cout << "\n\nWhat is integer b?\n";
    cin >> b;

    cout << "\nThis is a: " << a;
    cout << "\nThis is b: " << b;

    cout << "\nThis is the pointer ptrA: " << *ptrA;
    cout << "\nThis is the pointer ptrB: " << *ptrB;

    cout << "\nProgram complete.";

    return  0;
}