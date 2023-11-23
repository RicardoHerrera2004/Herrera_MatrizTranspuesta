#include <stdio.h>  //Biblioteca principal//
#include <stdlib.h> //Biblioteca para los numeros random//
#include <time.h>   //Biblioteca para la generacion de numeros random//

int main()
{ // Funcion principal//

    int a, b; // Definir como enteros las variables para las filas y columnas de la matriz//
    printf("Ingrese el valor de la fila de la matriz: ");
    scanf("%d", &a); // Se pide y se escanea al usuario el numero de las filas//
    printf("Ingrese el valor de la columna de la matriz: ");
    scanf("%d", &b);  // Se pide y se escanea al usuario el numero de las columnas//
    int matrix[a][b]; // Se define la matriz con la que vamos a trabajar //
    int matrix2[a][b];
    srand(time(NULL)); // Se crea la funcion para crear numeros randoms//
    printf("Matriz original");
    for (int i = 0; i < a; i++) // Se crea el primer for para la creacion de la matriz, para el uso de filas//
    {
        printf("\n");               // Se crea para separar a la siguiente linea las filas//
        for (int j = 0; j < b; j++) // Se crea el segundo for para la creacion de la matriz, para el uso de las columnas//
        {
            matrix[i][j] = rand() % 100 + 1; // Se define que en la matriz se agreguen numeros random en cada pocision de la matriz//

            printf("%d \t", matrix[i][j]); // Se imprime la matriz//
        }
    }
    printf("\n");
    printf("Nueva matriz");
    for (int i = 0; i < a; i++)
    {
        printf("\n");
        for (int j = 0; j < b; j++)
        {
            matrix2[i][j] = matrix[j][i];
            printf("%d \t", matrix2[i][j]);
        }
    }

    return 0;
}