
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,flag=1,k;
    cin>>s;
    int l = s.size();
    if((s[0]>='a' && s[0]<='z')||(s[0]>='A' && s[0]<='Z')||(s[0]=='_'))
    {
        for(i=1; i<l; i++)
        {
            if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z')||(s[i]>='0' && s[i]<='9')||(s[i]=='_'))
            {
                flag++;
            }

        }
        if(flag==l)
        {cout<<"Valid"<<endl;
        return 0;
        }
    }


    else cout<<"Invalid"<<endl;
    return 0;

}
