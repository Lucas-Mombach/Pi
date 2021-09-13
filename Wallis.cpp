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
  /* os denominadores dos termos muda a cada dois termos com excessão do primeiro que é 1*/
  while (termos >= cont1)
  {
    if (cont2 == 2){ //cont2 é o contador dos que uso pra definir os dois termos com o mesmo denominador
  
      deno += 2;
      num = deno-1; //sempre que for o segundo termo a ter aquele denominador
      cont2=0; // vai ser somado +1 no final no loop
    }
    else
    {
      if (cont1==1) // só vai rodar logo ao entrar no loop
      {
        num = 2;
      }

      else // vai rodar sempre que o termo for o primeiro a ter aquele denominador
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
