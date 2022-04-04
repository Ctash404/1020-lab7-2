#include "EncryptableString.h"

// Function to increment the ACII value by 1
void EncryptableString::encrypt(std::string &code)
{
    // Temp value to hold the original value
    std::string tempCode;
    // Int to hold the string size 
    int size = code.size();

    // Checks to see if the character value is Z or z and
    // changes it to A or a otherwise changes the ASCII value by 1.
    for (int i = 0; i < size; ++i)
    {
        if (code[i] == 'Z')
        {
            code[i] = 'A';
        }
        else if (code[i] == 'z')
        {
            code[i] = 'a';
        }
        else 
        {
            tempCode[i] = code[i];
            code[i] = tempCode[i] + 1;
        }
    }
}