#include <stdio.h>
#include <stdlib.h>

int main(void)

{
  int x,y,z,cont,stop;

  x=0;
  y=1;
  z=0;
 
  printf("Cuantos numeros deseas?: ");
  scanf("%d", &stop);

   if(stop==0 || stop==1){
  	printf("%d\n",x);
  }else if(stop==2){
  	printf("%d\n%d\n",x, y);
  }else{
  	printf("%d\n%d\n",x, y);
  	for (cont=0;cont<stop-2;cont++)
 	{
      z=x+y;
      printf("%d\n",z);
      x=y;
      y=z;
  	}
  getchar();
  }
  return 0;
} 