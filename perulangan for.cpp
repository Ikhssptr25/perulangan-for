#include<iostream>
using namespace std;

int main(){
    /*ikhsan saputra
	2117051037
	kelas B*/
	  
	//deklarasi variabel//  
    int i;
    double penjumlahan;
    double n,bilangan,rata;
    
    i=1;
    penjumlahan=0;
    
    
    //input
    cout<<"Banyak Bilangan :" ;  cin>>n ;
    
    //peruangan while
    for(i; i<=n; i++){
    	cout<<"Bilangan yang akan dihitung rata ratanya :";
	    cin>>bilangan;
    	penjumlahan+=bilangan;
    	
	}
    rata=penjumlahan/n;
    
    //output
    cout<<"Total Penjumlahan :"<<penjumlahan<<endl;
    cout<<"Rata-Rata         :"<<rata<<endl;
    
    
    
    
    return 0;
	
	

}
