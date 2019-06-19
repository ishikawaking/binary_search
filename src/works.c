#include <stdio.h>
//問4
int n;
int k;
int A[100000];

int p(int m){
    int sum = 0;//最大の仕事量がmの時に必要な人数
    int amount = 0;//ある時点での仕事量
    for(int j = 0;j < n;j++){
        if(A[j] > m){return 0;}
        else if(amount + A[j] > m){
            sum += 1;
            amount = A[j];
        }else{amount += A[j];}
    }
    sum += 1;
    return sum <= k;
}

int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
    lb = 0;
    ub = 10000;
    while(ub - lb > 1){
        int m = (lb + ub)/2;
        if(p(m)){ub = m;}
        else lb = m;
    }
    printf("%d\n", ub);
  return 0;
}
