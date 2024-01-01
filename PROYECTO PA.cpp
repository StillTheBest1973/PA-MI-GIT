#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;

class Producto{
	private:
		string nombre;
		string tipo;
		int cantidad;
		float precio;
		float ganancia;
	public:
		Producto(string, string, int, float, float);
		string getNombre();
		string getTipo();
		int getCantidad();
		float getPrecio();
		float getGanancia();
		void setNombre(string);
		void setTipo(string);
		void setCantidad(int);
		void setPrecio(float);
		void setGanancia(float);
		bool operator== (Producto&);
};

Producto::Producto(string nom, string tip, int cant, float pre, float gan){
	nombre = nom;
	tipo = tip;
	cantidad = cant;
	precio = pre;
	ganancia = gan;
}

string Producto::getNombre(){
	return nombre;
}

string Producto::getTipo(){
	return tipo;
}

int Producto::getCantidad(){
	return cantidad;
}

float Producto::getPrecio(){
	return precio;
}

float Producto::getGanancia(){
	return ganancia;
}

void Producto::setNombre(string e){
	nombre = e;
}

void Producto::setTipo(string e){
	tipo = e;
}

void Producto::setCantidad(int e){
	cantidad = e;
}

void Producto::setPrecio(float e){
	precio = e;
}

void Producto::setGanancia(float e){
	ganancia = e;
}

bool Producto :: operator== (Producto& e){
	if(this->cantidad == e.cantidad && this->ganancia){

	}
}
//Producto == Producto
class Inventario{
	protected:
		vector <Producto> Productos;
	public:
		Inventario(vector<Producto>);
		vector<Producto> getProductos();
		void AgregarProducto(Producto);
		void AgregarProducto(string, int);
		void QuitarProducto(string, int);
		void VerTodo();
};

Inventario::Inventario(vector<Producto> e){
	Productos = e;
}

vector<Producto> Inventario::getProductos(){
	return Productos;
}

void Inventario::AgregarProducto(Producto e){
	Productos.push_back(e);
}

void Inventario::AgregarProducto(string e, int a){
	for(int i = 0; i < Productos.size(); i++){
		if (Productos[i].getNombre() == e){
			Productos[i].setCantidad(Productos[i].getCantidad() + a);
			return;
		}
	}
	cout<<"Ese producto no existe en el inventario, tienes que crearlo"<<endl<<endl;
}

void Inventario::QuitarProducto(string e, int a){
	for(int i = 0; i < Productos.size(); i++){
		if (Productos[i].getNombre() == e){
			if (Productos[i].getCantidad() > a){
				Productos[i].setCantidad(Productos[i].getCantidad() - a);
				return;
			} else {
				cout<<"No tenemos esa cantidad, elige algo menor."<<endl<<endl;
				return;
			}
		}
	}
	cout<<"Ese producto no existe en el inventario, tienes que crearlo"<<endl<<endl;
}

void Inventario::VerTodo(){
	cout<<"En el inventario tenemos: "<<endl<<endl;
	for(int i = 0; i < Productos.size(); i++){
		cout<<"Producto "<<i+1<<endl<<endl;
		cout<<"Nombre: "<<Productos[i].getNombre()<<endl;
		cout<<"Tipo: "<<Productos[i].getTipo()<<endl;
		cout<<"Cantidad: "<<Productos[i].getCantidad()<<endl;
		cout<<"Precio: "<<Productos[i].getPrecio()<<endl;
		cout<<"Ganancia: "<<Productos[i].getGanancia()<<endl<<endl;
	}
}

class Flujo{
	private:
		float Dinero;
	public:
		Flujo();
		Flujo(float);
		void TodoFlujo();
		void Inversion(string, int);
		void Inversion();
		void Ventas();
		void GastoEmpleados();
		void GastoEmpleados(string);
		float getDinero();
		void setDinero(float);
		void sumarDinero(float);
};

Flujo::Flujo(){
	Dinero = 0;
}

Flujo::Flujo(float e){
	Dinero = e;
}

void Flujo::TodoFlujo(){
	
}

void Flujo::Inversion(){
	
}

void Flujo::Inversion(string e, int a){
	
}

void Flujo::Ventas(){
	
}

void Flujo::GastoEmpleados(){
	
}

void Flujo::GastoEmpleados(string e){
	
}

float Flujo::getDinero(){
	return Dinero;
}

void Flujo::setDinero(float e){
	Dinero = e;
}

void Flujo::sumarDinero(float e){
	Dinero += e;
}

