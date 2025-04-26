#include<stdio.h>
#define MAX_ITEMS 10
int knapsack(int w,int wt[],int val[],int n){
int i,j;
int v[MAX_ITEMS+1][w+1];
for(i=0;i<=n;i++){
for(j=0;j<=w;j++){
if(i==0||j==0){
v[i][j]=0;
}
else if(j-wt[i]<0){
v[i][j]=v[i-1][j];
}
else{
v[i][j]=MAX(v[i-1][j],val[i]+v[i-1][j-wt[i]]);
}}}
return v[n][w];
}
int MAX(int a,int b){
return (a>b)?a:b;
}
void main(){
int i,wt[MAX_ITEMS],val[MAX_ITEMS],w,n;

printf("enter the number of item\n");
scanf("%d",&n);
printf("enter the weight\n");
for(i=1;i<=n;i++){
scanf("%d",&wt[i]);
}
printf("enter the number of value\n");
for(i=1;i<=n;i++){
scanf("%d",&val[i]);}
printf("enter the max capacity\n");
scanf("%d",&w);
printf("maximum value %d",knapsack(w,wt,val,n));
}
