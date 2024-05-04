#include <iostream>
using namespace std;

void calcola(float litri_vaso);

int main(){
    float litri;
    cout<<"Inserisci litri del vaso"<<endl;
    cin>>litri;
    calcola(litri);
}

void calcola(float litri_vaso){
    float grammi_finali, grammi_base=3000, litri_base=1000;
    grammi_finali = (grammi_base*litri_vaso)/litri_base;
    cout<<"Per un vaso da "<<litri_vaso<<" litri, occorrono "<<grammi_finali<<" grammi di NPK Gold ogni 6 mesi"<<endl;
}



