#include <iostream>
#include <cstdio>
#include <locale>

using namespace std;


void mostrarBienvenida() {
    printf(" ____               _           \n");
    printf("/ ___|_ __ __ _  __| | ___  ___ \n");
    printf("| |  _| '__/ _` |/ _` |/ _ \\/ __|\n");
    printf("| |_| | | | (_| | (_| | (_) \\__ \\\n");
    printf(" \\____|_|  \\__,_|\\__,_|\\___/|___/\n");
    printf("\n");
    printf("%cBienvenido al conversor de temperaturas!\n", 173); 

}

double celsiusAFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}


double celsiusAKelvin(double celsius) {
    return celsius + 273.15;
}


void mostrarMenu(double& celsius) { 
    int opcion;
    do {
    
        printf("\nElija la conversi%cn deseada:\n", 162); 
        printf("'1' Para convertir a Fahrenheit\n");
        printf("'2' Para convertir a Kelvin\n");
        printf("'3' Para volver a ingresar temperatura\n");
        printf("4. Salir\n");
        printf("Ingrese una de las opciones: ");
        cin >> opcion;

        switch (opcion) {
            case 1: {
                double fahrenheit = celsiusAFahrenheit(celsius);
                printf("La temperatura convertida a Fahrenheit es: %.2f\n", fahrenheit);
                break;
            }
            case 2: {
                double kelvin = celsiusAKelvin(celsius);
                printf("La temperatura en grados Kelvin es: %.2f\n", kelvin);
                break;
            }
            case 3: {
                printf("Por favor ingrese la nueva temperatura en grados Celsius: ");
                cin >> celsius;
                break;
            }
            case 4:
                printf("%cGracias por usar el conversor de temperaturas!\n", 173); // '¡'
             
                break;
            default:
                printf("Opción no válida. Por favor intente de nuevo.\n");
        }
    } while (opcion != 4);
}

int main() {
    setlocale(LC_CTYPE, "es_ES.UTF-8");

    mostrarBienvenida();

    double celsius;
    
 
    printf("Por favor ingrese la temperatura en grados Celsius o cent%cgrados: ", 161); // 'º'
    cin >> celsius;

    mostrarMenu(celsius);

    return 0;
}
