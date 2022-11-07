#include <iostream>
using namespace std;
typedef struct no_{
int valor;
int chave;
}no;
no bd[50];
int TAM = 0;
int MAX = 50;
void remove()
{
  int x = TAM;
  if(TAM!=0){
    bd[x].chave = 0;
    bd[x].valor = 0;
    TAM= TAM-1;
  }
 
}
int busca(int chave)
{
  int retorno = -1;
  int i =0;
  while(i<= TAM)
    {
      if(bd[i].chave == chave ){
        retorno = i;}
      else{
        i++;
      } 
      
    }
  return retorno;
}
int insere(int chave, int valor)
{
  int x = busca(chave);
  int retorno = -1;
  if(x == -1){
  if (TAM != MAX)
  {
    TAM++;
    bd[TAM].chave = chave;
    bd[TAM].valor = valor;
    retorno = TAM;
    
  }
    }
  return retorno;
}
void imprime()
{
  for(int i =1; i<= TAM; i++)
    {
      printf("Valor: %d  Chave: %d\n",bd[i].valor, bd[i].chave);
    }
  printf("---------------------------\n");
}
int main()
{
  insere(1,2);
  imprime();
  insere(2,4);
  imprime();
  insere(3,6);
  imprime();
  remove();
  imprime();
    }