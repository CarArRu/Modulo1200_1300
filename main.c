/// Librerías
#include"Otro.h"


/// Definición de variables
SwitchCaseStr SwitchCaseVal;
DesplazamientoStr Desplazamiento;
CasteoStr Casteo;
Enumeraciones Enumeracion;
PunteroVoidPtr PunteroVoid;
ContBrakeStr ContBrake;
NumAleatorioStr NumAleatorio;
UnionStr UnionVar;
TamArregloStr TamArreglo;

EjercicioPtr Ejercicio;

EjercicioPtr P1;
EjercicioPtr P2;
EjercicioPtr P3;


char *str = "http://c.biancheng.net";


/// Declaracion de constantes
CntUint VarConstante1 = 90;
CntUint VarConstante2 = 9999;
CntUint *const ptrCnt = &VarConstante2;


Uint VarExterna=9;


int main(void){

    printf("\nPrograma Maestro");
	

    goto NumAleatorioU;

    printf("\nAportacion del Developer A");

    goto PunterosDobles;
    goto OperacionContinue;

    ///Static
    ContadorStatic();
    ContadorStatic();
    ContadorStatic();
    printf("\nValor de variable externa: %d", VariableExterna);
    printf("\nValor de variable externa double: %0.2f", VariableDouble);
    /// Switch case
    SwitchCaseVal.Valor=0;

    switch(SwitchCaseVal.Valor/**Switch case*/){
    case 0: case 1:
        printf("\nCaso 0");
        printf("\nCaso 1");
        break;

    case 2 :
        printf("\nCaso 2");
        break;
    }   /// Switch

    /// Desplazamiento de bits
    Desplazamiento.ValorEntero = 1215261793;
    Desplazamiento.Valor4 = Desplazamiento.ValorEntero & 255;
    Desplazamiento.Valor3 = (Desplazamiento.ValorEntero & 65280) >> 8;
    Desplazamiento.Valor2 = (Desplazamiento.ValorEntero & 16711680) >> 16;
    Desplazamiento.Valor1 = (Desplazamiento.ValorEntero & 4278190080) >> 24;
    printf("\nValor Entero: %d", Desplazamiento.ValorEntero);
    printf("\nValor 1: %c", Desplazamiento.Valor1);
    printf("\nValor 2: %c", Desplazamiento.Valor2);
    printf("\nValor 3: %c", Desplazamiento.Valor3);
    printf("\nValor 4: %c", Desplazamiento.Valor4);

    /// Constantes
    printf("\n\nVariable constante : %d\n", *ptrCnt);

    /// Casteo
    Casteo.a = 84;
    Casteo.b = 15;
    Casteo.c = Casteo.a/(Doble)Casteo.b;
    printf("\nCasteo");
    printf("\nValor de c: %0.2f\n", Casteo.c);

    /// #define como -> Macro
    printf(MensajeDefine);
    printf("\nSuma de los numeros %d\n", Suma(5, 2, 3, 5));

    /// Enumeraciones
    printf("\nEnumeraciones");
    printf("\nEnum 1: %d", Op1);
    printf("\nEnum 2: %d", Op2);
    printf("\nEnum 3: %d", Op3);
    printf("\nEnum 4: %d", Op4);
    printf("\nEnum 5: %d\n", Op5);

    /// Puntero Void
    PunteroVoid.ValorEntero=84;
    PunteroVoid.ValorFloat=97.7;
    PunteroVoid.ValorChr='X';

    PunteroVoid.ptr = &PunteroVoid.ValorEntero;
    printf("\nValor Entero: %d", *(Uint*)PunteroVoid.ptr);
    PunteroVoid.ptr = &PunteroVoid.ValorFloat;
    printf("\nValor flotante: %0.2f", *(Doble*)PunteroVoid.ptr);
    PunteroVoid.ptr = &PunteroVoid.ValorChr;
    printf("\nValor del caracter: %c\n", *(Caracter*)PunteroVoid.ptr);

    /// Contiunue y brake
    printf("\nContinue y brake\n");

    ContBrake.Contador=0;
    while(1){
        ContBrake.Contador++;
        if(ContBrake.Contador>=5)
            break;
        printf("\nValor Contador: %d", ContBrake.Contador);}

OperacionContinue:
    printf("\nContinue\n");
    ContBrake.Contador=0;
    do{
        ContBrake.Contador++;
        if(ContBrake.Contador==2)
            continue;
        printf("\nValor contador: %d", ContBrake.Contador);

    }while(ContBrake.Contador<5);

    /// Return
    FuncReturn();
    printf("\nValor de la funcion: %d", FuncRet(81));


    /// Size of
    printf("\n\nLa cantidad de bytes de un entero es: %d", sizeof(Uint));
    printf("\nLa cantidad de bytes de un caracter es: %d", sizeof(unsigned char));


    /// Union
    printf("\n\nUnion\n");
    register Uint Itera=0;

    for(Itera=0;Itera<50;Itera++)
        UnionVar.Nombre[Itera]='\0';

    UnionVar.Nombre[0]='C';
    UnionVar.Nombre[1]='e';
    UnionVar.Nombre[2]='s';
    UnionVar.Nombre[3]='a';
    UnionVar.Nombre[4]='r';

    printf("\nNombre completo: %s", UnionVar.Nombre);
    printf("\nInicial: %c", UnionVar.Inicial);
    printf("\nValor: %d", UnionVar.Entero);

    ///Punteros Dobles
PunterosDobles:
    printf("\nPunteros dobles\n");
    PunterosDoblesStr PunterosDobles;

    /**PunterosDobles.a = 84;
    PunterosDobles.b = 107;
    PunterosDobles.p = &PunterosDobles.a;
    PunterosDobles.pp = &PunterosDobles.p;
    *PunterosDobles.pp = &PunterosDobles.b;
    printf("\nValor del puntero: %d", PunterosDobles.p[0]);*/


    if(ReservarMemoria(&PunterosDobles.p, 10)){
        printf("\nMemoria Reservada OK");

        for(PunterosDobles.a=0;PunterosDobles.a<10;PunterosDobles.a++){
            PunterosDobles.p[PunterosDobles.a]=PunterosDobles.a*100;}

        for(PunterosDobles.a=0;PunterosDobles.a<10;PunterosDobles.a++){
            printf("\nValor %d: %d", PunterosDobles.a, PunterosDobles.p[PunterosDobles.a]);}}
    else{
        printf("\nMemoria Reservada NOK !!!");}


    TamArreglo.Tam=sizeof(TamArreglo.Arreglo)/sizeof(Uint);
    printf("\nTamanio del vector: %d", TamArreglo.Tam);

    for(TamArreglo.Tam=0;TamArreglo.Tam<10;TamArreglo.Tam++)
        TamArreglo.Suma += 2;

    printf("\nEl valor total de la suma es: %d", TamArreglo.Suma);


NumAleatorioU:
    printf("\nNumero aleatorio\n");

    srand(time(NULL));
    do{
        NumAleatorio.Numeros[NumAleatorio.i] = rand() % 100 + 1;
        NumAleatorio.i++;
    }while(NumAleatorio.i<10);


    printf("\nNumero aleatorio encontradas");
    for(NumAleatorio.i=0;NumAleatorio.i<10;NumAleatorio.i++)
        printf("\nNumero %d: %d", NumAleatorio.i, NumAleatorio.Numeros[NumAleatorio.i]);

    printf("\n\n\nAritmetica de punteros\n");

    for(NumAleatorio.i=0;NumAleatorio.i<5;NumAleatorio.i++)
        printf("\nNumero %d del arreglo: %d", NumAleatorio.i, NumAleatorio.Numeros[NumAleatorio.i]);

    printf("\nUtilizando aritmetica de punteros\n\n");
    NumAleatorio.ptr = &NumAleatorio.Numeros[0];

    for(NumAleatorio.i=0;NumAleatorio.i<5;NumAleatorio.i++)
        printf("\nValor %d: %d", NumAleatorio.i, *(NumAleatorio.ptr + NumAleatorio.i));


    printf("\n\nEscribe un texto: ");
    scanf("%[^\n]s", Ejercicio.EntradaTxt);
    ConvMayusculas(&Ejercicio.EntradaTxt[0]);
    printf("\nTexto nuevo: %s", Ejercicio.EntradaTxt);





}   /// Main
