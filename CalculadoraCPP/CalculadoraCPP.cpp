#include <iostream>
using namespace std;

int main(){

	int num1, num2;
	char operador;
	int resultado;

	cout << "Bem-vindo a calculadora no terminal!\n";
	system("pause");

	cout << "Digite o primeiro numero: ";
	cin >> num1;
	cout << "Agora digite o segundo numero: ";
	cin >> num2;
	cout << "Agora digite o operador: ";
	cin >> operador;

	switch (operador){
	case '+':
		resultado = num1 + num2;
		break;
	case '-':
		resultado = num1 - num2;
		break;
	case '*':
		resultado = num1 * num2;
		break;
	case '/':
		resultado = num1 / num2;
		break;
	case '%':
		resultado = num1 % num2;
		break;
	default:
		cout << "Operador invalido! Tente novamente!";
	}

	cout << "Resultado: " << resultado << "\n";

	return 0;
}


