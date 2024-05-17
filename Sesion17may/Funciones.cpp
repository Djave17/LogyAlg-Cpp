#include <iostream> 
#include "variables.h" 

using namespace std;

/*prototipo de funciones*/
void menu();
void AgregarEdad(); 
void principal();
void mostrarEdades();

//principal

void principal(){
    int opcion = 0; 

    while (opcion!= 6)
    {
        menu();
        cin>>opcion;
        switch (opcion)
        {
        case 1:
            AgregarEdad();
            break;
        case 6: 
            cout<<"Gud bai"<<endl;
            break;
        default:
            break;  
        }
        
    }
    
}
//funciones 
void menu(){
    system("cls || clear");
    cout<<"1. Ingresar edades"<<endl;
    cout<<"2. Mostrar edades"<<endl;
    cout<<"3. Mostrar edad mayor"<<endl;
    cout<<"4. Mostrar edad menor"<<endl;
    cout<<"5. Mostrar promedio de edades"<<endl;
    cout<<"6. Salir"<<endl;

    
}

/*Agregar edades*/

void AgregarEdad(){
    system("cls || clear");
    cout<< "Dime la edad: "; 
    cin>> ages[pos]; 
    pos++;
    system("pause"); 
}

void mostrarEdades(){
    system("cls || clear");
    for (int i = 0; i < pos; i++)
    {
        cout<<"Edad: "<<ages[i]<<endl;
    }
    system("pause");
}