#include <iostream>

using namespace std;

int main()
{
   float salárioA;
   float percentualR;
   float salárioR;
   
   cout<< "Insira seu salário atual mensal: ";
   cin>> salárioA;
   cout<< "Insira o percentual de reajuste (em número decimal): ";
   cin>> percentualR;
   
   salárioR=salárioA*percentualR;
   
   cout<< "Seu salário reajustado é: "<< salárioR;
   
   return 0;
}
