#include<stdio.h>
int main(){
  int i,j,s,n=5;
  for(i=0;i<n;i++){
    
    for(j=1;j<=i+1;j++){
      printf("*");
    }
    printf("\n");
  }
  return 0;
}