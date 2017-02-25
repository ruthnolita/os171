/*
  * Name: Ruth Nolita Putri Sari
  * NPM: 1606955006
  * Class: SI Ekstensi 2016
  * Comment: Loop program
  */
  
#define LOOP 4  
#include <stdio.h>
  
void main() {
    int input = 5;
    int i, output;  
    for(i=1; i<=LOOP; i++){
	output += input;
    }
    printf("%d times %d equals %d\n",input,LOOP,output);
}
