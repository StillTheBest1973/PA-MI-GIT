/*
2023-119049     Eduardo Xavier Paca Aquino
*/

#include<iostream>
#include<vector>

using namespace std;

class Persona{
	private:
		string nombre;
		string domicilio;
	public:
		Persona(string, string);
		string getNombre();
		string getDomicilio();
};

Persona::Persona(string nom, string dom){
	nombre = nom;
	domicilio = dom;
}

string Persona::getNombre(){
	return nombre;
}

string Persona::getDomicilio(){
	return domicilio;
}

class Cliente : public Persona{
	private:
		char nivel;
		int limCredito;
	public:
		Cliente(char, int, string, string);
		char getNivel();
		int getCredito();
};

Cliente::Cliente(char ni, int cre, string nom, string dom) : Persona(nom, dom){
	nivel = ni;
	limCredito = cre;
}

char Cliente::getNivel(){
	return nivel;
}

int Cliente::getCredito(){
	return limCredito;
}

class Empleado : public Persona{
	private:
		string nivel;
		int salario;
	public:
		Empleado(string, int, string, string);
		string getNivel();
		int getSalario();
};

Empleado::Empleado(string ni, int sa, string nom, string dom) : Persona(nom, dom){
	nivel = ni;
	salario = sa;
}

string Empleado::getNivel(){
	return nivel;
}

int Empleado::getSalario(){
	return salario;
}

int main(){
	int maximo = 0;
	string nombre, domicilio;
	Empleado Mario("analista", 1200, "mario", "peru");
	Empleado Juan("cajero", 900,"juan" , "peru");
	Empleado Pepe("ejecutivo", 1600, "pepe", "bolivia");
	Empleado Lista[] = {Mario, Juan, Pepe};
	for (int i = 0; i < 3; i ++){
		if (Lista[i].getNivel() == "analista" && Lista[i].getSalario() > maximo)
			maximo = Lista[i].getSalario();
	}
	for (int i = 0; i < 3; i ++){
		if (Lista[i].getNivel() == "analista" && Lista[i].getSalario() == maximo){
			nombre = Lista[i].getNombre();
			domicilio = Lista[i].getDomicilio();
			cout<<nombre<<", "<<domicilio<<endl;
		}
	}
	cout<<maximo;
}
