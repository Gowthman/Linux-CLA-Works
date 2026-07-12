//TO print all the Cla with index number
#include<stdio.h>
int main(int argc,char *argv[])
{
  for(int i=0;i<argc;i++)
  { 
   printf("Index%d:%s\n",i,argv[i]);
  }
return 0;
}
