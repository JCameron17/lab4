#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
void add (int a, int b);
void subtract (int a, int b);
void multiply (int a, int b);
void divide (int a, int b);
void exitProg (int a, int b);

void add(int a, int b){ 
  printf("Adding 'a' and 'b' = %d\n", a+b);  
}
void subtract(int a, int b){ 
  printf("Subtracting 'a' and 'b' = %d\n", a-b);  
}
void multiply (int a, int b) { 
  printf("Multiplying 'a' and 'b' = %d\n", a*b);  
}
void divide (int a, int b) { 
  printf("Dividing 'a' and 'b' = %d\n", a/b);  
}
void exitProg (int a, int b) { 
  printf("Exiting program"); 
  exit(0); 
}


int main (void)
{
	/* IMPLEMENT ME: Insert your algorithm here */
  int a , b;
  int input;
  a = 6; //define a
  b = 3; //define b
  
  printf("Specify the operation to perform: (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit):");
  scanf("%d", &input);
  
  void (*func_ptr_arr[])(int,int) = {add, subtract, multiply, divide, exitProg};
  
//call operations using while loop until user inputs 4
  while (input != 4){
    for (int i = 0; i == input; i++){
      //call add function with values a & b
      (*func_ptr_arr[input])(a,b);
    }
    for (int i = 1; i == input; i++){
      //call subtract function with values a & b 
      (*func_ptr_arr[input])(a,b);
    }
    for (int i = 2; i == input; i++){
      //call multiply function with values a & b 
      (*func_ptr_arr[input])(a,b);
    }
    for (int i = 3; i == input; i++){
      //call divide function with values a & b
      (*func_ptr_arr[input])(a,b);
    }
    
    //Get next user input value
    printf("Specify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit):");
    scanf("%d", &input);
  }
  
  //Call the correlating function when user input == 4
  for (int i = 4; i == input; i++){
      //call ext_ptr function with values a & b from file
      (*func_ptr_arr[input])(a,b);
  }
  
	return 0;
}

