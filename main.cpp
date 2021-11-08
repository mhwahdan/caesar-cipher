#include "iostream";
#include "classicalCryptography.h";

using namespace classicalCryptography;
using namespace std;



int main(){
    caesarCipher* _cipher = new caesarCipher(7);
    cout << _cipher->encrypt("rome is the greatest empire") << "\n";
    cout << _cipher->decrypt("yvtlgpzg olgnylh lz gltwpyl");
    return 0;
}