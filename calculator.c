#include <stdio.h>
int main(){
    
    int num1, num2,choice;
    printf("Enter the frist number :");
    scanf("%d",&num1);
    printf("Enter the second number :");
    scanf("%d",&num2);
    printf("");
    printf("Press 1 for adition\nPress 2 for subtraction\nPress 3 for multiplication\nPress 4 for division\nPress 5 for modulus\n");
    printf("Enter the choice : ");
    scanf("%d",&choice);
    
    if(choice == 1){
    	int result = num1+num2;
    	printf("The sum is : %d",result);
	 }
	 else if(choice ==2){
	 	int result = num1-num2;
	 	printf("The subtraction is : %d",result);
	 }
	 else if(choice ==3){
	 	int result = num1*num2;
	 	printf("The multiplication is : %d",result);
	 }
	 else if(choice == 4){
	      	if(num2!=0){
	         	int result = num1/num2;
	 	         printf("The division is :%d",result);
	       }
	         else{
	 	            printf("Can not divide by zero");
	       }
	 }
	 else if (choice ==5){
	 	int result = num1%num2;
	 	printf("The mod is :%d");
	 }
	 else{
	 	printf("Enter the valid inputs and try again..");
	 }
	 
    return 0;
}
