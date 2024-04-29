
#include<bits/stdc++.h>
using namespace std;
vector<int> grafo[10000];
int main(){
    //leemos la cantidad de nodos
    int cantNodos;
    //hacemos un while para que se ejcute las veces que vea una cantidad de nodos que se quiera leer
    while(cin>>cantNodos){
        //lamamos a una funcion que lea los grafos,podria ser la que lle dirigido  o no dirigidos
        leergGrafosDir(cantNodos);        
        
    }
}

void leergGrafosDir(int cantNodos){
        int ninicio, nfinl;

        for (int i = 0; i < cantNodos; i++)
        {
            //lee los grafos y lso guarda dentro del vector grafos
            cin>>ninicio>>nfinl;
            grafo[ninicio].push_back(nfinl);
        }
}
void leergGrafosNDir(int cantNodos){
        int ninicio, nfinl;

        for (int i = 0; i < cantNodos; i++)
        {
            //lee los grafos y como es dirigido se engcarga de que en ambos nodos se haga la vertice
            cin>>ninicio>>nfinl;
            grafo[ninicio].push_back(nfinl);
            grafo[nfinl].push_back(ninicio);
        }
}