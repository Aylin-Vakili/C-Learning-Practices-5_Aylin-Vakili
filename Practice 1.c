#include <stdio.h>

int main ()
{
    int a , b ;

    printf("Enter min number a and max number b : ");
     scanf("%d %d", &a , &b );

  printf(" The odd numbers between %d and %d are:\n ", a, b );
  int i;
  for (i = a+1 ; i < b ; i++ ){
  if (i%2==0){continue;}
  else {printf(" %d\n", i );}
  }

  printf(" Goodbye :D\n ")
return 0;
}
//Made by Aylin Vakili - Student number : 14025141115 - Practice 1
