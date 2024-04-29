
#include<bits/stdc++.h>
using namespace std;
vector<int> grafo[10000];
bool vis[10000];

void dfs(int nodoInicial){
    //primero creamos la pilas
    queue<int> cola;
    cola.push(nodoInicial);
    //el while se acaba si la cola esta vacia
    while(!cola.empty()){
        // sacamos el primer nodo que entro
        int nodoActual = cola.front();
        cola.pop();
        // verificamos si no fue visitado antes
        if(!vis[nodoActual]){
            vis[nodoActual] = true;
            // visitamos a todos sus amigos del nodo actual
            for (int i = 0; i < grafo[nodoActual].size(); i++)
            {
                int amigo= grafo[nodoActual][i];
                // si el amigo fue visitado no lo volvemos a agregar a la cola
                if(!vis[amigo]){
                    cola.push(amigo);
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

