#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	char op='+';
//	printf("Enter Operator=");
//	scanf("%d",&op);
//	int num1 =10 , num2=20 ;
//	printf("Enter two numbers=");
//	scanf("%d%d",&num1,num2);
////	
////	
////	switch(op){
////		case'*':
////			printf("The multiplacation result is %d",num1*num2);
//			break;
//		case '-':
//			printf("The subraction result is %d",num1-num2);
//		     break;
//		case  '+':
//			printf("The addition result is %d",num1+num2);
//		      break;
//		case  '/':
//			printf("The division result is %d",num1/num2);
//		      break;	  	 	
//	}



//==========================================================




// int percentage , total_percentage;
// printf("Enter your percentage");
// scanf("%d",&percentage);
// 
// total_percentage=(percentage/10);
// 
// switch(total_percentage){
// case 10:
// case 9:
// printf("A+");
// break;
//
// case 8:
// printf("A");
// break; 
// 
// case 7:
// printf("B"); 
// break;
// 
// default:
// 	printf("C");
// 	
// }
 
  
//========================================================== 
 
 
 
// float width , length ,area;
// 
// area=length*width;
// 
// if(length<0 || width<0){	
// printf("your valur is incrroct");	
// }
//else{
//	if(width==length){
//		printf("Your shape is square and your area is %.2f",area);
//	}
//	else{
//		printf("Your shape is rectangle and your area is %.2f",area);
//	}
//}


//==========================================================


   //**loops**
 
 //WHILE
 
//int count = 1;
//while(count<=10)
//{
//  // whlie code
//	printf("\n 2*%d=%d",count, 2*(count));
//
//  // ++ , --
//	count++;
//}


 //==================================================================================================


 
 // DO WHILE
 
// int count=0;
// do{
// 	
// 	//do code
// 	printf("\n Hello world");
// 	count++; 	
// 	
// while(count<=10){
//     printf("End of do while loop");
// }
  


 //==================================================================================================

//FOR LOOP



//int i ,j;
//for(i=1;i<=10;i++){
////	printf("%d-> *\n",i);
//	
//	i % 2 ==0 ? printf("\n*") : printf("\n+");
//}


































//question1:-

//int i;
//for(i=1;i<=10;i++){
//	printf("%d \n",i);
//}

//question2:-

//int i , sum=0;
//for(i=1;i<=10;i++){
//	sum=sum+i;	
//}
//	printf("%d\n",sum);



//question3:-

//int i , n, sum=0;
//printf("Enter the number");
//scanf("%d",&n);
//for(i=1;i<=n;i++){
//
//	sum=sum+i;
//}
//printf("The sum of natural number from %d is %d",n,sum);




//question4:-
//int i , n , sum=0 ;
//
//for(i=1;i<=10;i++){
//	printf("Enter your number");
//	scanf("%d",&n);
//	sum=sum+n;
//}
//printf("The sum of your 10 number are %d",sum);

//==============================================================


// int  i , num , mul;
// 
// printf("Enter a number:");
// scanf("%d", num);
//
// for(i=1;i<=num;i++){
// 	mul=(i*i*i);
// 	printf("The cube root of %d is %d", i , mul );
//}





 // question5
 
int i,num;
    printf("Enter  number  : ");
    scanf("%d", &num);
    for(i=1;i<=num;i++)
    {
	 printf("The cube of the %d is :%d \n",i, (i*i*i));     
    }




//
// int i,n;
//   printf("Input the number : ");
//   scanf("%d",&n);
//   printf("\n");
//   for(i=1;i<=10;i++)
//   {
//     printf("%d X %d = %d \n",n,i,n*i);
//   }

return 0;
}

