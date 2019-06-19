#include <stdio.h>

int n;
int k;
int A[100000];

int p(int m){
    int sum = 0;
    for(int j = 0;j < n;j++){
        sum += (A[j] + m - 1)/m;
    }
    return sum <= k;
}

int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }

  lb = 0;
  ub = A[n-1];
  while(ub - lb > 1){
      int m = (lb + ub)/2;
      if(p(m)){ub = m;}
      else lb = m;
  }
  printf("%d\n", ub);
  return 0;
}
