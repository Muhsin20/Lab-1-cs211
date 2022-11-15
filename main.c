#include <stdio.h> //get to know you code
// basic code includes standard input, output parameters, main and return 0 with a header at the top.
// tutorial program using all the functions that shows it's basic functionality prompting the user some questions

// function that prints the age of the user when they graduate from the university
void graduationAge(int *age){
printf("%d \n",*age+3);
}
int main(void) {
  int age;
  int *pointer=&age;
  char fletter;
  int future;
  int *aPointer=&future;
  int value=5;
  int *somePointer=&value;
  
  printf("This is how to reference   %d\n",&somePointer );
  printf("This is how to dereference %d\n",*somePointer );

  printf("Hello! Welcome to CS 211\n");
  printf("Let us get to know each other!!\n");
  
  printf("What is the first character of your name?\n");
  scanf("%chr",&fletter); //implementing character through &
  printf("ACSII values are characters with incoded values.. the ASCII value for your name's first letter is "); 
  printf("%d\n",&fletter);
  
  printf("How old are you?\n");
  scanf("%d",&age); //implementing integer through &
  printf("Assuming you are a sophmore, you will graduate in... ");
  graduationAge(&age); //implements void function through &
  
  printf("How well are you prepared for this class? (0-5)\n");
  scanf("%d", &future); //userinput for scale question
  if(future == 0){ //if future is 0 it will output 'Think about your future'
    printf("Think about your future!\n");
    aPointer = NULL;
  }
  else{ // if future is 1-5 it will print 'That sounds wonderful'
    printf("That sounds wonderful!\n");
  }
  return 0;
}