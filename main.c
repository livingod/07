#include <stdio.h>
#include <stdlib.h>

void sub(void);

int main(int argc, char *argv[])
{
  int i;
  for(i=0;i<3;i++)
    sub();
     
  system("PAUSE");	
  return 0;
}


void sub(void)
{
     int auto_count = 0;//sub 영역에 메모리 들어감 
     static int static_count = 0;//data 영역에 메모리 들어감, 2번째 for문에서 초기화 됨 
     auto_count++;
     static_count++;
     
     printf("auto_count=%d\n",auto_count);
     printf("static_count=%d\n",static_count);
}