class Empleado{
	private:
		string Nombre;
		string Nivel;
		float Sueldo;
	public:
		Empleado(string, string, float);
		string getNombre();
		string getNivel();
		float getSueldo();
		void setNombre(string);
		void setNivel(string);
		void setSueldo(float);
};

Empleado::Empleado(string e, string a, float s){
	Nombre = e;
	Nivel = a;
	Sueldo = s;
}

string Empleado::getNombre(){
	return Nombre;
}

string Empleado::getNivel(){
	return Nivel;
}

float Empleado::getSueldo(){
	return Sueldo;
} 

void Empleado::setNombre(string e){
	Nombre = e;
}

void Empleado::setNivel(string e){
	Nivel = e;
}

void Empleado::setSueldo(float e){
	Sueldo = e;
}

class Usuario{
	private:
		string nombre;
		string contrasena;
		string correo;
		vector<Producto> adquiridos;
	public:
		Usuario(string, string, string);
		string getNombre();
		string getContrasena();
		string getCorreo();
		vector<Producto> getProductos();
		void setNombre(string);
		void setContrasena(string);
		void setCorreo(string);
		void agregarProductos(Producto);
		void quitarProductos(Producto);
};

Usuario::Usuario(string e,string d ,string a){
	nombre = e;
	contrasena = d;
	correo = a;
}

string Usuario::getNombre(){
	return nombre;
}

string Usuario::getContrasena(){
	return contrasena;
}

string Usuario::getCorreo(){
	return correo;
}

vector<Producto> Usuario::getProductos(){
	return adquiridos;
}

void Usuario::setNombre(string e){
	nombre = e;
}

void Usuario::setContrasena(string e){
	contrasena = e;
}

void Usuario::setCorreo(string e){
	correo = e;
}

void Usuario::agregarProductos(Producto e){
	for (int i = 0; i < adquiridos.size(); i++){
		if (adquiridos[i] == e){
			adquiridos[i].setCantidad(adquiridos[i].getCantidad() + e.getCantidad());
			return;
		}
	}
	adquiridos.push_back(e);
}

void Usuario::quitarProductos(Producto e){
	for (int i = 0; i < adquiridos.size(); i++){
		if (adquiridos[i] == e){
			if(adquiridos[i].getCantidad() < e.getCantidad()){
				cout<<"Solo compraste "<<adquiridos[i].getCantidad()<<" unidades de este producto, vuelve a intentar."<<endl<<endl;
			} else {
				if(adquiridos[i].getCantidad() == e.getCantidad()){
					adquiridos.erase(adquiridos.begin()+i); 
				} else {
					adquiridos[i].setCantidad(adquiridos[i].getCantidad() - e.getCantidad());
				}
			}
		}
	}
}

class Clientes{
	protected:
		vector<Usuario> Usuarios;
	public:
		Clientes();
		Clientes(vector<Usuario>);
		vector<Usuario> darUsuarios();
		void agregarUsuario(Usuario);
		void Ventas();
};

Clientes::Clientes(){
}

Clientes::Clientes(vector<Usuario> e){
	Usuarios = e;
}

vector<Usuario> Clientes::darUsuarios(){
	return Usuarios;
}

void Clientes::agregarUsuario(Usuario e){
	Usuarios.push_back(e);
}

void Clientes::Ventas(){
	//Hay que imprimir toda la info de ventas aqui, los productos con sus cantidades :V
}

class Tienda{
	private:
		string nombre;
	protected:
		Inventario *Inventario_;
		vector<Empleado> Empleados;
		Flujo *Flujo_;
		Clientes *Usuarios;
	public:
		Tienda(string);
		void AsignarEmpleado(Empleado);
		void AsignarInventario(Inventario);
		void AsignarFlujo(Flujo);
		void AsignarClientes(Clientes);
		string getNombre();
		void setNombre(string);
		void Info();
};

Tienda::Tienda(string nom){
	nombre = nom;
}

void Tienda::AsignarEmpleado(Empleado e){
	Empleados.push_back(e);
}

void Tienda::AsignarInventario(Inventario e){
	Inventario_ = new Inventario(e.getProductos());
}

void Tienda::AsignarFlujo(Flujo e){
	Flujo_ = new Flujo(e.getDinero());
}

void Tienda::AsignarClientes(Clientes e){
	Usuarios = new Clientes(e.darUsuarios());
}

string Tienda::getNombre(){
	return nombre;
}

void Tienda::setNombre(string e){
	nombre = e;
} 

void Tienda::Info(){
	//HAY QUE LLENAR ACA
}

int main(){
	
	return 0;
}