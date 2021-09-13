#include <iostream>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <string>	
using namespace std;
int main(){
  long double pi,soma;
  long double termos, deno;
  int cont;
  soma = 0;
  deno= 1;
  cont = 1;

  cin >> termos;

  while (termos >= cont)
  {
    if (cont%2 == 0){
      soma -= 1/deno; // se subtrai toda a vez que o contador é par
    }
    else{
      soma += 1/deno; // se soma toda a vez que o contador é impar
    }
  
    deno += 2; // a diferença entre os termos é de 2 em ordem crescente
    cont++;
  }
  
  pi = soma *4; // a soma dos termos é pi/4
 
  cout << pi << endl;
  
  return 0;
}
