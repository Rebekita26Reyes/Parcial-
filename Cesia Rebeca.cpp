/* UNIVERSIDAD DE EL SALVADOR*/
/* Facultad Multidisciplinaria Oriental*/
/* Ing. Ligia Astrid*/
/* Programacion I  */
/* Este programa realiza la simulacion de un negocio de arrendamiento de vehiculos.*/
/* Este programa fue realizado por: Cesia Rebeca Reyes Escobar*/


#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
int c[9]={0,0,0,0,0,0,0,0,0};
char denuevo=' ';


char opcion(int i),disponible; /*Necesaria en COUT, retorna los vehiculos disponibles */
int ganador(), quieres, rentado; /*Variables de eleccion de vehiculos, deduce si esta rentado el vehiculo o no */
void print_rentado(); /*Imprime el vehiculo que esta en estado de arrendamiento */
void datos(); /* Esta funcion se encarga de pedir los datos del cliente y el vehiculo que sera arrendado */
void proceso();/* Esta funcion es la encargada de imprimir los vehiculos que estan en arendamiento*/

int main()
{
do
{
    int h, menu;
    cout<<"            		------------------------------------------------- \n";
    cout<<"            		|	BIENVENIDO A RENTA DE AUTOS CESIA	| \n";
    cout<<"           		------------------------------------------------- \n \n";
    cout<<"--------------------------------------- \n";
    cout<<"|	1)Rentar vehiculo             | \n";
	cout<<"--------------------------------------- \n";
	cout<<"|	2)Ver vehiculos disponibles   | \n";
	cout<<"--------------------------------------- \n";
	cout<<"|	3)Vehiculos arrendados        |\n";
	cout<<"--------------------------------------- \n";
	cout<<"|	4)Salir                       | \n";
	cout<<"--------------------------------------- \n";
	
	cin>>menu;

    switch(menu)
    {
         case 1:/* Este caso es utilizado para mostrar el formulario de arendamiento*/
			 datos();
						
				break;
           	case 2:/* Este caso es utilizado para mostrar los vehiculos disponibles para el arrendamiento*/
           		if(quieres==1){
				cout<<"-------------------------------------------------------------------------\n";
				cout<<"|		LOS VEHICULOS DISPONIBLES SON LOS SIGUIENTES		| \n";
              	cout<<"-------------------------------------------------------------------------\n \n";		
				  	cout<<"-------------------------------------------------------------------------- \n";	
				  	cout<<"|  2)  SEDAN Marca: NISSAN   Color: ROJO   Puertas: 4   Ano: 2017        |   \n";
				  	cout<<"-------------------------------------------------------------------------- \n";
			  	cout<<"-------------------------------------------------------------------------- \n";
				cout<<"|  3)  PICKUP Marca: TOYOTA   Color: NEGRO   Puertas: 4   Ano: 2018      |   \n";
		  		cout<<"-------------------------------------------------------------------------- \n";
				  	cout<<"-------------------------------------------------------------------------- \n";
				  	cout<<"|  4)  MICROBUS Marca: KIA   Color: AZUL   Puertas: 3   Ano: 2014        |   \n";
				  	cout<<"-------------------------------------------------------------------------- \n";   
				   
				   system("todos1.png");//hacemos el llamado de la imagen para que aparesca
				   
				   }else if(quieres==2){
				   	cout<<"-------------------------------------------------------------------------\n";
				cout<<"|		LOS VEHICULOS DISPONIBLES SON LOS SIGUIENTES		| \n";
              	cout<<"-------------------------------------------------------------------------\n \n";		
					cout<<"-------------------------------------------------------------------------- \n";
			  		cout<<"|  1)  CAMIONETA Marca: TOYOTA   Color: GRIS   Puertas: 4   Ano: 2015    |   \n";
			  		cout<<"-------------------------------------------------------------------------- \n";
		  		cout<<"-------------------------------------------------------------------------- \n";
		  		cout<<"|  3)  PICKUP Marca: TOYOTA   Color: NEGRO   Puertas: 4   Ano: 2018      |   \n";
		  		cout<<"-------------------------------------------------------------------------- \n";
				  	cout<<"-------------------------------------------------------------------------- \n";
				  	cout<<"|  4)  MICROBUS Marca: KIA   Color: AZUL   Puertas: 3   Ano: 2014        |   \n";
				  	cout<<"-------------------------------------------------------------------------- \n";
				   
				   system("todos2.png");//hacemos el llamado de la imagen para que aparesca
				   
				   }else if(quieres==3){
				   	cout<<"-------------------------------------------------------------------------\n";
				cout<<"|		LOS VEHICULOS DISPONIBLES SON LOS SIGUIENTES		| \n";
              	cout<<"-------------------------------------------------------------------------\n \n";		
					cout<<"-------------------------------------------------------------------------- \n";
			  		cout<<"|  1)  CAMIONETA Marca: TOYOTA   Color: GRIS   Puertas: 4   Ano: 2015    |   \n";
			  		cout<<"-------------------------------------------------------------------------- \n";
			  	cout<<"-------------------------------------------------------------------------- \n";
			  	cout<<"|  2)  SEDAN Marca: NISSAN   Color: ROJO   Puertas: 4   Ano: 2017        |   \n";
			  	cout<<"-------------------------------------------------------------------------- \n";
				  	cout<<"-------------------------------------------------------------------------- \n";
				  	cout<<"|  4)  MICROBUS Marca: KIA   Color: AZUL   Puertas: 3   Ano: 2014        |   \n";
				  	cout<<"-------------------------------------------------------------------------- \n";
				   
				   system("todos3.png");//hacemos el llamado de la imagen para que aparesca
				   
				   }else if(quieres==4){
				cout<<"-------------------------------------------------------------------------\n";
				cout<<"|		LOS VEHICULOS DISPONIBLES SON LOS SIGUIENTES		| \n";
              	cout<<"-------------------------------------------------------------------------\n \n";		
					cout<<"-------------------------------------------------------------------------- \n";
			  		cout<<"|  1)  CAMIONETA Marca: TOYOTA   Color: GRIS   Puertas: 4   Ano: 2015    |   \n";
			  		cout<<"-------------------------------------------------------------------------- \n";
			  	cout<<"-------------------------------------------------------------------------- \n";
			  	cout<<"|  2)  SEDAN Marca: NISSAN   Color: ROJO   Puertas: 4   Ano: 2017        |   \n";
			  	cout<<"-------------------------------------------------------------------------- \n";
			  		cout<<"-------------------------------------------------------------------------- \n";
			  		cout<<"|  3)  PICKUP Marca: TOYOTA   Color: NEGRO   Puertas: 4   Ano: 2018      |   \n";
			  		cout<<"-------------------------------------------------------------------------- \n";
			  	   
			  	   system("todos4.png");//hacemos el llamado de la imagen para que aparesca
					 
					 }else{
			  	   	cout<<"-------------------------------------------------------------------------\n";
					cout<<"|		LOS VEHICULOS DISPONIBLES SON LOS SIGUIENTES		| \n";
              		cout<<"-------------------------------------------------------------------------\n \n";		
				cout<<"-------------------------------------------------------------------------- \n";
			  	cout<<"|  1)  CAMIONETA Marca: TOYOTA   Color: GRIS   Puertas: 4   Ano: 2015    |   \n";
			  	cout<<"-------------------------------------------------------------------------- \n";
			  		cout<<"-------------------------------------------------------------------------- \n";
			  		cout<<"|  2)  SEDAN Marca: NISSAN   Color: ROJO   Puertas: 4   Ano: 2017        |   \n";
			  		cout<<"-------------------------------------------------------------------------- \n";
			  	cout<<"-------------------------------------------------------------------------- \n";
			  	cout<<"|  3)  PICKUP Marca: TOYOTA   Color: NEGRO   Puertas: 4   Ano: 2018      |   \n";
			  	cout<<"-------------------------------------------------------------------------- \n";
				    cout<<"-------------------------------------------------------------------------- \n";
				  	cout<<"|  4)  MICROBUS Marca: KIA   Color: AZUL   Puertas: 3   Ano: 2014        |   \n";
				  	cout<<"-------------------------------------------------------------------------- \n";
				   
				   	system("todos.png");//hacemos el llamado de la imagen para que aparesca
    
   					 
				   
				   }
			  getchar();
              break;
           	case 3:/* Este caso muestra los vehiculos que estan en estado de arrendamiento */
              	cout<<"-------------------------------------------------------------------------\n";
				cout<<"|		LOS VEHICULOS ARRENDADOS SON LOS SIGUIENTES		| \n";
              	cout<<"-------------------------------------------------------------------------\n \n";
			/*  */
			proceso();
              getchar();
              break;
            case 4: /* Despedida al salir del programa */
               cout<<"\n---------------------------------- \n";
               cout<<"|    FUE UN PLACER ATENDERLE     | \n";
               cout<<"---------------------------------- \n";
			   getchar();
               exit(1);
              break;
         }
         cout<<"\n\n    *********************************\n";
         cout<<"    |    Volver al menu? (s o n)    | \n";
         cout<<"    *********************************\n\n";
         cin>>denuevo;
         if (denuevo>=97) denuevo-=32;
         if ((denuevo!='s')&&(denuevo!='n'))
         for (h=0;h<=8;h++) c[h]=0;
}
while (denuevo=='S');
getchar();

}

