#include <iostream>
#include <iomanip>
using namespace std;

int main() { 

    double largura;
    double altura;
    double area;
    string mensagem = "A altura do retângulo é: ";

    cout << "Digite a largura do retângulo: ";
    cin >> largura;

    cout << "Agora digite a altura: ";
    cin >> altura;

    area = largura * altura;

    stringstream ss;
    ss << fixed << setprecision(2) << area;
    string areaFormatada = ss.str();

    mensagem += areaFormatada;

    cout << mensagem << endl;
    
}