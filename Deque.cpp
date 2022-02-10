#include <iostream>
#include <deque>
using namespace std;

int main(){
deque<int> fila;

cout <<"Antes de inserir os elementos: ";

if(fila.empty())
    cout << "Fila vazia.\n";
else
    cout << "Fila não está vazia.\n";

    //inserir elementos no final da fila
    fila.push_back(10);
    fila.push_back(20);
    //inserir elementos no inicio da fila
    fila.push_front(30);

    cout << "Depois de inseir os elementos: ";

    if(fila.empty())
        cout << "Fila vazia.\n";
    else cout<< "Fila não está vazia. \n";

    cout << "Mostrando os elementos da fila: ";

    deque<int>::iterator it = fila.begin();
    while (it !=fila.end())
        cout << *it++ << " ";

    cout <<endl;
//limpando a fila

fila.clear();

cout << "Depois de limpar (clear) a fila: ";
if (fila.empty())
    cout << "Fila vazia. \n";
else cout << "Fila não está vazia \n";

//inserir elementos
fila.push_front(10);
fila.push_front(20);
fila.push_front(30);

//removendo o segundo elemento
fila.erase(fila.begin() +1);
cout << "Removeu o segundo elemento";
cout << "\nMostrando os elementos da fila: ";
it = fila.begin();
while (it != fila.end())
    cout << *it++ << " ";

cout <<"\nElemento da frente: "<<fila.front();
cout <<"\nUltimo elemento: "<<fila.back();

it = fila.begin()+1;
fila.insert(it, 15);

cout << "\n\nMostrando os elementos: ";

it = fila.begin();
while(it !=fila.end())
    cout << *it++ << " ";
cout<<endl;
    //removendo do inicio
    cout<<"Removendo o elemento da frente. "<<endl;
    fila.pop_front();
     cout<<"Removendo o elemento do final. "<<endl;
    //removendo do final
    fila.pop_back();

    cout << "\nTamanho da fila depois de remover os dois elementos: "<< fila.size()<<endl;
return 0;


}
