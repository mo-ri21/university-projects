#include<stdio.h>

int sumAtoB(int a,int b){

  int i,sum=0;

  for(i=a;i<=b;i++){
    sum=sum+i;
  }

  return sum;

}

int main(void){
  int start,end,wa;

  printf("開始値を入力して下さい:");
  scanf("%d",&start);
  printf("終了値を入力して下さい:");
  scanf("%d",&end);

  wa=sumAtoB(start,end);

  printf("%dから%dまでの合計は%dです。\n",start,end,wa);

  return 0;

}

