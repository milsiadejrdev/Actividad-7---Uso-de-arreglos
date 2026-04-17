#include <iostream>
using namespace std;

int main() {

    int n;
    float notas[20][4];
    float promedio;
    float suma = 0;
    float sumaGeneral = 0;

    float mayor = 0;
    float menor = 100;

    int aprobados = 0;
    int reprobados = 0;

    cout << "Ingrese la cantidad de estudiantes (maximo 20): ";
    cin >> n;

 
    if (n > 20) {
        n = 20;
    }

   
    for (int i = 0; i < n; i++) {

        cout << "\nEstudiante " << i + 1 << endl;
        suma = 0;

        for (int j = 0; j < 4; j++) {
            cout << "Nota " << j + 1 << ": ";
            cin >> notas[i][j];

  
            if (notas[i][j] < 0) notas[i][j] = 0;
            if (notas[i][j] > 100) notas[i][j] = 100;

            suma = suma + notas[i][j];

        
            if (notas[i][j] > mayor) {
                mayor = notas[i][j];
            }

          
            if (notas[i][j] < menor) {
                menor = notas[i][j];
            }
        }

        promedio = suma / 4;
        sumaGeneral = sumaGeneral + promedio;

        cout << "Promedio: " << promedio << endl;

        if (promedio >= 70) {
            aprobados = aprobados + 1;
        }
        else {
            reprobados = reprobados + 1;
        }
    }

    float promedioGeneral = sumaGeneral / n;

   
    cout << "\n----- RESULTADOS -----" << endl;
    cout << "Promedio general: " << promedioGeneral << endl;
    cout << "Nota mas alta: " << mayor << endl;
    cout << "Nota mas baja: " << menor << endl;
    cout << "Aprobados: " << aprobados << endl;
    cout << "Reprobados: " << reprobados << endl;

    return 0;
}