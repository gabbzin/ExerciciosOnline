#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int n;
    cout << "Digite um numero: ";
    cin >> n;

    int *dezena = (int*) malloc(sizeof(int));
    int *unidade = (int*) malloc(sizeof(int));
    *dezena = n / 10;
    *unidade = n % 10;

    switch(*dezena){
        case 0: cout << ""; break;
        case 1: cout << "dez"; break;
        case 2: cout << "vinte"; break;
        case 3: cout << "trinta"; break;
        case 4: cout << "quarenta"; break;
        case 5: cout << "cinquenta"; break;
        case 6: cout << "sessenta"; break;
        case 7: cout << "setenta"; break;
        case 8: cout << "oitenta"; break;
        case 9: cout << "noventa"; break;
    }

    cout << " e ";

    switch(*unidade){
        case 1: cout << "um"; break;
        case 2: cout << "dois"; break;
        case 3: cout << "tres"; break;
        case 4: cout << "quatro"; break;
        case 5: cout << "cinco"; break;
        case 6: cout << "seis"; break;
        case 7: cout << "sete"; break;
        case 8: cout << "oito"; break;
        case 9: cout << "nove"; break;
        case 0: cout << ""; break;
    }

    free(unidade);
    free(dezena);

    return 0;
}