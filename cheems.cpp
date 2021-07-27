#include<bits/stdc++.h>

#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    #ifdef OJ
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    #endif
    string a;
    getline(cin,a);
    stringstream s(a);
    string w;
    int r=0,c=0;
    while(s>>w)
    {
        c++;
       if(w=="amdd")
        {
            r=1;
            break;
        }
        else if(w=="mumltimply")
        {
            r=2;
            break;
        }
        else if(w=="dimvimde")
        {
            r=3;
            break;
        }
        else if(w=="primt")
        {
            r=4;
            break;
        }
        else if(w=="sumbramct")
        {
            r=5;
            break;
        }
        else if(w!="plox")
        {
            cout<<"plox gib promper symtax ;-;\n";
            cout<<w<<" is not a tomken in cheems";
            return 0;
        }
        else if(c==1 && w!="plox")
        {
            cout<<"plox use plox commamnd\n";
            return 0;
        }
    }
    double res=0;
    auto add = [&](){
        stringstream p;
    regex regex_pattern("-?[0-9]+.?[0-9]+");
    try{
    do
    {
        s>>w;
        cout<<w<<'\n';
        if(s)
        res+=stod(w);
    }while(!regex_match(w,regex_pattern) && s);
    }
    catch(exception e)
    {
        cerr<<"plox amdd numbmers omnly"<<'\n';
    }
    return res;//stod(w);
    };
    if(r==1)
    {
        cout<<add();
    }
    return 0;
}
