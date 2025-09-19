#include <iostream>
#include <windows.h> // lo necesito para la entrada y salida.
using namespace std;

int main () 
{
	// configuracion
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	// variables
	string nombre;
	int edad;
	float altura;
	string condicionTexto;
	// bool condicionEstudiante; inicio error
	// string condicionalTexto =  condicionEstudiante ? "no" : "si"; fin error

	// entrada y salida de datos.
	cout <<"Ingresa tu nombre, por favor: ";
	cin >> nombre;
	cout <<"Ingresa tu edad, por favor: ";
	cin >> edad;
	cout <<"Ingresa tu altura, por favor: ";
	cin >> altura;
	cout <<"Ingresa si eres estudiante (si/no): "<<endl;
	cin >> condicionTexto;
	cout <<"Hola "<<nombre<<", tienes "<<edad<<" años, mides "<<altura<<" metros y tu "<<condicionTexto<<" eres estudiante.";
	return 0;
}