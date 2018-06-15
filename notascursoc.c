//libreria basica de C
#include <stdio.h>
//para manejar las cadenas
#include <string.h>
//la libreria de los booleanos
#include <stdbool.h>

//exec con Crtl + B

//Los metodos aqui se tienen que declarar antes del main, o tiran error pfft
void otroMetodo(){
		printf("%s\n", "Hola esto es otro metodo");
}


//Metodo Main, Just like Java I guess
void main(){
	//Para Imprimir una cadena sencilla con brinco de linea.
    printf("Prueba\n");
    //DECLARAMOS DIFERENTES TIPOS DE VARIABLES
    int numero = 1;
    short numeroNoTanLargo = 30000;
    long numeroSuperLargo  = 2000000;
    float numeroConDecimales = 10.50;
   // bool losBoleanos = true;
    char losCharacteres = 'q'; //los characteres se deben asignar con comilla simple

    //IMPRIMIMOS EL INT
    printf("%i\n", numero);

    //PRUEBA DE SUMATORIA DE CARACTERES
    int numero2 = 2;
    char primeraLetra = 'A';
    char otraLetra = primeraLetra + numero2;
    //SUMA LOS INDICES DE LAS LETRAS EN ORDEN ALFABETICO, NO CONCATENA!!!
    printf("%c\n", otraLetra);  //EL RESULTADO ES C

    //
    //MOD Module
    //
    int valor1 = 22;
    int valor2 = 5;
    int resultado = valor1 % valor2;
    printf("%i\n", resultado);

    
    //
    //DOUBLES, PUNTO FLOTANTE
    //
    double x = 2.0001547;
    double y = -1.1563541;
    double resDouble = x - y;
    printf("%f\n", resDouble ); //Suma el negativo 

    //
    //BOOLEANOS
    //
    bool boleano = true;
    printf("%d\n", boleano ); // true = 1, false = 0 


    //
    //COMPARACION DE VARIABLES
    //
    bool comparacion = 10<3; 
    bool comparacion2 = 1<2;
    printf("%d\n", comparacion);//0, osease es falso
    printf("%d\n", comparacion2);//1, true, uno si es menor que dos

    //&& significa y, || significa o, ! el tipico simbolo de negacion.

    if (comparacion2 && !comparacion){
    	printf("%s\n", "Si Entro");
    }

    //y asi un millon de if...
    int nuestroNumero1 = 1;
    while(nuestroNumero1 == 1){

    	printf("%s\n", "Entro al while");
    	nuestroNumero1++;

    }

    switch(nuestroNumero1){
    	case 1:
    	printf("%s\n", "Fue 1");
    	break;
    	case 2:
    	printf("%s\n", "Fue 2");
    	break;
    	default:
    	printf("%s\n", "Lo que sea");
    	break;
    }

    
    int limite = 10;
    for (int i = 0; i < limite; ++i){

    	printf("%i\n", i+1);
    }

    
    //
    //LLAMADA A OTRO METODO
    //
    otroMetodo();

    //
    //HERMOSOS ARREGLOS
    //

    int monoArr[5] = {19, 10, 8, 17, 9};

    printf("%d\n", monoArr[0]); //con d se imprimen

    //intento de arreglo aociativo:

    int indicesArr[5] = {0, 1, 2, 3, 4};

    arrCero[1] = { 0, "CERO" };

    indicesArr[0] = arrCero;

    printf("%d\n", indicesArr[0][0]);



}

	