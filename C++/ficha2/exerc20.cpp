#include<iostream>
using namespace std;

int main(){
    char letra;

    cout << "Digite uma letra(M ou F): ";
    cin >> letra;

    if(letra == 'M' || letra == 'm'){
        cout << "Masculino\n";
    }

    if(letra == 'F' || letra == 'f'){
        cout << "Feminino\n";
    }
    
    if((letra != 'M' && letra != 'm' && letra != 'F' && letra != 'f')){
        cout << "Erro: sexo invalido!\n";
    }

    return 0;
}