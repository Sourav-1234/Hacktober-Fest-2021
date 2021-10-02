#include <iostream>
using namespace std;

long long merge(long long  A[] , int left ,int mid ,int right)
{
    int i=left ,j=mid;
    int k=0;
    long long count=0;
    int temp[right-left +1];
    
    while((i<mid ) && (j<=right))
    {
        if(A[i]<=A[j])
        {
            temp[k++]=A[i++];
            
        }
        else
        {
            temp[k++]=A[j++];
            
            count+=mid-i;
        }

    }
    while(i<mid)
    {
        temp[k++]=A[i++];
        
    }
    while(j<=right)
    {
        temp[k++]=A[j++];
        
    }
    for(int i=left,k=0 ;i<=right;i++,k++)
    {
        A[i]=temp[k];
        
    }
    return count;
}




long long   merge_sort(long long  A[], int left ,int right)
{
    int count=0;
    if(left<right)
    {
      long long mid=(left+right)/2;
       long long countleft = merge_sort(A,left,mid);
       long long countright=merge_sort(A,mid+1,right);
       long long merg1= merge(A,left,mid+1,right);
       return countleft+countright+merg1;
    }
    
    return count;
}



long long solve(long long  A[], int n)
{
	long long ans =merge_sort(A,0,n-1);
    return ans;// Write your code here.
}



int main()
{
    int n=5;
   

    long long arr[] = {2,6,1,3,4};
  

   

    cout <<solve(arr, n);

  
}

