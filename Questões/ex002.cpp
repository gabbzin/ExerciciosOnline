#include <iostream>

using namespace std;

int main(){
    float x, y, z;

    cout << "Digite a primeira medida: ";
    cin >> x;

    cout << "Digite a segunda medida: ";
    cin >> y;

    cout << "Digite a terceira medida: ";
    cin >> z;

    if((x + y > z) && (y + z > x) && (x + z > y)){
        cout << "Essas medidas podem formar um triangulo" << endl;
    } else {
        cout << "Essas medidas nao podem formar um triangulo" << endl;
    }

    return 0;
}