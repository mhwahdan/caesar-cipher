#include "classicalCryptography.h"

#include <iostream>

using namespace std;

classicalCryptography::caesarCipher::caesarCipher() {
    this->key = 3;
}

classicalCryptography::caesarCipher::caesarCipher(int key) {
    this->key = key;
}

void classicalCryptography::caesarCipher::setKey(int key)  {
    this->key = key;
}

int classicalCryptography::caesarCipher::getKey() {
        return this->key;
}

string classicalCryptography::caesarCipher::encrypt(string plaintext) {
    string result = "";
    for(char x : plaintext)
        for(int i = 0; i < 27; i++)
            if(x == this->characters[i])
                result += this->characters[(i + this->getKey()) % 27];
    return result;
}

string classicalCryptography::caesarCipher::decrypt(string cipher) {
    string result = "";
    for(char x : cipher)
        for(int i = 0; i < 27; i++)
            if(x == this->characters[i])
                result += this->characters[(i + (27 - this->getKey())) % 27];
    return result;
}

unsigned char classicalCryptography::caesarCipher::characters[] = {
        'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
        'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', ' '
};

