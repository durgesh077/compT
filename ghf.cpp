#include <bits/stdc++.h>
using namespace std;
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace  std;
using namespace __gnu_pbds;
template<class obj> using pbds=tree<obj ,null_type,less<obj>,rb_tree_tag,tree_order_statistics_node_update> ;
template<class T> struct ps:pbds<T>{ps():pbds<T>(){}T operator[](int k){return  *this->find_by_order(k);}};
#define endl '\n'
#define ll long long
#define vi vector<int>
#define vvi vector < vi >
#define pii pair<int,int>
#define mod 1000000007
#define inf 0x3f3f3f3f
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define pb push_back
#define f first
#define s second
#define fr(x,to) for(int x=0;x<to;x++)
#define frg(x,to) for(int x=1;x<=to;x++)
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
template<typename T>istream& operator>>(istream& is,vector<T>&v)
{for(auto &it:v)is>>it;return is;}
istream& operator>>(istream& is,pair<int,int>&pr)
{is>>pr.first>>pr.second;return is;}
template<typename T>ostream& operator<<(ostream& os,vector<T>&v)
{for(auto it:v)os<<it<<" ";os<<endl;return os;}
ostream& operator<<(ostream& os,pair<int,int> pr)
{os<<'('<<pr.first<<","<<pr.second<<") ";return os;}
template<typename T=int>inline T input(T a=0){cin>>a;return a;}
struct PRT{
template<typename T=int>inline PRT operator()(T a=0,string str=" ")
{cout<<a<<str;return *this;}}print;
template<typename T,typename F>
auto operator<<(T &col,F f)->vector<decltype(f(*col.begin()))>
{vector<decltype(f(*col.begin()))> temp;for(auto &it:col)temp.pb(f(it));return temp;}
template<typename T,typename F>
auto mapper(initializer_list<T>col,F f)->vector<decltype(f(*col.begin()))>
{vector<decltype(f(*col.begin()))> temp;for(auto &it:col)temp.pb(f(it));return temp;}
template<typename T,typename F>
auto mapper(T col,F f)->vector<decltype(f(*col.begin()))>
{vector<decltype(f(*col.begin()))> temp;for(auto &it:col)temp.pb(f(it));return temp;}
int32_t main()
{
    #ifndef ONLINE_JUDGE
    freopen("C:\\Programs\\in.txt","r",stdin);
    //freopen("C:\\Programs\\out.txt","w",stdout);
    #endif
    IOS;
    int T=1,t=0;
    cin>>T;
    ntc:while(t<T)
    {
      int n,k;
      cin>>n>>k;
      string str;
      cin>>str;
      int cnt=0;
      for(int i=0;i<(n/2);i++)
      {
         cnt+=str[i]!=str[n-i-1];
      }
      cout<<"Case #"<<++t<<": "<<abs(k-cnt)<<endl;
    }
    return 0;
}
