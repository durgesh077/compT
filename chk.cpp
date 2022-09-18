	#include <bits/stdc++.h>
	#define ll long long int
	#define vi vector<int>
	#define vvi vector < vi >
	#define pii pair<int,int>
	#define mod 1000000007
	#define inf 1000000000000000001;
	#define all(c) c.begin(),c.end()
	#define mp(x,y) make_pair(x,y)
	#define mem(a,val) memset(a,val,sizeof(a))
	#define eb push_back
    #define pb push_back
	#define f first
	#define s second
	using namespace std;
	struct query
	{
		int x1,x2,y;
		void input()
		{
			cin>>x1>>x2;
		}
	};
	int main()
	{
		std::ios::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);
		int T;
		cin>>T;
		while(T--)
		{
	     int n,m,k,q;
	     cin>>n>>m>>k>>q;
         query qu[q+1];
         for (int i = 0; i < q; ++i)
         {
         	qu[i].input();
         }
         
         if(k<10)
         {
         	cout<<2<<" ";
         for (int i = 0; i < q; ++i)
         {
         	cout<<m-1<<" ";
         }
        }
        else
        {
        	int arr[10];
        	for (int i = 0; i < 10; ++i)
        	{
        		cout<<"1 ";
        		cout<<qu[i].x1<<' '<<qu[i].x2<<" "<<m/2;
        		cin>>arr[i];
        	}
        	cout<<2<<" ";
        	for (int i = 0; i < 10; ++i)
        	{
        		cout<<arr[i]<<" ";
        	}
        }
          cout<<endl;
          int a;
          cin>>a;
  		}
  			return 0;
	}
