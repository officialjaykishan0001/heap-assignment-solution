#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//*************************Heapify Function************************
//Heapify the heap into min heap on the basis  given property 
void heapify(vector<int> &heap,int size,int curr)
{
    while(2*curr + 1 < size)
    {
        int leftchild = 2*curr + 1;
        int rightchild = 2*curr +2;

        int minchild = leftchild;

        if(rightchild < size && heap[rightchild] < heap[minchild])
        {
            minchild = rightchild ;

        }

        
        if(heap[curr]< heap[minchild]) {
            if(heap[leftchild] > heap[rightchild])
        {
            swap(heap[leftchild],heap[rightchild]);

        }
            return ;
        }
    
        swap(heap[curr],heap[minchild]);
        if(heap[leftchild] > heap[rightchild])
        {
            swap(heap[leftchild],heap[rightchild]);

        }curr  = minchild;

    }
    return ;
}
//***********************Helper Function*******************************
void helper(vector<int> &v,int size)
{
    //1.heapify the vector on the given property.
    for(int i = size/2 -1;i>=0;i--)
    {
        heapify(v,size,i);
    }
    return; 

}

//*********************Main Function*********************
int main()
{//{4,2,1,3,6,5,7};
    //let's suppose the below given vector is the prorder traversal of the given BST.
    vector<int> v = {40,7,3,14,8,5,10};

    int size = v.size();

    helper(v,size);

    for(int i = 0;i< v.size() ;i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}//Jai Jai Jai Bajarangbali...