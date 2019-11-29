#include<stdio.h>
#include<math.h>
#define N 100000
int main (void)
{
double f=0;
int i,j;
for(i=0;i<N;i++)
for(j=0;j<N;j++)
f+=(double)j*(double)i/(double)N;
printf("F=%.1f\n",floor(f+0.5));
return 0;
}