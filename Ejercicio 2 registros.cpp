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
	string buscar, actualizar, eliminar;
	int n=0, m=0, k=0;
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
			case 'A':
				cout<<"ingrese el nombre del producto: "; cin>>agregar[n].nombre;
				cout<<"ingrese el precio del producto: "; cin>>agregar[n].precio;
				cout<<endl;
				n++;
				break;
			case 'B':
				cout<<"N.\tPRODUCTOS\tPRECIOS"<<endl;
				cout<<"  \t---------\t--------"<<endl;
				for(int i=0; i<n; i++)
				{
					cout<<i+1<<"\t"<<agregar[i].nombre<<"\t" \ 
					<<"\t S/. "<<agregar[i].precio<<endl;
				}
				cout<<endl;
				break;
			case 'C':
				cout<<"ingrese el nombre del producto: "; cin>>buscar;
				for(int i=0; i<n; i++)
				{
					if(buscar==agregar[i].nombre)
					{
						cout<<"producto encontrado"<<endl;
						cout<<"-------------------"<<endl;
						cout<<"nombre:"<<agregar[i].nombre<<endl;
						cout<<"precio: S/. "<<agregar[i].precio<<endl;
					}
				}
				cout<<endl;
				break;
			case 'D':
				cout<<"ingrese el nombre del producto a actualizar: "; cin>>actualizar;
				for(int i=0; i<n; i++)
				{
					if(actualizar==agregar[i].nombre)
					{
						cout<<"ingrese el nuevo precio: "; cin>>agregar[i].precio;
					}
				}
				cout<<endl;
				break;
			case 'E':
				cout<<"ingrese el nombre del producto a eliminar: "; cin>>eliminar;
				for(int i=0; i<n; i++)
				{
					if(eliminar==agregar[i].nombre)
					{
						for(int j=i+1; j<n; j++)
						{
							agregar[j-1].nombre=agregar[j].nombre;
							agregar[j-1].precio=agregar[j].precio;
						}
						n--;
					}
				}
				cout<<"producto eliminado"<<endl;
				cout<<endl;
				break;
			case 'F':
				cout<<"ingrese el ID de la venta: "; cin>>agregar_ventas[m].idventa;
				cout<<"ingrese el nombre del producto: "; cin>>agregar_ventas[m].product;
				cout<<"ingrese la cantidad: "; cin>>agregar_ventas[m].cantidad;
				for(int i=0; i<n; i++)
				{
					if(agregar_ventas[m].product==agregar[i].nombre)
					{
						agregar_ventas[k].precio_total=agregar_ventas[k].precio_total+(agregar[i].precio*agregar_ventas[m].cantidad);
					}
				}
				cout<<"venta registrada con exito."<<endl;
				m++;
				cout<<endl;
				break;
			case 'G':
				cout<<"\t  "<<"HISTORIAL DE VENTAS "<<endl;
				cout<<"\t  "<<"--------------------"<<endl;
				cout<<"N.\tID\tPRODUCTO\tCANTIDAD"<<endl;
				for(int i=0; i<m; i++)
				{
					cout<<i+1<<"\t"<<agregar_ventas[i].idventa<<"\t" \
					<<agregar_ventas[i].product<<"\t\t   "<<agregar_ventas[i].cantidad<<endl;
				}
				cout<<endl;
				break;
			case 'H':
				cout<<"el total de ventas es: S/. "<<agregar_ventas[k].precio_total<<endl;
				cout<<endl;
				break;
			default:
				break;
		}
	}
	while(op!='S');
	return 0;
	
}
