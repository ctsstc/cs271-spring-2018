#include <iostream>
#include <stdlib.h>
#include <bitset>

using namespace std;

int main()
{
    cout << "Enter a number between 0 and 65535." << endl;

    cout << ">> ";
    int number;
    cin >> number;
    cout << "Your Input " << number << endl;

    string binary = bitset<16>(number).to_string(); //to binary
    cout << binary << endl;

}
void validateInput()
{

}

string toBinary(uint num)
{
    return "";
}
