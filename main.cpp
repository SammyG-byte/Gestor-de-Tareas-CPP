#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Tarea {
public:
    string nombre;
    bool completada;

    Tarea(string n) {
        nombre = n;
        completada = false;
    }
};

class GestorTareas {
private:
    vector<Tarea> tareas;

public:
    void agregarTarea() {
        string nombre;
        cout << "Escribe la nueva tarea: ";
        cin.ignore();
        getline(cin, nombre);

        tareas.push_back(Tarea(nombre));
        cout << "Tarea agregada correctamente.\n";
    }

    void mostrarTareas() {
        if (tareas.empty()) {
            cout << "No hay tareas aun.\n";
            return;
        }

        cout << "\n--- Lista de tareas ---\n";
        for (int i = 0; i < tareas.size(); i++) {
            cout << i + 1 << ". " << tareas[i].nombre;
            if (tareas[i].completada)
                cout << "  (completada)";
            cout << endl;
        }
        cout << "------------------------\n";
    }

    void completarTarea() {
        int num;
        mostrarTareas();
        if (tareas.empty()) return;

        cout << "Numero de la tarea a completar: ";
        cin >> num;

        if (num < 1 || num > tareas.size()) {
            cout << "Numero invalido.\n";
            return;
        }

        tareas[num - 1].completada = true;
        cout << "Tarea marcada como completada.\n";
    }

    void eliminarTarea() {
        int num;
        mostrarTareas();
        if (tareas.empty()) return;

        cout << "Numero de la tarea a eliminar: ";
        cin >> num;

        if (num < 1 || num > tareas.size()) {
            cout << "Numero invalido.\n";
            return;
        }

        tareas.erase(tareas.begin() + (num - 1));
        cout << "Tarea eliminada correctamente.\n";
    }
};

int main() {
    GestorTareas gestor;
    int opcion;

    do {
        cout << "\n--- Gestor de Tareas ---\n";
        cout << "1. Agregar tarea\n";
        cout << "2. Mostrar tareas\n";
        cout << "3. Completar tarea\n";
        cout << "4. Eliminar tarea\n";
        cout << "5. Salir\n";
        cout << "Elige una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: gestor.agregarTarea(); break;
            case 2: gestor.mostrarTareas(); break;
            case 3: gestor.completarTarea(); break;
            case 4: gestor.eliminarTarea(); break;
            case 5: cout << "Saliendo...\n"; break;
            default: cout << "Opcion invalida.\n";
        }

    } while (opcion != 5);

    return 0;
}
