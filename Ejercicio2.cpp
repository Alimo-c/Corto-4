#include "iostream"
using namespace std;
float media (float []);     //la función va a devolver un valor 
void comparacion (float [], float);
int main (void){
    cout << endl << "PROMEDIO DE 25 ESTATURAS EN METROS" << endl << endl;
    float estaturas[25], med;
    for (int i=0;i<25;i++){
        cout << "Introduzca la altura numero " << i+1 << ": ";  //se coloca el i+1 para comenzar desde el 1 y no el 0
        cin >> estaturas[i];            //se va llenando el arreglo con las estaturas
    }
    med=media (estaturas);              //el resultado de la funcion se almacena en una variable
    cout << "El promedio de estaturas es: " << med << " m" << endl;
    comparacion (estaturas, med);    
}

float media (float est[]){
    float x=0;
    for (int i=0;i<25;i++)
        x+=est[i];          //x va acumulando el valor de cada elemento 
    return x/25;            //el valor acumulado de x se divide entre el numero de casos para promediarlo
}

void comparacion (float est[], float med){
    int mayor=0, menor=0;       //se declaran variables para llevar cuanta de quienes son mayores y menores al promedio
    for (int i=0;i<25;i++){
        if (est[i]<med)        
            menor++;            //si el valor es menor al promedio el contador aumenta
        else if (est[i]>med)
            mayor++;            //si el valor es mayor al promedio el contador aumenta
    }
    cout << "Hay " << mayor << " estaturas que estan arriba de la media" << endl;
    cout << "Hay " << menor << " estaturas que estan abajo de la media" << endl;
}