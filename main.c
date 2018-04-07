//Teste de buscaBinaria para projeto da graduação CC5661
#include<stdio.h>
#include<stdlib.h>
#define size 100
 
int buscaBinaria(int[], int, int, int);
 
int main() {
   int posicao, i, chave, num;
   int low, high, lista[size];
 
   printf("\n Quantos elementos existem na lista? ");
   scanf("%d", &num);
 
   printf("\n Insira os elementos da lista :");
   for (i = 0; i < num; i++) {
      scanf("%d", &lista[i]);
   }
 
   low = 0;
   high = num - 1;
 
   printf("\n Qual elemento devo buscar? : ");
   scanf("%d", &chave);
 
   posicao = buscaBinaria(lista, chave, low, high);
 
   if (posicao != -1) {
      printf("\n A posicao do numero e %d", (posicao + 1));
   } else
      printf("\n O numero nao esta na lista");
   return (0);
}
 

int buscaBinaria(int a[], int x, int low, int high) {
   int mid;
 
   if (low > high)
      return -1;
 
   mid = (low + high) / 2;
 
   if (x == a[mid]) {
      return (mid);
   } else if (x < a[mid]) {
      buscaBinaria(a, x, low, mid - 1);
   } else {
      buscaBinaria(a, x, mid + 1, high);
   }
}

