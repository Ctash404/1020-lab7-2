// Programmers: Team 30 - Shaine O'Neal, Conner Tash, Blake Moore
// Program to encrypt the users string input by incrementing the ASCII value by 1. 
// If the character is 'Z' or 'z' then change it to 'A' or 'a' respectivly.
#include "EncryptableString.h"
using namespace std;

int main()
{
    // User value variable
    string codeWord;

    // Input text
    cout << "This is an Encryption program. Enter a string to encrypt: ";
    cin >> codeWord;

    // Object for the code
    EncryptableString codeEncypt;

    // Send the string to the function using the object to 
    // acess the class.
    codeEncypt.encrypt(codeWord);

    // Output 
    cout << "Here is the encrypted string: " << codeWord << endl;
    return 0;
}