#ifndef CAESERCIPHER_CLASSICALCRYPTOGRAPHY_H
#define CAESERCIPHER_CLASSICALCRYPTOGRAPHY_H

#include <iostream>

using namespace std;

namespace classicalCryptography
{
    class caesarCipher{
    public:
        caesarCipher(int key);
        caesarCipher();
        string encrypt(string plaintext);
        string decrypt(string cipher);
        void setKey(int key);
        int getKey();
    private:
        unsigned int key;
        static unsigned char characters[];
    };
}

#endif
