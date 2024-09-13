#include <iostream>
#include <cstdio>  
#include <locale>  

using namespace std;

// Función para mostrar la bienvenida
void mostrarBienvenida() {
    printf(" _   _   __                                \n");
    printf("| \\ | |_/_/_ _ __ ___   ___ _ __ ___  ___ \n");
    printf("|  \\| | | | | '_ ` _ \\ / _ \\ '__/ _ \\/ __|\n");
    printf("| |\\  | |_| | | | | | |  __/ | | (_) \\__ \\\n");
    printf("|_| \\_|\\__,_|_| |_| |_|\\___|_|  \\___/|___/\n");
    printf("\n");
    printf("%cBienvenido al conversor de n%cmeros a texto!\n", 173, 163);
    printf("Por favor ingrese un n%cmero del 1 al 10: ", 163); 
}


void mostrarNumeroEnLetras(int numero) {
    switch (numero) {
        case 1:
            cout << "Uno" << endl;
            break;
        case 2:
            cout << "Dos" << endl;
            break;
        case 3:
            cout << "Tres" << endl;
            break;
        case 4:
            cout << "Cuatro" << endl;
            break;
        case 5:
            cout << "Cinco" << endl;
            break;
        case 6:
            cout << "Seis" << endl;
            break;
        case 7:
            cout << "Siete" << endl;
            break;
        case 8:
            cout << "Ocho" << endl;
            break;
        case 9:
            cout << "Nueve" << endl;
            break;
        case 10:
            cout << "Diez" << endl;
            break;
        default:
            printf("N%cmero fuera del rango establecido \n", 163);
            break;
    }
}

int main() {
    setlocale(LC_CTYPE, "es_ES.UTF-8"); 

    int numero;
    
    do {
        mostrarBienvenida(); 

        cin >> numero;
        
        mostrarNumeroEnLetras(numero);
        printf("%cDeseas ingresar otro n%cmero? (si/no) \n", 168,163);
        string respuesta;
        cin >> respuesta;
        
        if (respuesta != "si" && respuesta != "SI") {
            break;
        }

    } while (true);

    return 0;
}
