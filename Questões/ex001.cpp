#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Digite um numero: ";
    cin >> n;
    if (n % 2 == 0){
        cout << "O numero e par." << endl;
    } else {
        cout << "O numero e impar." << endl;
    }

    return 0;
}