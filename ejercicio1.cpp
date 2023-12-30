/*
2023-119049     Eduardo Xavier Paca Aquino
*/

#include<iostream>
#include<vector>

using namespace std;

class Publicacion{
	private:
		string titulo;
		int precio;
	public:
		Publicacion(string, int);
		string getTitulo();
		int getPrecio();
};

Publicacion::Publicacion(string tit, int pre){
	titulo = tit;
	precio = pre;
}

string Publicacion::getTitulo(){
	return titulo;
}

int Publicacion::getPrecio(){
	return precio;
}

class Libro : public Publicacion{
	private:
		int paginas;
		int ejemplares;
	public:
		Libro(int, int, string, int);
		int getPaginas();
		int getEjemplares();
};

Libro::Libro(int pa, int ej, string tit, int pre) : Publicacion(tit, pre){
	paginas = pa;
	ejemplares = ej;
}

int Libro::getPaginas(){
	return paginas;
}

int Libro::getEjemplares(){
	return ejemplares;
}

class Ebook : public Publicacion{
	private:
		int peso;
		string formato;
	public:
		Ebook(int, string, string, int);
		int getPeso();
		string getFormato();
};

Ebook::Ebook(int pe, string fo, string tit, int pre) : Publicacion(tit, pre){
	peso = pe;
	formato = fo;
}

int Ebook::getPeso(){
	return peso;
}

string Ebook::getFormato(){
	return formato;
}

int main(){
	int maximo = 0;
	string titulo;
	int precio;
	Ebook Mario(12, "pdf", "juasjuas", 15);
	Ebook Juan(15, "word", "jajaja", 54);
	Ebook Pepe(42, "pdf", "camisa", 51);
	vector<Ebook> Lista = {Mario, Juan, Pepe};
	for (int i = 0; i < 3; i ++){
		if (Lista[i].getFormato() == "pdf" && Lista[i].getPeso() > maximo){
			maximo = Lista[i].getPeso();
		}
	}
	for (int i = 0; i < 3; i ++){
		if (Lista[i].getFormato() == "pdf" && Lista[i].getPeso() == maximo){
			titulo = Lista[i].getTitulo();
			precio = Lista[i].getPrecio();
			cout<<titulo<<", "<<precio<<endl;
		}
	}
	cout<<maximo;
}