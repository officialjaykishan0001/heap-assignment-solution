#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//********************Heapify into min heap function***************************
void heapify(vector<int> &heap,int &size,int curr)
{
    while(2*curr <= size)
    {
        int leftchild = 2*curr ;
        int rightchild = 2*curr + 1;

        int minchild = leftchild;

        if(rightchild <- size && heap[rightchild] < heap[minchild])
        {
            minchild = rightchild;

        }

        if(heap[curr] <= heap[minchild])
        {
            return ;
        }

        swap(heap[curr],heap[minchild]);
        curr = minchild;
    }
    return ;
}

void remove(vector<int> &heap,int &size)
{
    swap(heap[1],heap[size]);
    size--;
    heapify(heap,size,1);
    return ;


}
//*********************Sort using min heap Function***********************
void sortUsingMinHeap(vector<int> &heap,int size)
{
    //1.heapify heap into the min heap.
    for(int i = size/2 ;i>0;i--)
    {
        heapify(heap,size,i);
    }

    //2.removing and geting the sorted array in the second part of the same array;.
    while(size>1)
    {
        remove(heap,size);
    }
    return ;
}


//*******************************Main Function*****************************
int main()
{
    vector<int> v = {-1,5,3,10,1};
    int size = v.size() -1;


     sortUsingMinHeap(v,size);

    for(int i = 1;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
    
}//Jai Jai Jai bajarngbali....