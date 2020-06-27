#include "iostream"
using namespace std;
int llenar (float [][5], int);
void promedio (float [][5], int, int);
int main (void){
    cout << endl << "CALCULO DE NOTA FINAL" << endl << endl;
    cout << "Cuantos estudiantes seran promediados? ";
    int n, ponderacion=20;      //la ponderación se maneja como un entero y no como un decimal
    cin >> n;
    float notas [n][5];         //la matriz tendrá n filas y 5 columnas
    llenar (notas, n);
    promedio (notas, n, ponderacion);

}

int llenar (float notas[][5], int n){
    int i,j;
    for (i=0;i<n;i++){
        for (j=0;j<5;j++){      //se iran llenando primero las columnas antes de cambiar a otra fila
            cout << "Estudiante numero " << i+1 << ", nota numero " << j+1 << ": ";
            cin >> notas[i][j];
            if (notas[i][j]>10){
                cout << "La nota no es valida ";    //comprobación de que los datos son validos
                return 0;
            }
        }
    }
}

void promedio (float notas[][5], int n, int pon){
    int i,j;
    float x=0, y=0, z;      //variables auxiliares para operar dentro de la función
    for (i=0;i<n;i++){
        for (j=0;j<5;j++){
            x=notas[i][j]*pon;  //x calcula la nota base 100 
            y+=x;       //y va acumulando los valores de x
        }
        z=y/100;        //se divide y entre 100 para promediar las notas a base 10
        if (z>=6)       //se toma el 6 como nota minima para aprobar
            cout << "El estudianto numero " << i+1 << " ha aprobado la materia con: " << z << endl;
        else 
            cout << "El estudianto numero " << i+1 << " ha reprobado la materia con: " << z << endl;
        y=0;            //se le asigna un nuevo valor a y para que no lo cargue a nuevas iteraciones
    }
}