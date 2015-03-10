#include<iostream>
using namespace std;

class display{


int a=1,b=2,c=3,d=4,e=5,f=6,g=7,h=8,i=9;
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




};

int main(){
display d;
d.outline();
return 0;
}
