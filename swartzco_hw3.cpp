#include <iostream>
#include <stdlib.h>
#include <bitset>

using namespace std;

int getInput()
{
    string input;
    // HUD
    cout << "Enter a number between 0 and 65535. Or x to exit." << endl;
    cout << ">> ";
    // Input
    cin >> input;
    // Exit?
    if (input == "x" || input == "exit")
    {
        exit(0);
    }
    cout << "Your Input: " << input << endl;
    int num;
    try {
        num = stoi(input);
    }
    catch(invalid_argument &e) {
        num = -1;
    }
    return num;
}

bool validInput(int num)
{
    bool valid = !(num < 0 || num > UINT16_MAX);
    if (!valid)
    {
        cout << endl << "The number you entered: " << num 
             << " is less than 0 or greather than " 
             << UINT16_MAX << endl;
    }
    return valid;
}

string toBinary(uint num)
{
    uint start = (UINT16_MAX / 2) + 1;
    string sb = "";

    do
    {
        if (num >= start)
        {
            sb += "1";
            num -= start;
        }
        else
        {
            sb += "0";
        }
        //cout << "NUM: " << num << " START: " << start << " BIN: " << sb << endl ;
        start /= 2;
    } while (start != 0);

    return sb;
}

int main()
{
    int number;

    do {
        // Nag user for proper input
        do {
            number = getInput();
        } while(!validInput(number));

        // Cheater's way ;) #verify
        string binary = bitset<16>(number).to_string(); //to binary
        cout << "Binary cheat: " << binary << endl;
        cout << "Binary legit: " << toBinary(number) << endl << endl;
    } while(true);

}
