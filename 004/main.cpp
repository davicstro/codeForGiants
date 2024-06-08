#include <iostream>
using namespace std;

/*
int main() {
    /*
        int / int --> int
        int / double --> double
        double / double --> double
    */

/*    double pi = 3.14 + 3.11; 
    double div = 5.0 / 2;

    //int div = 5.0 / 2 ;
    
    cout << pi << endl;
    cout << div;

    return 0; */



int main() {
    int num1;
    int num2;

    cout << "Digite o primeiro numero:" << endl;
    cin >> num1;
    
    cout << "Digite o segundo numero:" << endl;
    cin >> num2;
    
    int result = num1 + num2;
    
    cout << "O resultado é:" << result << endl;

    return 0;
}

