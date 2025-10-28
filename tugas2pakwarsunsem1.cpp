#include <iostream>
#include <string>
using namespace std;

struct studentType
{
    string studentFName;
    string studentLName;
    int testScore;
    char grade;
};
studentType student[20];//isi dari 0 sampe 19//


void isinamasiswa(studentType arr[],int bsiswa){

for (int i=0 ; i<bsiswa; i++)
{
    cout<<"Nama depan:";
    cin>>arr[i].studentFName;
    cout<<endl;
    cout<<"Nama Belakang:";
    cin>>arr[i].studentLName;
    cout<<endl;
    cout<<"Score:";
    cin>>arr[i].testScore;
    cout<<endl;
    
}
};
void nilai(studentType arr[],int bsiswa){
    for(int k=0;k<bsiswa;k++){
        if (arr[k].testScore>=80)
        {
            arr[k].grade='A';
        }else {
            if (arr[k].testScore<80 && arr[k].testScore>60 ){
                arr[k].grade='B';

            }else{
                 if (arr[k].testScore<=60 ){
                arr[k].grade='C';

            }
                
            }
        }
        
    }

}
void carinilai(studentType arr[],int bsiswa,int &nosiswalokal){
    
    int tertinggi = arr[0].testScore;
    for(int t=0;t<bsiswa;t++){
if (arr[t].testScore>tertinggi){
    tertinggi=arr[t].testScore;
    nosiswalokal=t;
}
    }
cout<<"Nilai Tertinggi adalah: "<< tertinggi<<endl;

}
void sijuara(studentType arr[]  ,int nojuara){
cout<<"Nama Pemilik nilai tertinggi adalah :"<<arr[nojuara].studentFName<<arr[nojuara].studentLName;
}
void cetaksemua(studentType arr[] , int bsiswa){
    for(int b=0;b<bsiswa;b++){
        cout<<"Nama depan:";
    cout<<arr[b].studentFName;
    cout<<endl;
    cout<<"Nama Belakang:";
    cout<<arr[b].studentLName;
    cout<<endl;
    cout<<"Score:";
    cout<<arr[b].testScore;
    cout<<endl;
    cout<<"Grade:";
    cout<<arr[b].grade;
    cout<<endl;
    }
}

int main(){
    int bsiswa=20;
    int nosiswa;
    isinamasiswa(student,bsiswa);
    nilai(student,bsiswa);
    cetaksemua(student,bsiswa);
    carinilai(student,bsiswa,nosiswa);
    sijuara(student,nosiswa);

    



};
