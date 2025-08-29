#include <stdio.h>
#include <stdlib.h>

int main() {
long n;
long *p;

scanf("%d", &n);
p= (long*) malloc(n * sizeof(long));

for (long i = 0; i < n; i++)
    scanf("%ld", p + i);

for (long i = n -1; i >= 0; i--)
    printf("%ld ", *(p + i));


free(p);
return 0;    
}
