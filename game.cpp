#include<iostream>
#include<string>
using namespace std;

class display{

int j;
char a=49,b=50,c=51,d=52,e=53,f=54,g=55,h=56,i=57;
char lcorner_top = 201,h_line= 205, mid_t=203,rcorner_top=187; //lcorner is left corner, rcorner is right
char v_line=186,lcorner_b =200 , rcorner_b =188, pluss=206,mid_l=204,mid_r=185,mid_b= 202;  // lcorner_b is left corner bottom

public:
    void outline(){

        // topmost line of box
        cout<<lcorner_top<<h_line<<h_line<<h_line<<h_line<<mid_t<<h_line<<h_line<<h_line<<h_line
            <<mid_t<<h_line<<h_line<<h_line<<h_line<<rcorner_top<<endl;

        //vertical line between line 1 and 2
        cout<<v_line<<"  "<<a<<" "<<v_line<<"  "<<b<<" "<<v_line<<"  "<<c<<" "<<v_line<<endl;

        //line2
        cout<<mid_l<<h_line<<h_line<<h_line<<h_line<<pluss<<h_line<<h_line<<h_line<<h_line
            <<pluss<<h_line<<h_line<<h_line<<h_line<<mid_r<<endl;

        //vertical line between line 2 and 3
        cout<<v_line<<"  "<<d<<" "<<v_line<<"  "<<e<<" "<<v_line<<"  "<<f<<" "<<v_line<<endl;

         //line3
        cout<<mid_l<<h_line<<h_line<<h_line<<h_line<<pluss<<h_line<<h_line<<h_line<<h_line
            <<pluss<<h_line<<h_line<<h_line<<h_line<<mid_r<<endl;

        //vertical line between line 3 and 4
        cout<<v_line<<"  "<<g<<" "<<v_line<<"  "<<h<<" "<<v_line<<"  "<<i<<" "<<v_line<<endl;

        //bottom most line
        cout<<lcorner_b<<h_line<<h_line<<h_line<<h_line<<mid_b<<h_line<<h_line<<h_line<<h_line
            <<mid_b<<h_line<<h_line<<h_line<<h_line<<rcorner_b;
}
// fill data
int filldata(int j,int k){
int temp=0;
switch(j){
case 1:
    a=k;
    break;
case 2:
    b=k;
    break;
case 3:
    c=k;
    break;
case 4:
    d=k;
    break;
case 5:
    e=k;
    break;
case 6:
    f=k;
    break;
case 7:
    g=k;
    break;
case 8:
    h=k;
    break;
case 9:
    i=k;
    break;
/*case: default
    cout<<"\nEnter proper position";*/
}
//checking win condition
temp=win_check(a,b,c,d,e,f,g,h,i);
return(temp);
}

void pos(){
    int j,flag=1,k=120,temp;
for(int i=0;i<9;i++){
        if(i%2==0){
           flag=1;
           k=120;}
        else {
            flag=2;
            k=111;}
 cout<<"\nplayer"<<flag<<" enter the position\n"<<endl;
cin>>j;
    temp=filldata(j,k);
    outline();
    if(temp==1)
        break;
}
}

int win_check(int a,int b,int c,int d,int e,int f,int g,int h,int i){
    int flag=0,x=120,o=111;
if((a==x&&b==x&&c==x)|| (a==x&&d==x&&g==x)||(a==x&&e==x&&i==x)||(d==x&&e==x&&f==x)||(g==x&&h==x&&i==x)||(c==x&&e==x&&g==x)||(b==x&&e==x&&h==x)||(c==x&&f==x&&i==x)){
    cout<<"player 1 wins"<<endl;
    flag=1;
}
    else if((a==o&&b==o&&c==o)|| (a==o&&d==o&&g==o)||(a==o&&e==o&&i==o)||(d==o&&e==o&&f==o)||(g==o&&h==o&&i==o)||(c==o&&e==o&&g==o)||(b==o&&e==o&&h==o)||(c==o&&f==o&&i==o)){
    cout<<"player 2 wins"<<endl;
    flag=1;
    }
    return(flag);
}

};

int main(){
display d;
d.outline();
d.pos();
//clrscr();
return 0;
}
