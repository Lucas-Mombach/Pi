#include <iostream>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <string>	
using namespace std;
int main(){
  long double pi,soma;
  long double termos,cont, deno;
  
  soma = 0;
  deno= 1;
  cont = 1;

  cin >> termos;

  while (termos >= cont)
  {
    deno = cont*cont; //obtem o denominador da frações
    soma +=1/deno; // obtem a soma das frações
    cont++;
  }
  
  soma = soma *6; 
  pi = sqrt(soma); 
  
  cout << pi << endl;
  
  return 0;
}
