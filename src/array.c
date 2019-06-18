#include <stdio.h>

int n;
int k;
int A[100000];


int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  int ld = -1;
  int ud = n;
  while(ud-ld > 1){
    int m = (ld+ud)/2;
    if(A[m] >= k){ud = m;}
    else ld = m;
  }
  printf("%d\n", ud);
  return 0;
}
