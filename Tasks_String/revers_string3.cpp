#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;

int main()
{
    char str1[]="Mostafa kamal";
    int len=strlen(str1);
    cout<<"Length of string = "<<len<<endl;

    char str2[30];
    int i,j;
    for(j=0,i=len-1;i>=0;i--,j++)
    {
        str2[j]=str1[i];
    }
    str2[j]='\0';
    cout<<"str1= "<<str1<<endl;
    cout<<"str2= "<<str2<<endl;

}
