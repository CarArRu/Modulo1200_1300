/// Librerías
#include"Otro.h"


/// Variables
///static Uint VariableExterna=701;
Uint VariableExterna=701;
Doble VariableDouble=84.7;



void ContadorStatic(void){
    static Uint Contador=0;
    Contador++;

    printf("\nLa avriable externa es: %d", VarExterna);

    printf("\nContador: %d", Contador);}


void FuncReturn(void){
    printf("\n");
    printf("\nMensaje a");
    printf("\nMensaje b");
    printf("\nMensaje c");
    return;
    printf("\nMensaje d");
    printf("\nMensaje e");}


Uint FuncRet(Uint Entrada){

    if(Entrada==1){
        printf("\nEl valor es 1");
        return 100;}
    else{
        printf("\nEl valor diferente de 1");
        return 500;}}


Uint ReservarMemoria(Uint **ptr, Uint Tam){
    *ptr = (Uint*)malloc((Tam)*sizeof(Uint));
    if(*ptr==NULL){
        return 0;}
    else{
        return 1;}}


void ConvMayusculas(Caracter *Cadena){
    Uint Tam=0, Con=0;

    while(Cadena[Tam]!=NULL)
        Tam++;


    for(Con=0;Con<Tam;Con++)
      if(Cadena[Con]>='a' && Cadena[Con]<='z')
        Cadena[Con] -= 32;


}
