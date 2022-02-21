#ifndef OTRO_H_INCLUDED
#define OTRO_H_INCLUDED


/// Librerías
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


/// Definiciones
#define MensajeDefine "\n#define como macro\n"
#define Suma(a, b, c, d) a+b+c+d


/// Definiciones de tipo
typedef unsigned int Uint;
typedef double Doble;
typedef unsigned char Caracter;

typedef const unsigned int CntUint;



/// Prototipos de Función
extern void ContadorStatic(void);
extern void FuncReturn(void);
extern Uint FuncRet(Uint Entrada);

extern void ConvMayusculas(Caracter *Cadena);



extern Uint ReservarMemoria(Uint **ptr, Uint Tamanio);

extern Uint VarExterna;


/// Declaración de Variables
extern Uint VariableExterna;
extern Doble VariableDouble;


typedef union{
    Caracter Inicial;
    Uint Entero;
    Caracter Nombre[50];
}UnionStr;


typedef struct{
    Uint Valor;
}SwitchCaseStr;

typedef struct{
    Uint ValorEntero;
    Uint AuxEntero;
    Caracter Valor1;
    Caracter Valor2;
    Caracter Valor3;
    Caracter Valor4;
}DesplazamientoStr;

typedef struct{
    Uint a;
    Uint b;
    Doble c;
}CasteoStr;

typedef enum{
    Op1=10,
    Op2,
    Op3,
    Op4,
    Op5
}Enumeraciones;

typedef struct{
    Uint ValorEntero;
    Doble ValorFloat;
    Caracter ValorChr;
    void *ptr;
}PunteroVoidPtr;

typedef struct{
    Uint Contador;
}ContBrakeStr;

typedef struct{
    Uint a;
    Uint b;
    Uint *p;
    Uint **pp;
}PunterosDoblesStr;

typedef struct{
    Uint Arreglo[50];
    Uint Tam;
    Uint Suma;
}TamArregloStr;

typedef struct{
    Uint Numeros[50];
    Uint i;
    Uint *ptr;
}NumAleatorioStr;


typedef struct{
    Caracter EntradaTxt[50];
}EjercicioPtr;

typedef struct{
    Uint Arreglo[50];
}OrdenarStr;





#endif // OTRO_H_INCLUDED
