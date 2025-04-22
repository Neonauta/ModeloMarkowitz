#include <iostream>
#include <vector>
using namespace std;

void ArregloInversiones() {
  int n;

  cout << "Ingrese el numero de activos a analizar: "; cin >> n;
  int activos[n] = {};
}

//Función para dar lectura completa a un arreglo.
void PrintArreglo(int arr[], int size) {
    //int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size ;i++) {
        cout<<arr[i]<<" ";
    }
}

int main (int argc, char** argv){
    ArregloInversiones();
 }

