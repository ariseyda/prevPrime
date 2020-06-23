#include<stdio.h>

//Write the function prevPrime that receives an integer and returns the largest prime number that is smaller than the entered integer. 
//If there is not a prime number that is smaller than the entered integer, the function should return 0. 
//Use the function in a program that receives an integer from user and displays the prime numbers smaller than the entered integer. 

int main(){
	
    int b,i,j;
    int count=0;
	
	printf("Please enter an integer:");
	scanf("%d",&b);
	
    int a=b-1;
    while(a>1){
    	for(i=2;i<a;i++){
    		if(a%i==0){
    			a--;
			}
			
		}
		printf("%d\n",a);
		a--;
	}
	
	if(prevPrime(b)==0){
		printf("%d",prevPrime(b));
	}
	else{
		printf("Prev prime:%d",prevPrime(b));
	}

	
	
	return 0;
}

int prevPrime(int n){
	
		
  int count=0;
  int a=n-1;
  int i,j;
  
  if(n==2){
  	return 0;
  }
  for(i=2;i<a;i++){
  	if(a%i==0){
  		count++;
  		a--;
	  }
	else{
		continue;
	}
  }
  if(count==0){
  	return a;
  }
	
	
  
	
	
	
}
