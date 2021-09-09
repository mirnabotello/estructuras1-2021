#include <stdio.h>

// Declaración de prototipos - funciones prototipo
void pares(int numero);
int duplicar(int valor);
void triplicado(int v, int *res);

int main()
{
    // ¿Qué necesitamos para trabajar?
    // Variables que almacenen esa información
    int limite; // Las variables se declaran al inicio de la función
    int i;
    int auxiliar;
    int resultado;

    printf("Dame un número:");
    scanf("%d", &limite);  // scanf siempre necesita la dirección de la variable en donde almacenara el valor/dato

    // Para definir que ciclo usar 
    // 1.  Sabemos el número de vueltas?
    //      a.  Si -> for
    //      b.  while o do-while
    //          b1.  Si las operaciones las debo ejecutar mínimo una vez -> do-while
    //          b2.  Si no es un while

    // for -> 3 partes:  1.  Inicialización variable auxiliar para contar el número de vueltas
    //                   2.  Validación -> mientras la condición sea verdadera seguirá dando vueltas
    //                   3.  Incremento o decremento 
    //                          Incremento en 1:  i++ ó i = i + 1 ó i += 1
    for(i = 0; i <= limite; i++)
    {
       // Llamada o ejecución de una función
       pares(i);
    }


    // Para cada número voy a imprimir el valor multiplicado por dos
    for(i = 0; i <= limite; i++)
    {
        auxiliar = duplicar(i);
        printf("El doble es: %d\n", auxiliar);
    }

    // Para cada número modificar el parametro resultado para que tenga el valor triplicado
    for(i = 0; i <= limite; i++)
    {
        triplicado(i, &resultado);

    }


    return 0; 
}

// Función:
//      1.  Que es lo que va a utilizar
//          Parametros ->  Ejemplo:  int 
//      2.  Va a regresar algo?
//          De que tipo es la función, lo ponemos antes del nombre de la función
//          Si no regresa nada -> void
//      3.  Voy a modificar algunos de los valores de entrada
//          Si -> Necesitaría la dirección 
//                Pasar la dirección de un entero ->  int *identificador
//          No -> Todo bien


// Definición de funciones

void triplicado(int v, int *res)
{
    *res = v * 3;  // *variable me da el contenido de la casilla de la dirección que tiene la variable
}

void pares(int numero)
{
    // if -> Validación, si la condición es verdadera hace lo que está dentro del if
        //    -> Si tiene mas de una instrucción lleva llaves, si solo lleva una instrucción puede o no llevar llaves
    if(numero % 2 == 0)
        printf("%d es par\n", numero); // Función, que usa el dato después de la coma para imprimirlo, no para modificarlo, no es necesario pasar la dirección
}

int duplicar(int valor)
{
    int duplicado;
    duplicado = valor * 2;

    return duplicado;
    // Otra opción puede ser:
    // return valor * 2;
}

