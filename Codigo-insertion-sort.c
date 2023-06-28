#include <stdio.h>
#include <stdlib.h>
#define MAX 10

void insertion_sort(int *a);

int main(){
 int i, vet[MAX];
 

 
 for(i = 0; i < MAX; i++)
 {
  printf("Digite um valor: ");
  scanf("%d", &vet[i]);
 }
 


 insertion_sort(vet);
 

 
 printf("\nValores ordenados:\n");
 for(i = 0; i < MAX; i++)
 {
  printf("%d  ", vet[i]);
 }
 
 return 0;
}

void insertion_sort(int *a){
 int  i,j, posicao_atual;
  
 for(i = 1; i < MAX; i++)
 {
  posicao_atual = a[i];
  for(j = i-1; j >= 0 && posicao_atual < a[j]; j--)
  {
   a[j+1] = a[j];
  }
  a[j+1] = posicao_atual;
 }
}
