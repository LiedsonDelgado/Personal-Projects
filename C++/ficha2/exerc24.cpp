#include<iostream>
using namespace std;

int main(){
    char l;

    cout << "Introduza uma letra: ";
    cin >> l;

    if((l == 'a' || l == 'A') || (l == 'e' || l == 'E') || (l == 'i' || l == 'I') || (l == 'o' || l == 'O') || (l == 'u' || l == 'U')){
        cout << "A letra digitada e uma vogal\n";
    }else{
        cout << "A letra digitada e uma consoante\n";
    }

    return 0;
}