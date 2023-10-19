#include <stdio.h>
#include <stdlib.h>


int counter;

void set_counter()
{ 
     counter = 20;
}

int main(int argc, char *argv[])
{
  printf("counter = %d\n", counter);
  
  set_counter();
  
  printf("counter = %d\n", counter);
  
  system("PAUSE");	
  return 0;
}

//지역변수 말고~ 전역변수면~
//실습 3과 차이남요  
