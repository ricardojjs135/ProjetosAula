#include <iostream>
#include <iomanip>
using namespace std;

int main() { 

    double peso;
    double altura;
    double imc;
    string mensagem = "Seu imc é: ";

    cout << "Calculadora de IMC" << endl;
    cout << "Digite seu peso (kg): ";
    cin >> peso;
    cout << "Digite sua altura (x.xx): ";
    cin >> altura;

    imc = peso / (altura * altura);

    stringstream ss;
    ss << fixed << setprecision(2) << imc;
    string imcFormatado = ss.str();
    mensagem += imcFormatado;

    cout << mensagem << endl;
    
    if (imc < 18.5){
        cout << "Você está abaixo do peso";
    }
    else if (imc >= 18.5 && imc <= 24.9){
        cout << "Seu peso está normal";
    }
    else if (imc >= 25 && imc <= 29.9){
        cout << "Você está com sobrepeso";
    }
    else {
        cout << "Você tem obesidade";
    }

    cout << endl;
}