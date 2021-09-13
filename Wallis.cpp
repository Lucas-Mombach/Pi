#include <iostream>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <string>	
using namespace std;
int main(){
  long double pi,soma;
  long double termos, deno, num;
  int cont1,cont2;
  soma = 1;
  deno= 1;
  cont1 = 1;
  cont2 = 1;

  cin >> termos;

  while (termos >= cont1)
  {
    if (cont2 == 2){
      
      deno += 2;
      num = deno-1;
      cont2=0;
    }
    else
    {
      if (cont1==1)
      {
        num = 2;
      }

      else
      {
        num = deno+1;
        }
    }  
    
    soma *= num/deno;
    
    cont1++;
    cont2++;

  }
  
  pi = soma *2; // a soma dos termos é pi/2
 
  cout << pi << endl;

  return 0;
}
//<< fixed << setprecision(2) <<
