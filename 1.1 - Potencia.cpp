#include <iostream>
#include <cstdio>  
#include <cmath>
#include <locale>   

using namespace std;

void mostrarBienvenida() {
    printf(" ____       _                  _       \n");
    printf("|  _ \\ ___ | |_ ___ _ __   ___(_) __ _ \n");
    printf("| |_) / _ \\| __/ _ \\ '_ \\ / __| |/ _` |\n");
    printf("|  __/ (_) | ||  __/ | | | (__| | (_| |\n");
    printf("|_|   \\___/ \\__\\___|_| |_|\\___|_|\\__,_|\n");
    printf("\n");
    printf("%cBienvenido al calculador para potencias!\n", 173); 
    printf("Por favor ingrese el n%cmero base a potenciar ac%c abajo: \n ", 163, 160); 
}

int Potencia(int coeficiente, int exponente) {
    return pow(coeficiente, exponente);
}

int main() {
    setlocale(LC_CTYPE, "es_ES.UTF-8"); 
    
    int coeficiente, exponente;
    string opcionRetorno;
    
    string opciones_validas[2][2] = { {"si", "SI"}, {"no", "NO"} };
    
    do {
        mostrarBienvenida(); 

        cin >> coeficiente;
        printf("Ahora, introduzca el exponente ac%c ", 160);
        cin >> exponente;
        
        int potencia = Potencia(coeficiente, exponente);
        
        printf("El resultado de %d elevado a la %d potencia es: %d\n", coeficiente, exponente, potencia);
        
        printf("Deseas calcular otra potencia? escribe 'si' para continuar o 'no' para terminar la ejecuci%cn: ", 162); 
        cin >> opcionRetorno;
        
    } while(opcionRetorno == opciones_validas[0][0] || opcionRetorno == opciones_validas[0][0]);

    return 0;
}
