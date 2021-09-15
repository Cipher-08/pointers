 /*By Saksham Awasthi*/
               
#include<bits/stdc++.h>
using namespace std;
               
               
#define ll 				long long int
#define ld				long double
#define mod             1000000007
#define inf             1e18
#define M_PI            3.14159265358979323846
#define pb 				push_back
#define vi              vector<ll>
#define vs				vector<string>
#define pii             pair<ll,ll>
#define ump				unordered_map
#define mp 				make_pair
#define pq_max          priority_queue<ll>
#define pq_min          priority_queue<ll,vi,greater<ll> >
#define all(n) 			n.begin(),n.end()
#define ff 				first
#define ss 				second
#define mid(l,r)        (l+(r-l)/2)
#define bitc(n) 		__builtin_popcount(n)
#define loop(i,a,b) 	for(int i=(a);i<=(b);i++)
#define looprev(i,a,b) 	for(int i=(a);i>=(b);i--)
#define iter(container, it) for(__typeof(container.begin()) it = container.begin(); it != container.end(); it++);
#define logarr(arr,a,b)	for(int z=(a);z<=(b);z++) cout<<(arr[z])<<endl;
 
 
const int N=1e5+2 ;
const int MOD =1e9+7;

void fun(int* arr){
    cout<<(arr)<<"\n";///this will send the adresss of the first index of the array
    cout << *(arr) << "\n";/////value of index 0
    cout << (arr+1) << "\n";/////+1 means increased with the size of variable that is increased to the second index
    cout << *(arr+1) << "\n";///dereferncing the arr[1];
    cout<<arr[2]<<"\n";
}        
               
signed main()
{
    // int arr[5]={1,34,6,7,75};
    // fun(arr);

    int* arr = new int[5];////first is the base index
    /////we are storing so the pointer would be int for the adress
    ///ans as we do it in simple pointer 
    /// int*arr=10;
    ////same as 
    //// int* arr = new int[]/////in heap 
    ////This will conatin the whole arr inside the first index thta is stored in the stack
    // but the whole array is in heap   

    ////here a is pointing to the first index tho

    arr[1]=10;
    arr[0]=20;
    delete arr;////will only delete the index for the first index not the whole array
    delete [] arr;

 
 
return 0;
}
