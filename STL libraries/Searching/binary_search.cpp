#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int k){
int start=0;
int end=size-1;

int mid=(start+end)/2;
while (start<=end)
{
if(arr[mid]==k){
    return k;
}
if(arr[mid]<k){
    start=mid+1;
}
else{
    end=mid-1;
}

mid=(start+end)/2;
}
return -1;

}


int main(){
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};

    int index=binarySearch(even,6,2);
    cout<<index<<endl;

    return 0;
}