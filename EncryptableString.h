#ifndef ENCRYPTABLE_STRING_H_
#define ENCRYPTABLE_STRING_H_
#include <iostream>
#include <string>

class EncryptableString : public std::string
{
    private:
        std::string code {""};
    public:
    // COnstructors
        EncryptableString() = default;
        EncryptableString(std::string code) : code{code} {}

        // Function to encrypt the string 
        void encrypt(std::string &code);
};

#endif