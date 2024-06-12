#include <iostream>
using namespace std;

int main(){

    double n1, n2, n3, n4;

    cout << "Digite a sua nota do primeiro periodo:" << endl;
    cin >> n1;
    cout << "Digite a sua nota do segundo periodo:" << endl;
    cin >> n2;
    cout << "Digite a sua nota do terceiro periodo:" << endl;
    cin >> n3;
    cout << "Digite a sua nota do quarto periodo:" << endl;
    cin >> n4;

    double average = (n1 + n2 + n3 + n4) / 4;
    
    cout << "average: " << average << endl;

    if (average < 5) {
      cout << "Você foi para vala" << endl;
    } else if (average < 7) {
      cout << "Você foi para recuperação" << endl;
    } else {
      cout << "Passou de ano" << endl;
    }

    return 0;
}



