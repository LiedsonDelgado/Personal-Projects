#include<iostream>
using namespace std;

int main(){
    float nota1 = 0.0;
    float nota2 = 0.0;
    float media = 0.0;

    cout << "Introduza a primeira nota: ";
    cin >> nota1;

    cout << "Introduza a segunda nota: ";
    cin >> nota2;

    media = (nota1+nota2)/2;

    if(media == 10.0){
        cout << "Aprovado com Distincao\n";
    }else if(media >= 7.0 && media != 10.0){
        cout << "Aprovado\n";
    }else{
        cout << "Reprovado\n";
    }

    return 0;
}