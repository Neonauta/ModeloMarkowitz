#include <iostream>
using namespace std;

//Función para dar lectura completa a un arreglo.
void PrintArreglo(int arr[], int size);
//Función para ordenar activos de menor a mayor (usando Insert Sort).
void ArregloInversiones(int activos[], int size);

int main (int argc, char** argv) {
    int n,m,i=0;

    cout << "Ingrese el numero de activos en su cartera: "; cin >> n;
    int activos[n] = {};

    while (i <= n-1) {
        cout << "Ingresa el valor del activo " << i+1 << " de la cartera (MXN): ";
        cin >> m ; cout << std::endl;
        activos[i] = m;
        i++;
    }

    cout << "Lista de valores de sus activos: " << std::endl;
    PrintArreglo(activos,n);
    ArregloInversiones(activos,n);
    cout << std::endl << "Sus activos ordenados de mayor a menor: ";
    PrintArreglo(activos,n);
 }

void PrintArreglo(int arr[], int size) {
    for (int i = 0; i < size ;i++) {
        cout<<arr[i]<<" ";
    }
}

void ArregloInversiones(int activos[], int size) {
    for (int i = 1; i < size; ++i) {
        int pivot = activos[i];
        int j = i - 1;

        while (j >= 0 && activos[j] > pivot) {
            activos[j + 1] = activos[j];
            j = j - 1;
        }

        activos[j + 1] = pivot;
    }
}