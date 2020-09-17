// Author: Brendan Corso bvc5434@psu.edu
// Collaborator:
// Collaborator:
// Collaborator:
// Section: 
// Breakout:

#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

int sum_n(int n){
  if (n == 0){
    return 0;
  }
  else{
    return n+sum_n(n-1);
  }
}

void print_n(const char *s, int n){
  if (n==0){
    return;
  }
  else{
    printf("%s\n",s);
    print_n(s, n - 1);
  }
}

int main(void) {
  char *iv = readline("Enter an int: ");
  int num = atof(iv);
  printf("sum is %d\n", sum_n(num));
  char *inputS = readline("Enter a string: ");
  print_n(inputS, num);
}