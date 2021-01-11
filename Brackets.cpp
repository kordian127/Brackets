#include<iostream>
#include<string>
using namespace std;

int main(){
    int k1,k2,w1,w2,o1,o2;
    int a[6]={0,0,0,0,0,0};
    size_t found;
    string s="[{}{()}]";
    for(int i=0;i<s.size();i++){
        switch (s[i]){
    case '{':
        found=s.find("}");
        if(found!=string::npos){
            s[found]=0;
        }
        break;
    case '[':
        found=s.find("]");
        if(found!=string::npos){
            s[found]=0;
        }
        break;
    case '(':
        found=s.find(")");
        if(found!=string::npos){
            s[found]=0;
        }
        break;
    case '}':
        cout<<"error";
        return 0;
        break;
    case ']':
        cout<<"error";
        return 0;
        break;
    case ')':
        cout<<"error";
        return 0;
        break;
    default:
        break;
    }
    }


cout<<"fine";
return 1;
}
