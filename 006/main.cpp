#include <iostream>
using namespace std;  

// int main(){
//     bool num = 2 > 1;
//     cout << num << endl;
//     return 0;
// }

// int main(){

//     int age;

//     cout << "Digite sua idade:" << endl;
//     cin >> age;

//     if (age >= 18) {
//         cout << "Você pode beber cachaça" << endl;
//     }else{
//         cout << "Vocẽ não pode beber cachaça!";
//     }

//     return 0;
// }

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

    if (average >= 7) {
    cout << "Passou de ano" << endl;
    } els {
    cout << "Reprovado" << endl;
    }

    return 0;
}



