#include <stdio.h>
#include <math.h>

int main()
//Golrokh must be paid in cash with m 100 toman , n 20 toman , a 10 toman , y 5 toman , z 1 toman and the total money she gets like that is X
{
    int X , m , n , a , y , z ;
    printf("Type the price X Golrokh earns :");
    scanf( "%d",&X );

    m = X /100 ;
    n = ( X - (m * 100)) /20 ;
    a = ( X - (m * 100) - (n * 20)) /10 ;
    y = ( X - (m * 100) - (n * 20) - (a * 10)) /5 ;
    z = ( X - (m * 100) - (n * 20) - (a * 10) - (y * 5)) /1 ;

    printf( "\n The minimum number of cashes used by the bank to pay %d toman is : \n", X );
    printf( " %d ta 100 tomani , %d ta 20 tomani , %d ta 10 tomani , %d ta 5 tomani , %d ta 1 tomani \n", m , n , a , y , z );

    return 0;
}
 //Made by Aylin Vakili - Student number : 14025141115 - Practice 5
