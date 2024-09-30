// #include<stdio.h>
// #include<conio.h>
// void main(){
// int i=1,j=0;
// for (   ; i <5; i++)
// {
//     printf("%d=%d\n",i,j); 
// }
// printf("\n");
// }



// #include<stdio.h>
// #include<conio.h>
// void main(){
// int i,j;
// for (i=1,j=0 ; ; i++)           /*when we not apply the expression, It will give the infinite output*/
// {
//     printf("%d=%d\n",i,j); 
// }
// }


// #include<stdio.h>
// #include<conio.h>
// void main(){
// int i,j;
// for (i=1,j=0;i <5,j<3; i++)         /*when we  apply the two expression, It will give the infinite output*/
// {
//     printf("%d=%d\n",i,j); 
// }
// printf("\n");
// }



// #include<stdio.h>
// #include<conio.h>
// void main(){
// int i,j;
// for (i=1,j=0;i<100,j<3; i++,j++)         /*CHECK THIS PAYRA YOU WILL UNDERSTAND*/
// {
//     printf("%d=%d\n",i,j); 
// }
// printf("\n");
// }



// #include<stdio.h>
// #include<conio.h>
// void main(){
// int i,j;
// for (i=1,j=0;i<100 || j<3; i++,j++)         /*OR FUNCTION*/
// {
//     printf("%d=%d\n",i,j); 
// }
// printf("\n");
// }


// #include<stdio.h>
// #include<conio.h>
// void main(){
// int i,j;
// for (i=1,j=0;i<100 && j<3; i++,j++)         /*AND FUNCTION*/
// {
//     printf("%d=%d\n",i,j); 
// }
// printf("\n");
// }



// #include<stdio.h>
// #include<conio.h>
// void main(){
// int i,j;
// for (i=1,j=0;i<100,j<3; )         /*infinite*/
// {
//     printf("%d=%d\n",i,j); 
//     i++;
// }
// printf("\n");
// }


// #include<stdio.h>
// #include<conio.h>
// void main(){
// int i,j;
// for (i=1,j=0;i<5,j<6;j++ )         /**/
// {
//     printf("%d=%d\n",i,j); 
//     i++;
// }
// printf("\n");
// }



#include<stdio.h>
#include<conio.h>
void main(){
int i,j,k;
for (i=1,j=0,k=3;i<5,j<6,k>1;j++ )         /*infinite output*/
{
    printf("%d=%d=%d\n",i,j,k); 
    i++;
}
printf("\n");
}