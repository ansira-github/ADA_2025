#include<stdio.h>
#include<time.h>
#include<stdio.h>
void swap(int *a,int *b){
int temp=*a;
*a=*b;
*b=temp;
}
int partition(int arr[],int low,int high){
int pivot=arr[low];
int i=low+1;
int j=high;
while(i<=j){
while(i<=high&&arr[i]<=pivot)
i++;
while(arr[j]>pivot)
j--;
if(i<j)
swap(&arr[i],&arr[j]);}
swap(&arr[low],&arr[j]);
return j;
}
void quicksort(int arr[],int low,int high){
if(low<high){
int pivotIndex=partition(arr,low,high);
quicksort(arr,low,pivotIndex-1);
quicksort(arr,pivotIndex+1,high);

}}
int main(){
int i,n;
printf("enter the no of elements\n");
scanf("%d",&n);
int arr[n];
srand(time(NULL));
for(i=0;i<n;i++){
arr[i]=rand()%5000000;}
clock_t start=clock();
quicksort(arr,0,n-1);
clock_t end=clock();
double timetaken=((double)(end-start))/CLOCKS_PER_SEC;
printf("time taken for sorting %d elements in %lf sec",n,timetaken);
/*for(i=0;i<n;i++){
printf("%d ",arr[i]);
}*/
return 0;
}
