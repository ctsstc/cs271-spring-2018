#include <iostream>
#include <stdlib.h>
#include <bitset>

using namespace std;

int getInput()
{
    int number;
    // HUD
    cout << "Enter a number between 0 and 65535." << endl;
    cout << ">> ";
    // Input
    cin >> number;
    cout << "Your Input: " << number << endl;
    return number;
}

bool validateInput(int num)
{
    bool invalid = num < 0 || num > UINT16_MAX;
    if (invalid)
    {
        cout << endl << "The number you entered: " << num 
             << " is less than 0 or greather than " 
             << UINT16_MAX << endl;
    }
    return !invalid;
}

int main()
{
    int number;

    // Nag user for proper input
    do {
        number = getInput();
    } while(!validateInput(number));

    string binary = bitset<16>(number).to_string(); //to binary
    cout << "Binary: " << binary << endl;

}


string toBinary(uint num)
{
    return "";
}
