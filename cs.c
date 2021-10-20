#include <stdio.h>
int binarysearch(int arr[],int l,int r,int x){
while(l<=r){
    int m=l + (r-1)/2;
    if(arr[m] == x){
        return m;
    }
    else if(arr[m]<x){
l=m+1;
    }
    else{
        r=m-1;
    }
}


return -1;


} 
 int main (void)
 {
int arr []={2,4,6,10};
int n=arr/arr[0];
int x=10;
int result =binarysearch(arr,0,n-1,x);
(result==-1)? printf("element is not foumd""in array \n");

:printf("element is found at""index %d.\n,result");

return 0;

 }   