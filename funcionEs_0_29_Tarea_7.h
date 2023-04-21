//Funciones de 0-29A 
#include<iostream>
using namespace std;
int pidedato(){
    int niveles;
    cout<<"Dime cuantos niveles tiene el rasimo"<<endl;
    cin>>niveles;
    return niveles;
}
int calcCuantasUvas(int niveleS){
    
    int uvas;
    uvas = 0;
    for (int i = 0; i <= niveleS; i++)
        {
            uvas = uvas + i;

        }   
        return uvas; 
    
}