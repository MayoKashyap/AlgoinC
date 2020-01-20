#include<stdio.h>
 float computeBalance (float loan, float interestrate, float monthlyPayment){
    
    float monthlyInterestPayment = (loan * interestrate * .01)/12;
    float principal = monthlyPayment - monthlyInterestPayment;
    float balanceAmount = loan - principal; 
    return balanceAmount;
 }
 int main(void){
    float loan = 0; 
    float interestrate= 0;  
    float  monthly = 0; 
    printf( "Enter amount of loan m8: ");
    scanf("%f", &loan);
    printf("Enter the interest rate please: ");
    scanf("%f", &interestrate);
    printf("Enter Monthly Payment: ");
    scanf("%f", &monthly);
     for(int counter = 0; counter < 3; counter ++){
        float newbalance = computeBalance(loan, interestrate, monthly);
        loan = newbalance;
        if(counter == 0){
        printf("Balance after first statement: ");
        printf("%.2f\n", newbalance);
        }

        if(counter == 1){
           printf("Balance remaining after second payment: ");
           printf("%.2f\n", newbalance);
        }  
        else if(counter == 2){
            printf("Balance remaining after Third payment: ") ;
           printf("%.2f\n", newbalance);
        }
      
  }

}