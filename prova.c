#include<stdio.h>

//função para verificar se o número é primo
bool eh primo (int num){
if (num <= 1)return false;
for(int i = 2; i < = num /2 i++){
if (num % i == 0)return false;
}
return true;
}
//função para ordenar um vetor
void ordenar (int array[], int tamanho){
int temp;
for(int i = 0; i < tamanho - 1; i++);{
for(int j = 0; i = < tamanho - 1 - i; j++);{
if (array [j] > array [i + 1]){
    temp = array [j];
    array [j] = array [j + 1];
    array [j + 1] = temp;
      }
    }
  }
}

int main(){

    int numeros [10];
    int SomaPares = 0, SomaÍmpares = 0;
    int pares [10], ímpares [10], primos [10];
    int CountPares = 0, CountÍmpares = 0, CountPrimos = 0;

    //lendo 10 números inteiros
    printf("digite 10 numeros inteiros:\n");
    for(int i = 0; i<10; i++){
    scanf("%d", &numeros[i]);

    //verificando se o número é par ou ímpar e somando

    if(numeros[i] %2 = 0){

        pares [countPares ++] = numeros [i];
        Soma Pares += numeros[i];
        }else{
        impares [CountÍmpares ++] = numeros[i];
        soma Impares += numeros[i];
        }
        //verificação se o numero é primo
        if(eh primo(numero [i]));
        primos [CountPrimos ++] = numeros [i];


      }
    }
    //ordenando o vetor de numeros
    ordenar(numeros, 10);

    //exibindo resultado
    printf("\n numeros pares:\n");
    for(int i = 0; i<countpares; i++);{
    printf ("%d", pares[i]);
    }
    printf("\n Soma dos impares :%d\n", SomaÍmpares);
    printf("\nNumeros primos:\n");
    for(int i = 0; i<countPrimos; i++);
    prinf ("%d", primos[i]);}

    printf ("\n\n Vetor ordenado:\n");
    for(int i = 0; i<10; i++);{
    printf ("%d", numeros[i]);
    }

    return(0);
}
