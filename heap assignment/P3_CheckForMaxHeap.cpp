#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//********************Check for maxheap Function****************************
bool CheckForMaxHeap(vector<int> &heap,int &size,int curr)
{
    int leftchild = 2*curr + 1;
    int rightchild = 2*curr +2;

    int maxchild = leftchild;

    if(rightchild < size && heap[maxchild] < heap[rightchild])
    {
        maxchild = rightchild;

    }

    return heap[curr] > heap[maxchild];
}

int main()
{
    vector<int> v = {90,15,10,7,12,2,7,3};

    int size = v.size();

    for(int i = size/2 -1;i>=0;i--)
    {
        if(CheckForMaxHeap(v,size,i)==0)
        {
            cout<<"No , it is not a maxheap.."<<endl;
            return 0;
        }

    }

    cout<<"Yes, It is a maxheap.."<<endl;
    return  0;
}