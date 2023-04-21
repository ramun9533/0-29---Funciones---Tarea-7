//0-29 - Funciones
#include<iostream>
#include"funciones_0_29_Tarea_7.h"
using namespace std;
int main(){
int muros, numNiveles;
float largo, ancho, alambre;
//Funciones de solicitud de datos
largo = largor();
ancho = anchor();
numNiveles = pidedato();
muros = murOs(largo, ancho);
alambre = alambrE(largo, ancho, numNiveles);
cout<<"Los muros serian "<<muros<<endl;
cout<<"Los metros de alambre serian "<<alambre<<endl;
return 0;
}