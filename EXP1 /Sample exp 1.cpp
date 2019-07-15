//program to determine character or not

#include<iostream>


using namespace std;

int main(){
    char str[20];
    int i=0;

    cout<<"Enter the string to be checked : ";
    cin>>str;

    cout<<"\n Entered string is :  "<<str<<endl;

    for(i=0;i<20;i++){
        if(str[i]=='\0')
            break;
        else{
            if(str[i]>47&&str[i]<58)
                cout<<"  "<<str[i]<<" ->  INTEGER \n";
            else
                cout<<"  "<<str[i]<<"  -> ALPHABET\n";
        }
    }
    cout<<"";

    return 0;
}
