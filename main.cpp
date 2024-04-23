#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;
 
#define int long long
typedef vector<int> vi;
typedef vector<int>::iterator vit;
typedef pair<int,int> pi;
#define PB push_back
#define MP make_pair
#define F first
#define S second
 
#define case "Case "
#define semicollon ": "
#define endl '\n'
 
#define SQ(n) (n)*(n)
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
const double PI = acos(-1);
#define PI32 3.1415926535897932384626433832795028841971
#define MOD 1000000007

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define F0R(i, a) FOR(i, 0, a)
#define ROF(i, a, b) for (int i = (b)-1; i >= (a); --i)
 
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int ddx[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int ddy[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
int dx[] = { -1, 1, 0, 0 };
int dy[] = { 0, 0, -1, 1 };

//Debug
 
template < typename F, typename S >
ostream& operator << ( ostream& os, const pair< F, S > & p ) {
            return os << "(" << p.first << ", " << p.second << ")";
}
 
template < typename T >
ostream &operator << ( ostream & os, const vector< T > &v ) {
            os << "{";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << "}";
}
 
template < typename T >
ostream &operator << ( ostream & os, const set< T > &v ) {
            os << "[";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << "]";
}
 
template < typename T >
ostream &operator << ( ostream & os, const multiset< T > &v ) {
            os << "[";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << "]";
}
 
template < typename F, typename S >
ostream &operator << ( ostream & os, const map< F, S > &v ) {
            os << "[";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << it -> first << " = " << it -> second ;
                                            }
                    return os << "]";
}
 
#define dbg(args...) do {cerr << #args << " : "; alim(args); } while(0)
 
void alim () {
            cerr << endl;
}
 
template <typename T>
void alim( T a[], int n ) {
            for(int i = 0; i < n; ++i) cerr << a[i] << ' ';
                cerr << endl;
}
 
template <typename T, typename ... hello>
void alim( T arg, const hello &... rest) {
            cerr << arg << ' ';
                alim(rest...);
}
 
/*
--------------MAIN CODE---------
*/

struct Runtime {
    clock_t start;
    Runtime() {
        start = clock();
    }
    ~Runtime() {
        cout << "Runtime: " << fixed << setprecision(3) << (double) (clock() - start) / CLOCKS_PER_SEC << "s\n";
    }
};



int utin() { 
   

    int a; cin>>a;
    int arr[a*2];
    int sum = 0;
    for(int i =0; i<a*2; i++){
        cin>>arr[i];
    }
    for(int i =1; i<a*2; i += 2){
        int x = min(arr[i],arr[i-1]);
        sum += x;
    }

    cout<<sum<<endl;
    
    

    
    return 0;

}
int test_case;
int32_t main()
{
    // #ifndef ONLINE_JUDGE
    //     Runtime _;
    // #endif

    FastIO();
    
    cin>>test_case;
    // test_case = 1;
    while (test_case--)
    {
        utin();
    }
 
    return 0;
}