//To print thr first cla only
#include<stdio.h>
int main(int argc,char *argv[])
{
 if(argc > 1)
  {
   printf("First argument:%s\n",argv[1]);
  }
 else
  {
  printf("No argument provided\n");
  }
 return 0;
}
