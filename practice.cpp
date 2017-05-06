#include<iostream>
#include<fstream>
#include<map>
#include<stdio.h>
#include<vector>
#include<stdlib.h>
#include<sstream>
#include<set>
#include<iomanip>
using namespace std;

char* str_convert(string s)
{
    char *ch=new char[s.size()+1];
    int i;
    for(i=0;i<s.size();i++)
    {
        ch[i]=s[i];
        //cout<<ch[i]<<endl;
    }
    ch[i]='\0';

    return ch;
}

int main(){
    string s="0x000c";
    char *p=str_convert(s);
    int dec;
    sscanf(p,"%x",&dec);
    cout<<dec+1;
    return 0;
}
