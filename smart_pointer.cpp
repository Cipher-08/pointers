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

class tep{
    public:
    int data ;
    tep(){
        cout<<"Constructor called\n";
    }
    ~tep(){
        cout<<"Destructor called\n";
    }
};
               
signed main()
{
    // unique_ptr<int> ptr(new int(101));
    // //  unique_ptr<int> pr1 = ptr is not possible because it only stores unique .ters
    // cout<<*ptr<<"\n";
    // unique_ptr<int> p1 = make_unique<int>(1001);
    // cout<<*p1<<"\n";
    // tep* ptr = new tep();//// noraml pointer
    // delete ptr;
    unique_ptr<tep> pr(new tep());

    ////shared pointer
    shared_ptr<int> s1(new int(101));
    shared_ptr<int> s2 =s1;
    shared_ptr<int> s3= s1;

    cout<<s1.use_count()<<"\n";////counts the number of pointer pointing to its adress
    cout<<*s2<<"\n";
    cout<<*s1<<"\n";
    s1.reset();
    s2.reset();
    s3.reset();

    weak_ptr<int> w;

    cout<<w.expired();
 
return 0;
}
