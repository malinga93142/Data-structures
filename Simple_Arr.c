#include<stdio.h>
#include<stdlib.h>
int *make_rot(int arr[],int rot_t,int size){
    int temp[size];
    int k=0;
    for(int i=rot_t;i<size;i++){
       temp[k]=arr[i];
        k++;
     }
    for(int i=0;i<rot_t;i++){
        temp[k]=arr[i];
        k++;
     }
    for(int i=0;i<size;i++){
        arr[i]=temp[i];
    }
    return arr;
 }
int main(){
    int arr[]={1,2,3,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    arr=make_rot(arr,2,size);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}


