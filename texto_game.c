#include <windows.h>
#include <stdio.h>
#include <stdlib.h>


int main()

{
char nome[]="testando o game";

int i,k=0,y;

for(i=0; nome[i]!=NULL; i++)

{printf("%c", nome[i]);

usleep(100000);}

return 0;
}