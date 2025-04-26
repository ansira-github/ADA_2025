#include<stdio.h>
#include<time.h>
void main(){
int i,j,min,temp,n;
printf("enter the element");
scanf("%d",&n);
int a[n];
srand(time(NULL));
for(i=0;i<n;i++)
a[i]=rand()%1000;

clock_t start=clock();
for(i=0;i<n-1;i++){
min=i;

for(j=i+1;j<n;j++){
if(a[j]<a[min])
min=j;

}
temp=a[min];
a[min]=a[i];
a[i]=temp;
}
clock_t end=clock();
double timetaken=((double)(end-start))/CLOCKS_PER_SEC;
printf("time taken ");
printf("%f",timetaken);

}