#include <iostream>
#include <cstdio>  
#include <cmath>
#include <locale>   

using namespace std;

void mostrarBienvenida() {
    printf(" __  __          _ _       \n");
    printf("|  \\/  | ___  __| (_) __ _ \n");
    printf("| |\\/| |/ _ \\/ _` | |/ _` |\n");
    printf("| |  | |  __/ (_| | | (_| |\n");
    printf("|_|  |_|\\___|\\__,_|_|\\__,_|\n");
    printf("\n");
    printf("%cBienvenido al calculador de la media de dos n%cmeros!\n", 173, 163); 

}

double Media(double n1, double n2) {
    return (n1 + n2) / 2;
}

int main() {
    setlocale(LC_CTYPE, "es_ES.UTF-8"); 

    string retorno;
    mostrarBienvenida();
    
    do{   

        double numero1, numero2;
        printf("Por favor ingrese el primer n%cmero ac%c: \n ", 163, 160); 
        cin >> numero1;
    
        printf("Ahora ingrese el siguiente n%cmero por favor: \n ", 163); 
        cin >> numero2;

 
        double media = Media(numero1, numero2);
        printf("La media de los n%cmeros ingresados es: %.2f\n", 163, media);

        printf("%cDeseas ingresar otro n%cmero? (si/no) \n", 168,163);
        cin >> retorno;


    } while (retorno == "si" || retorno == "SI");
    
    return 0;
        
}