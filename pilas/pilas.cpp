#include<bits/stdc++.h>
using namespace std;
int main() {
    stack<int> pila;

    // Push insertar elementos a la pila
    pila.push(1);
    pila.push(2);
    
    // Pop quitar elemento superior de la pila
    cout << "Elemento eliminado: " << pila.top() << endl;
    pila.pop();

    // Peek acceder al elemento superior sin quitarlo
    cout << "Elemento superior: " << pila.top() << endl;

    // isEmpty verificar si la pila está vacía
    cout << "La pila está vacía: " << (pila.empty() ? "Sí" : "No") << endl;

    return 0;
}
