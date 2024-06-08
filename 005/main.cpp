#include <iostream>
using namespace std;

int main() {

double distance;
int kmpl;
double fuel;



cout << "Qual a distancia de sua viagem?" << endl;
cin >> distance;

cout << "Quantos km seu carro faz po litro?" << endl;
cin >> kmpl;

cout << "Qual valor da gasolina?" << endl;
cin >> fuel;

double result = distance / kmpl * fuel;
cout << "o custo da viagem sera de: " << "R$" << result << endl;
}