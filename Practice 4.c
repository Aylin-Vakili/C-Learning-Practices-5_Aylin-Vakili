#include<stdio.h>
#include<math.h>
int main()
{ int a , b , reversea = 0 , rem1 , reverseb = 0 , rem2 ;

    printf("Enter two number :");
    scanf("%d %d", &a , &b );
    int temp1 = a;
    int temp2 =b;

       while( temp1!=0 )
        {
         rem1=temp1%10;
         reversea =reversea*10+rem1;
         temp1/=10;
         }


       while( temp2!=0 )
       {
         rem2=temp2%10;
         reverseb =reverseb*10+rem2;
         temp2/=10;
         }


    if ( reversea < reverseb ){
        printf("%d < %d", a , b );}

    else if ( reversea > reverseb) {printf("%d < %d", b , a );}
    else {printf("%d = %d", b , a );}

 return 0;
}
 //Made by Aylin Vakili - Student number : 14025141115 - Practice 4
