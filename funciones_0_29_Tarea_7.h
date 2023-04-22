//Funciones de 0-29 
#include<iostream>
using namespace std;
int pidedato(){
    int vueltas;
    cout<<"Dime la cantida de vueltas de alambre que deseas darle al terreno"<<endl;
    cin>>vueltas;
    return vueltas;
}
float largor(){
    float largO;
    cout<<"Dame el Largor del terreno"<<endl;
    cin>>largO;
    return largO;
}
float anchor(){
    float anchO;
    cout<<"Dame el Anchor del terreno"<<endl;
    cin>>anchO;
    return anchO;
}
int murOs(float largOr, float anchOr)
{
    float lArgor, aNchor, perimetro;
    int postes;
    lArgor = largOr * 2; 
    aNchor = anchOr * 2;
    perimetro = aNchor + lArgor;
    postes = perimetro / 3;
    return postes;
}
float alambrE(float largOr, float anchOr, int nivel ){
    float lArgor, aNchor, perimetro, lambre;
    lArgor = largOr * 2; 
    aNchor = anchOr * 2;
    perimetro = aNchor + lArgor;
    lambre = perimetro * nivel;
    return lambre;
}
