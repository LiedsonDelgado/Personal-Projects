#include<iostream>
using namespace std;

int main(){
    int valor;

    cout << "Introduza um valor: ";
    cin >> valor;

    if(valor >= 0){
        cout << "O valor digitado e positivo";
    }else{
        cout << "O valor digitado e negativo";
    }

    return 0;
}