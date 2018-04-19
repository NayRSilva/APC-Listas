#include<stdio.h>

int main (){

float base, S, P; /*declara variaveis onde base é o salario inicial, S é o salario com aumentos, P é a percentagemd e aumentos*/

int i;

base= 1000.00;

P= 0.015;
S= ( base + (P * base) );



for (i=2017 ; i <= 2018 ; i++) {
P= (2*P);

S= ( S + (P*S) );

}

printf("Salario em 2018= %f \n", S);

return 0;

}
