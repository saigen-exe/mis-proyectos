#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;

int main () 
{
	// configuracion UTF8
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	// variables
	int edadUsuario;
	const string lineadivisoria = "===O===O===O===O===O===O===O===O===O===O===O===O===O===O===O===O===O===O===O===O===O===O===O===O===O===O===O";
	 
	// inicio codigo
	cout <<lineadivisoria<<endl;
	cout <<setw(130)<<"👵🏻👩🏻👩🏻‍🎓👧🏻 Edad Valida 👦🏻👩🏻‍🎓👨🏻👴🏻"<<endl;
	cout <<lineadivisoria<<endl;
	cout <<"Ingresa tu edad, por favor: ";
	cin >> edadUsuario;
	
	if (edadUsuario <= -1) 
	{
		cout <<"No existes aun? 🤔"<<endl;
	} else if (edadUsuario > 150) 
	{
    		cout << "¿Eres un viajero del tiempo? 🕰️" << endl;
	} else if (edadUsuario < 13) 
	{
		cout <<"Aún eres un niño 👦🏻👧🏻"<<endl;
	} else if (edadUsuario <= 17) 
	{
		cout <<"Aún eres un adolescente 👨🏻‍🎓👩🏻‍🎓"<<endl;
	} else if (edadUsuario <= 64) 
	{
		cout <<"Ya eres un adulto 👩🏻👨🏻"<<endl;
	} else 
	{
		cout <<"Ya eres un adulto mayor 👵🏻👴🏻"<<endl;
	}
	return 0;
}