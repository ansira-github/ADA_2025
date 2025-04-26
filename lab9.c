#include<stdio.h>
#define MAX_ITEMS 100
double ComputeMaxValue(double w,double weight[],double value[],double ratio[],int nitems){
double cw=0;
double cv=0;
printf("\n items considered are:");
while(cw<w){
int item=getNextItem(weight,value,ratio,nitems);
if(item==-1){
break;
}
printf("%d ",item+1);
if(cw+weight[item]<=w){
cw+=weight[item];
cv+=value[item];
ratio[item]=0;
}
else{
cv+=(ratio[item]*(w-cw));
cw+=(w-cw);
break;}}
return cv;
}
int getNextItem(double weight[],double value[],double ratio[],int nitems){
double highest=0;
int i;
int index=-1;
for( i=0;i<nitems;i++){
if(ratio[i]>highest){
highest=ratio[i];
index=i;
}}
return index;
}
int main(){
int i,nitems;
double w;
double weight[MAX_ITEMS];
double value[MAX_ITEMS];
double ratio[MAX_ITEMS];
printf("enter the number of items:\n");
scanf("%d",&nitems);
printf("enter the weight:\n");
for( i=0;i<nitems;i++){
scanf("%lf",&weight[i]);
}
printf("enter the value/profit:\n");
for( i=0;i<nitems;i++){
scanf("%lf",&value[i]);}
for( i=0;i<nitems;i++){
ratio[i]=value[i]/weight[i];
}
printf("enter the capacity of the knapsack:\n");
scanf("%lf",&w);
printf("\n the maximum value in a knapsack of capacity %0.2f is :%0.2f\n",w,ComputeMaxValue (w, weight,value,ratio,nitems));
return 0;
}



