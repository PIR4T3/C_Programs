/*

Find Largest Number Among Three Numbers C Program

*/

#include<stdio.h>
int main(){
   int a, b, c;
   printf("Enter three no. (a, b, c): ");
   scanf("%d%d%d",&a,&b,&c);
   
   if(a > b && a > c){
      printf("%d is largest\n",a);
   }
   else if(b > c && b > a){
      printf("%d is largest\n",b);
   }
   else{
         printf("%d is largest\n",c);
   }
   return 0;
}
