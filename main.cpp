#include <iostream>
using namespace std;

//Función para dar lectura completa a un arreglo.
void PrintArreglo(float arr[], int size);
//Función para ordenar activos de menor a mayor (usando Insertion Sort).
void ArregloInversiones(float activos[], int size);
//Función para el cálculo del Retorno de Inversión (ROI);
void RetornoInversion(const float activos[], int size);
//Función para cálculo de Rendimientos Esperados por Inversión.
void RendimientoEsperado(const float activos[], int size);

int main (int argc, char** argv) {
    int n,i=0;
    float m; //declarado en float para porcentajes posteriores que se calculan.

    cout << "Ingrese el numero de activos en su cartera: "; cin >> n;
    float activos[n] = {};

    //Ciclo while para leer los i activos que ingresa el usuario.
    //Según el modelo estos son los activos financieros diversificados para construir la cartera óptima.
    while (i <= n-1) {
        cout << "Ingresa el valor del activo " << i+1 << " de la cartera (MXN): ";
        cin >> m ; cout << std::endl;
        activos[i] = m;
        i++;
    }

    cout << "Lista de valores de sus activos: " << std::endl;
    PrintArreglo(activos,n);
    ArregloInversiones(activos,n);
    // cout << std::endl << "Sus activos ordenados de mayor a menor: " << std::endl;
    // PrintArreglo(activos,n);
    RetornoInversion(activos, n);
 }

void PrintArreglo(float arr[], int size) {
    for (int i = 0; i < size ;i++) {
        cout<<arr[i]<<" ";
    }
}

void ArregloInversiones(float activos[], int size) {
    for (int i = 1; i < size; ++i) {
        float pivot = activos[i];
        int j = i - 1;

        while (j >= 0 && activos[j] > pivot) {
            activos[j + 1] = activos[j];
            j = j - 1;
        }

        activos[j + 1] = pivot;
    }
}

void RetornoInversion(const float activos[], int size) {
    float ROI[size] = {};
    float ganancias[size] = {};
    int i=0;
    float g;

    //Ciclo while para leer las ganancias por activo ya ingresado.
    while (i <= size-1) {
        cout << std::endl << "Ingresa las ganancias del activo " << i+1 << " de la cartera (MXN): ";
        cin >> g ; cout << std::endl;
        ganancias[i] = g;
        //Aquí se está calculando el Retorno de Inversión por activo asumiendo que los datos históricos ya
        //proporcionan ganancias de cada uno.
        ROI[i] = ((ganancias[i] - activos[i]) / activos[i])*100;
        //ROI[i] = roi;
        i++;
    }
    PrintArreglo(ROI,size);
}

void RendimientoEsperado(const float activos[], int size) {

}