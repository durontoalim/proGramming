#include <bits/stdc++.h>

using namespace std;

const double pi = 2 * acos(0.0);

int main()
{
    int T,x,y,z,i=1,sum=0,sum2,sum_store;

    cin>>T;
    while(T--){
        cin>>x>>y>>z;
        int a = x*y;
        sum = a;
        double result = (pi*x*x)+(pi*a*a);
        for(int i=0; ; i++){
            sum /= z;
            if(sum == 0){
                break;
            }
            sum_store = sum;
            sum = sum*sum;
            result += ((pi*sum_store*sum_store)+(pi*sum*sum));
        }
        
        cout<<fixed<<setprecision(6)<<"Case #"<<i<<": "<<result<<endl;
        result = 0;
        sum = 0;
        i++;
    }
}