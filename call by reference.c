#include <stdio.h>

void update(int *a,int *b) {
  int c=*a,d=*b;
  int h=c+d,j;
  if(d>c)
  j=d-c;
  else 
  j=c-d;
  *a=h;
  *b=j;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

