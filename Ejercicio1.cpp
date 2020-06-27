#include "iostream"
using namespace std;
void codificar(char [], int);
int main (void){
    cout << endl << "CLAVE DEL MURCIELAGO" << endl << endl;
    int n,i;
    cout << "Introduzca la cantidad de letras en la frase, contando espacios: ";
    cin >> n;
    char frase[n];
    cout << "Introduzca la frase, letra por letra, denotando los espacios con '_':" << endl;
    for (i=0;i<n;i++){
        cin >> frase[i];
        if (frase[i]=='_')
            frase[i]=' ';       //se sustituyen los '_' por espacios normales ' '
    }
    cout << "Su frase es sin codificar es: ";
    for (i=0;i<n;i++)
        cout << frase[i];       //se imprime nuevamente la frase introducida
    cout << endl;
    codificar (frase, n);       //llama a la función
    return 0;
}

void codificar (char frase[], int n){
    cout << "Su frase codificada es: ";
    for (int i=0;i<n;i++){      //se va barriendo de letra en letra en letra hasta acabar el arreglo
        switch (frase[i]){      //se especifican las sustituciones a hacer si la letra pertenece a la clave
            case 'm':
            frase[i]='0';
            break;
            case 'u':
            frase[i]='1';
            break;
            case 'r':
            frase[i]='2';
            break;
            case 'c':
            frase[i]='3';
            break;
            case 'i':
            frase[i]='4';
            break;
            case 'e':
            frase[i]='5';
            break;
            case 'l':
            frase[i]='6';
            break;
            case 'a':
            frase[i]='7';
            break;
            case 'g':
            frase[i]='8';
            break;
            case 'o':
            frase[i]='9';
            break;
        }
        cout << frase[i];       //se imprime la frase codificada 
    }
}