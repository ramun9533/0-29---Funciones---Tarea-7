//Funciones de 0-29A 
#include<iostream>
#include"funcionEs_0_29_Tarea_7.h"
using namespace std;
int main(){
    int mumNiveles, total;
    mumNiveles = pidedato();
    if (mumNiveles > 0)
        {
            total = calcCuantasUvas(mumNiveles);
            cout<<"En un racimo de uvas de "<<mumNiveles<< " niveles, hay en total de "<<total<<" uvas"<<endl;
        }
    return 0;
}