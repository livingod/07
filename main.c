#include <stdio.h>
#include <stdlib.h>

int inc(int counter)
{
    counter++;
    return counter;
}

int main(int argc, char *argv[])
{
  int i = 10;
  printf("hamsoo hochul jeon i=%d\n",i);
  
  i = inc(i);//oh wow~
  printf("hamsoo hochul hu i=%d\n",i);
  
  system("PAUSE");	
  return 0;
}

//call by vlaue !!!!!!!!!!!!!!!!!!t
