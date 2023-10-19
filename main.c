#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i;
  int temp = 1;
  
  for(i=0;i<5;i++)//5beon dol a~ 
  {
    //static int temp = 1
    printf("temp = %d\n",temp);
    temp++;
}

  system("PAUSE");	
  return 0;
}
