#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;

int main ()
{	
	// configuracion UTF8
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	// variables
	int valor1;
	int valor2;
	const string mensajeEntrada = "Ingresa un numero, por favor:  ";
	const string mensajeFinal = "El resultado de la operacion de ";
	
	// inicio codigo
	
	cout <<mensajeEntrada;
	cin >> valor1;
	cout <<mensajeEntrada;
	cin >> valor2;

	int suma = valor1 + valor2;
	int resta = valor1 - valor2;
	int multiplicacion = valor1 * valor2;
	int divisionInt = valor1 / valor2;
	double divisionDec = static_cast<double>(valor1) / valor2;
	cout << fixed << setprecision(2);

	cout << setw(10) <<mensajeFinal<<"la suma es: "<<suma<<endl;
	cout << setw(10) <<mensajeFinal<<"la resta es: "<<resta<<endl;
	cout << setw(10) <<mensajeFinal<<"la multiplicacion es: "<<multiplicacion<<endl;
	cout << setw(10) <<mensajeFinal<<"la division natural es: "<<divisionInt<<endl;
	cout << setw(10) <<mensajeFinal<<"la division decimal es: "<<divisionDec<<endl;
	return 0;	 
}