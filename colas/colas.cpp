#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> cola;

    // Enqueue insertar elementos a la cola
    cola.push(1);
    cola.push(2);

    // Dequeue quitar elemento frontal de la cola
    cout << "Elemento eliminado: " << cola.front() << endl;
    cola.pop();

    // Front acceder al elemento frontal sin quitarlo
    cout << "Elemento frontal: " << cola.front() << endl;

    // isEmpty verificar si la cola está vacía
    cout << "La cola está vacía: " << (cola.empty() ? "Sí" : "No") << endl;

    return 0;
}
