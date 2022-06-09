#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main()
{
    char k1,k2,k3,k4,k5;
    int jumlah,panjang, hasil1,hasil2,hasil3,hasil4,hasil5,hasil6,hasil7;
	 
    cout<<"* Jumlah kota yang berada di kerajaan Britan : "<< endl;
    cin>>jumlah;
    
    // menampilkan vertex
    // input nama kota
    cout<<"Kota Pertama : ";
    cin>>k1;
    cout<<"Kota Kedua   : ";
    cin>>k2;
    cout<<"Kota Ketiga  : ";
    cin>>k3;
    cout<<"Kota Keempat : ";
    cin>>k4;
	cout<<"Kota kelima  : ";
	cin>>k5;
	
	cout<<endl;

	// menampilkan setiap edge yang terjadi
	cout<<"* Sisi-sisinya adalah : "<<endl<<endl;
    cout<<k1<<k2<<",";
    cout<<k1<<k4<<",";
    cout<<k1<<k5<<",";
    cout<<k2<<k3<<",";
    cout<<k3<<k5<<",";
    cout<<k3<<k4<<",";
    cout<<k4<<k5<<endl<<endl;
	
	// menampilkan panjang jalan yang menghubungkan vertex
	cout<<"* Panjang jalan antar kota : "<<endl;
	cout<<"panjang "<<k1<<" ke "<<k2<< ": "; cin>> hasil1;
	cout<<"panjang "<<k1<<" ke "<<k4<< ": "; cin>> hasil2;
	cout<<"panjang "<<k1<<" ke "<<k5<< ": "; cin>> hasil3;
	cout<<"panjang "<<k2<<" ke "<<k3<< ": "; cin>> hasil4;
	cout<<"panjang "<<k3<<" ke "<<k5<< ": "; cin>> hasil5;
	cout<<"panjang "<<k3<<" ke "<<k4<< ": "; cin>> hasil6;
	cout<<"panjang "<<k4<<" ke "<<k5<< ": "; cin>> hasil7;
	
	cout<<endl;
	
	cout<<"* seluruh jalan yang ada dalam kerajaan britan dan panjang jalannya : "<< endl;
	cout<<"("<<k1<<","<<k2<<","<<hasil1<<") ";
	cout<<"("<<k1<<","<<k4<<","<<hasil2<<") ";
	cout<<"("<<k1<<","<<k5<<","<<hasil3<<") ";
	cout<<"("<<k2<<","<<k3<<","<<hasil4<<") ";
	cout<<"("<<k3<<","<<k5<<","<<hasil5<<") ";
	cout<<"("<<k3<<","<<k4<<","<<hasil6<<") ";
	cout<<"("<<k4<<","<<k5<<","<<hasil7<<") ";
	
	cout<<endl<<endl;
	
	cout<<"* kota tempat pedagang sekarang berada : "<<endl<<endl;
	cout<<k1;
	
	cout<<endl<<endl;
	
	cout<<"* kota yang diserang naga : "<<endl<<endl;
	cout<<k3; 
	
	cout<<endl<<endl;
	
	cout<<"* kota yang memiliki kastil : "<<endl<<endl;
	cout<<k5;
	
	cout<<endl<<endl;
		
	cout<<"* jalur yang paling cepat ditempuh : "<<endl<<endl;
	cout<<k1<<"-"<<k4<<"-"<<k5<<endl;
	
	cout<<endl<<endl;
	
	cout<< "* dengan jarak : "<<endl<<endl;
	cout<<hasil2+hasil7<<endl<<endl;
	
	
	getch();
	return 0;
}
