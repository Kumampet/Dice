#include <stdio.h>
#include <stdlib.h>

#define ROLLING_TIME 2

int rollingDice(){
  return (rand()%6+1);
}

int main(){
  int i;
  char name[10];
  int num=0;

  printf("Rolling the dice...\n" );
  printf("Please enter your name.\n>" );
  scanf("%s",name);
  printf("Hello, %s!!\n",name);

  for (i = 0; i < ROLLING_TIME; i++) {
    num += rollingDice();
  }
  printf("Sum: %d\n",num );
  if (num>7) {
    printf("Your win!\n" );
  }else printf("Your Lose\n" );
  return 0;
}
