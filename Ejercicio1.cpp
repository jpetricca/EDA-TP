#include <iostream>
#include <conio.h>

using namespace std;



struct Personas{
	
	char nombre[15];
	int edad;
	char sexo[15];
	int telefono;
}pers[3];

void recibo(Personas p[], int n);

int main (){
			
	
	for(int i =0;i<3;i++){
	
		cout<<"Complete los datos"<<endl;
	
		fflush(stdin);
		cout<<"Digite su nombre: "<<endl;
		cin.getline(pers[i].nombre,15);
		cout<<"Ingresa edad: "<<endl;
		cin>>pers[i].edad;
		fflush(stdin);
		cout<<"Ingrese sexo: "<<endl;
		cin.getline(pers[i].sexo,15);
		cout<<"Ingrese telefono: "<<endl;
		cin>>pers[i].telefono;	
	}	
		
		
	recibo(pers,3);
		
			
	return 0;
	}
	
	void recibo(Personas p [], int n){
		
		for(int i =0;i<3;i++){
			if(p[i].edad > 30 )
				cout<<p[i].nombre<<" "<<p[i].edad<<" "<<p[i].sexo<<" "<<p[i].telefono<<endl;
		
		}
	}	
	
/*#include <iostream>
#include <conio.h>

using namespace std;

struct Persona{
    char nombre[15];
    int edad;
    char sexo[15];
    int telefono;
} p[2];

//void recibo(struct arreglo[]);
void mostrarDatos(Persona);

int main(){

    for (int i = 1; i < 3; i++)
    {
        fflush(stdin);
        cout << "Complete los datos" << endl;
        cout <<"**"<<endl;
        cout << "Digite su nombre: " << endl;
        cin.getline(p[i].nombre, 15, '\n');
        cout << "Ingresa edad: " << endl;
        cin >> p[i].edad;
        fflush(stdin);
        cout << "Ingrese sexo: " << endl;
        cin.getline(p[i].sexo, 15, '\n');
        cout << "Ingrese telefono: " << endl;
        cin >> p[i].telefono;
    }

    mostrarDatos(p[2]);

    return 0;
}

void mostrarDatos(Persona pp){
	  
	
    for (int i = 0; i < 2; i++)
    {
        if (p[i].edad > 30)
            cout << p[i].nombre << " " << p[i].edad << " " << p[i].sexo << " " << p[i].telefono << endl;
    } 

}*/
