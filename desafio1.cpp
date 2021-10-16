#include <iostream>
#include <math.h>
using namespace std;
int fazSequencia(valor){
    int cont =1;
    while(valor > 1){
        if(valor % 2 ==0){
            valor = valor /2;
        }
        else{
            valor = (valor*3)+1;
        }
        cont++;
    }
    return cont;
}
int main(){
int numeroMaior;
int maiorSequencia =0;

for(int i=1; i<1000000; i++){
    int sequencia = fazSequencia(i);
    if(sequencia > maiorSequencia){
        maiorSequencia = sequencia;
        numeroMaior = i;
    }
}
cout<<"Numero com maior sequencia:"<<numeroMaior;
cout<<"Sequencia obtida:"<<maiorSequencia;
}