#include <iostream>
#include <windows.h>
using namespace std;

int main () 
{
	// Configuraciones UTF8
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	// variables
	int entradaNumeroOne;
	int entradaNumeroTwo;
	const string mensajeFinal = "EL resultado de tu operación es: ";
	const string mensajePregunta = "Ingresa un número, por favor: ";
	// inicio de codigo
	cout <<mensajePregunta;
	cin >> entradaNumeroOne;
	cout <<mensajePregunta;
	cin >> entradaNumeroTwo;
	double resultadoDivision = static_cast<double>(entradaNumeroOne) / entradaNumeroTwo;
	

	cout <<mensajeFinal<<entradaNumeroOne + entradaNumeroTwo<<endl;
	cout <<mensajeFinal<<entradaNumeroOne - entradaNumeroTwo<<endl;
	cout <<mensajeFinal<<entradaNumeroOne * entradaNumeroTwo<<endl;
	cout <<mensajeFinal<<resultadoDivision<<endl;
}