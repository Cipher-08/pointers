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


void fun(int x){cout<<x<<endl;}
               
signed main()
{
    // int* p = new int;////new returns the pointer 
    // *p= 9;
    // cout<<*p<<endl;
    // delete p;
    // *p=NULL;
    // cout << *p << endl; ////Now its a dangling pointer
    // int* wild////wild pointer

     void(*fpr)(int)=fun;
    (*fpr)(10);

    return 0;
}
