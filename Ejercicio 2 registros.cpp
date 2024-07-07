#include<iostream>
#include<string>
using namespace std;

struct producto
{
	string nombre;
	float precio;
};

struct venta
{
	int idventa;
	string product;
	int cantidad;
	float precio_total;
};


int main()
{
	producto agregar[100];
	venta agregar_ventas[100];
	char op;
	do
	{
		cout<<"BIENVENIDO AL INVENTARIO DE VENTAS"<<endl;
		cout<<"***********************************"<<endl;
		cout<<"A: registrar un nuevo producto."<<endl;
		cout<<"B: listar los productos registrados."<<endl;
		cout<<"C: buscar un producto por nombre. "<<endl;
		cout<<"D: actualizar los datos de un producto. "<<endl;
		cout<<"E: eliminar un producto. "<<endl;
		cout<<"F: registrar una venta. "<<endl;
		cout<<"G: listar las ventas realizadas. "<<endl;
		cout<<"H: calcular el total de ventas realizadas. "<<endl;
		cout<<"S: salir. "<<endl;
		cin>>op;
		switch(op)
		{
			
		}
	}
	while(op!='S');
	return 0;
	
}
