#include<iostream>
using namespace std;

int main(){
    int n1,n2,n3;

    cout << "Introduza um primeiro numero: ";
    cin >> n1;

    cout << "Introduza um segundo numero: ";
    cin >> n2;

    cout << "Introduza um terceiro numero: ";
    cin >> n3;

    if(n1>n2 && n1>n3){
        cout << "O numero " << n1 << " e o maior\n";
    }

    if(n2>n1 && n2>n3){
        cout << "O numero " << n2 << " e o maior\n";
    }

    if(n3>n1 && n3>n2){
        cout << "O numero " << n3 << " e o maior\n";
    }

    if(n1==n2 && n2==n3){
        cout << "Todos os numeros sao iguais\n";
    }

    return 0;
}