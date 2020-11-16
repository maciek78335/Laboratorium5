#include<stdio.h>
#include<sys/types.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>

float power(float x, float y)
{
float res = 1;
for(int i=1; i<=y; i++)
{
res *=x;
}
return res;
}


int main(){
int r,p,n;
float pi, sum;
printf("Podaj p: ");
scanf("%d", &p);
r = fork();
srand(time(NULL));

if(r == 0)
{
   for(int i = 0; i<=p; i++){
	n = rand()%5000+100;
	for(int j=1; j<=n; j++)
	{
		sum += power(-1,j-1)/(2*j-1);
	}
	pi = 4*sum;
	printf("%f", pi);
   }
}
else
{
   for(int i = 0; i<=p; i++){
	n = rand()%5000 + 100;
        for(int j=1; j<=n; j++)
        { 
                sum += power((-1),(j-1))/(2*j-1);
        } 
        pi = 4*sum;
	printf("%f", pi);
   }
}
return 0;
}