char opcion(int i)
{
     switch (i)
     {
            case (-1):
                 return 'X';
                 break;

            case (1):
                 return 'O';
                 break;

            default:
                    return ' ';
     }
}

void datos() /*Formulario utilizado para llenar los datos correspondientes para arrendar el vehiculo */
{
  int dui,licencia,vivienda,tel,precio;
  char nombre[50];
	 cout<<"		----------------------------------------------------------------- \n";		  
	 cout<<"		| 	Ingrese el numero de vehiculo que desea arrendar 	|\n";
	 cout<<"		|	1)Camioneta		|	 2)Sedan 		|\n";
	 cout<<"		|	3)Pickup 		|	 4)Microbus		|\n";
	 cout<<"		----------------------------------------------------------------- \n";
     	
		 cout<<"		Numero de vehiculo:	"; cin>>quieres;
	 cout<<"		----------------------------------------------------------------- \n";	 
     cout<<"		|	Ingrese el nombre del usuario:				|\n";
     cout<<"		----------------------------------------------------------------- \n";
     	cout<<"		Nombre: "; cin>>nombre;
     cout<<"		----------------------------------------------------------------- \n";	 
     cout<<"		|	Ingrese el numero de DUI: 				|\n";
     cout<<"		----------------------------------------------------------------- \n";	 
     	cout<<"		DUI: "; cin>>dui;
     cout<<"		----------------------------------------------------------------- \n";	 
     cout<<"		|	Ingrese el numero de licencia de conducir 		|\n";
     cout<<"		----------------------------------------------------------------- \n";	 	
		cout<<"		N° Licencia: "; cin>>licencia;
	 cout<<"		----------------------------------------------------------------- \n";	 
     cout<<"		|	Ingrese el telefono:					| \n";
     cout<<"		----------------------------------------------------------------- \n";	 
     	cout<<"		Tell: ";cin>>tel;
     cout<<"		----------------------------------------------------------------- \n";	 
	 cout<<"		|	Ingrese el costo del arendamiento			| \n";
	 cout<<"		----------------------------------------------------------------- \n";	 
     cout<<"		$ "; cin>>precio;
			}

void proceso()/* Esta funcion determina que vehiculo esta en estado de arrendamiento*/
{
if(quieres==1){
	cout<<"        -------------------------\n";
	cout<<"	|	 CAMIONETA	| \n";
	cout<<"        -------------------------\n";
	system("camioneta.png");//hacemos el llamado de la imagen para que aparesca
	
}else if(quieres==2){
	cout<<"        -------------------------\n";
	cout<<"	|	 SEDAN 		| \n";
	cout<<"        -------------------------\n";
	system("sedan.png");//hacemos el llamado de la imagen para que aparesca
}else if(quieres==3){
	cout<<"        -------------------------\n";
	cout<<"	|	 PICKUP		| \n";
	cout<<"        -------------------------\n";
	system("pickup.png");//hacemos el llamado de la imagen para que aparesca
}else if(quieres==4){
	cout<<"        -------------------------\n";
	cout<<"	|	 MICROBUS	| \n";
	cout<<"        -------------------------\n";
	system("micro.png");//hacemos el llamado de la imagen para que aparesca
}else{
	cout<<"        -------------------------------------------------\n";
	cout<<"	|	No hay vehiculos en arrendamiento 	| \n";
	cout<<"        -------------------------------------------------\n";
	}

rentado=quieres;
}


