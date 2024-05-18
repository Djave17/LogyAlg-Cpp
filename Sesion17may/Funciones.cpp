#include <iostream> 
#include "variables.h" 

using namespace std;

/*prototipo de funciones*/
void menu();
void AgregarEdad(); 
void principal();
void mostrarEdades();

//principal

void principal()
{
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
        case 2: 
            mostrarEdades(); 
            break;
        case 3: 
            int mayor; 
            cout<<"Edad mayor"<<endl;
            for (int i = 0; i < pos; i++)
            {
                if (ages[i]>mayor)
                {
                    mayor = ages[i];
                    cout<<"Edad mayor: "<<mayor<<endl;
                }
            
            }
            
            system("pause");
              
            break; 
        case 4:
            int menor; 
            cout<<"Edad menor"<<endl;
            for (int i = 0; i < pos; i++)
            {
                if (ages[i]<menor)
                {
                    menor = ages[i];
                }

            }
            break; 

        case 5: 
            int suma = 0; 
            for (int i = 0; i < pos; i++)
            {
                suma += ages[i];
            }
            cout<<"Promedio de edades: "<<suma/pos<<endl;
            system("pause");
            break;
        case 6: 
            cout<<"Gud bai"<<endl;
            break;  
        default:
            cout<<"Opcion no valida"<<endl;
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