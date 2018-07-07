#include <stdio.h>
#include <stdlib.h>

#define ROLLING_TIME 2

int rollingDice(){
  return rand()%6+1;
}

int main(){
  int n,i;
  int num;

  printf("Rolling the dice...\n" );
  printf("Please push Enter key\n" );
  scanf("%d",&n);

  for (i = 0; i < ROLLING_TIME; i++) {
    printf("Die%d: %d\n",i+1, rollingDice());
  }
  return 0;
}
