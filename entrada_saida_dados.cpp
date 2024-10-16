#include <iostream>
#include <iomanip>
using namespace std;

int main() { 
  string nome;
  int idade;
  double altura;

  cout << "Digite seu nome: ";
  cin >> nome;
  
  cout << "Digite sua idade: ";
  cin >> idade;
  
  cout << "Digite sua altura (X.XX): ";
  cin >> altura;

  stringstream ss;
  ss << fixed << setprecision(2) << altura;
  string alturaFormatada = ss.str();

  string mensagem = "Olá, " + nome + "! Você tem " + to_string(idade) + " anos e sua altura é " + alturaFormatada + " metros.";

  cout << mensagem << endl;

}