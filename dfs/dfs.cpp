
#include<bits/stdc++.h>
using namespace std;
vector<int> grafo[10000];
bool vis[10000];

void dfs(int nodoInicial){
    //primero creamos la pilas
    stack<int> pila;
    pila.push(nodoInicial);
    //se para el while cuando la pila est vacia
    while(!pila.empty()){
        //sacamos el ultimo elemento que entro en la pila
        int nodoActual = pila.top();
        pila.pop();
        //entramos al if si el elemento no fue visitado antes
        if(!vis[nodoActual]){
            vis[nodoActual] = true;
            //vistiamos a todos los amigos del nodo actula
            for (int i = 0; i < grafo[nodoActual].size(); i++)
            {

                int amigo= grafo[nodoActual][i];
                //verificamos si el amio no fue visitado antes para meterlo en la pila de nuevo
                if(!vis[amigo]){
                    pila.push(amigo);
                }
            }
            
        }

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

int main(){
    //leemos la cantidad de nodos
    int cantNodos;
    //hacemos un while para que se ejcute las veces que vea una cantidad de nodos que se quiera leer
    while(cin>>cantNodos){
        //lamamos a una funcion que lea los grafos,podria ser la que lle dirigido  o no dirigidos
        leergGrafosDir(cantNodos);        
        
    }
}

