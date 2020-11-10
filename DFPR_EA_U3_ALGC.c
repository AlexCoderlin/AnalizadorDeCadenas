/*
* Por: Alejandro Gonzalez Colin
* Ingenieria en Desarrollo de Sofotware
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h> //funciones para trabajar cadenas (contar letras de cadena)
#include <ctype.h> //clasificar caracteres individuales (saber si son mayusculas)

//Prototipado de funciones
void voc(char x[]);
int esp(char x[]);
int tab(char x[]);

/*------------------- Funcion Principal ------------------------*/
void main() {
    system("color 02");// Cambiamos colores 
    char cad[100];
    int x=0,y=0;

    puts("\n\t\t\t>> CONTADOR DE CARACTERES <<\n\n");
    printf("\nIngrese cadena: ");
    fgets(cad, 100, stdin);
    //printf("\nCadena ingresada: %s", cad);
    printf("\n\tNumero de caracteres: %d", strlen(cad)-1);

    voc(cad); //llama funcion para calcular vocales (mayusculas y minusculas).
    x = esp(cad); //llama funcion para calcular espacios.
    y = tab(cad); //llama funcion para calcular tabuladores.

    printf("\n\tEspacios: %d", x);
    printf("\n\tTabuladores: %d\n\n", y);
    printf("\nSoftware hecho con <3 por Alejando Gonzalez Colin.\n\n");
    system("pause");
}
/*------------------- Funcion Vocales ------------------------*/
void voc(char x[]){
    int i=0, M=0, m=0;
    char y;

    for (i = 0; i < strlen(x) - 1; i++) { //recorre el tamaño la cadena -1 por el \n que captura fgets.
        y = x[i];
        if (isupper(x[i]) && y=='A' || y=='E' || y=='I' || y=='O' || y=='U'){
            M += 1;
        }
        else if (islower(x[i]) && y=='a' || y=='e' || y=='i' || y=='o' || y=='u'){
            m += 1;
        }

    }
    printf("\n\tVocales mayusculas: %d",M);
    printf("\n\tVocales minusculas: %d",m);
}
/*------------------- Funcion Espacios en blanco ------------------------*/
int esp(char x[]) {
    int i = 0, sum=0, conv=0;

    for (i = 0; i < strlen(x) - 1; i++) {
        conv = x[i];
        if (conv == 32){ //Si caracter tiene numero 32 en ASCII es espacio
            sum += 1;
        }
    }
    return sum;
}
/*------------------- Funcion tabuladores ------------------------*/
int tab(char x[]) {
    int i = 0, sum=0, conv=0;

    for (i = 0; i < strlen(x) - 1; i++) {
        conv = x[i];
        if (conv == 9){ //Si caracter tiene numero 9 en ASCII es tabulador
            sum += 1;
        }
    }
    return sum;
}