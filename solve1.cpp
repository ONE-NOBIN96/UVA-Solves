#include<iostream>
using namespace std;
int countJ(int j){
    int count = 1;

    while(j!=1){
        if(j%2==0){
            j= j/2;
            count++;
        }
        else{
            j = 3*j+1;
            count++;
        }
    }
    return count;
   }

int main(){
    int i,j,max,count_hold,m,n;
    cin>>i;
    cin>>j;
    int j_temp = j;
    m = i;
    n= j;

    if(i>j){
        int i_temp = i;
        i = j;
        j = i_temp;
        j_temp = j;
    }

    max = countJ(j_temp);
   while(j_temp>=i){
    count_hold = countJ(j_temp);
    if(max<count_hold){
        max = count_hold;
    }
   j_temp--;
   }
    cout<<m<<" "<<n<<" "<<max<<"\n";
   
}