
#include<conio.h>
#include<string.h>
#include <iostream>
using namespace std;
int main (){
	         cout << "============================ " << endl;
	         cout << "|Nama    :Ferry Ekalaya     |" <<endl;
	         cout << "|Nim     :2230511082        |" << endl;
	         cout << "|Prodi   :Teknik Informatika|" << endl;
	         cout << "============================" << endl;
	         cout << endl;
	         
	char nama [30],alamat[60],noHP[60],kdkategori,kategoricucian[30];
	int biaya,jumlahbayar,uangkembalian,berat,totalberat;
	cout << "\===================================" << endl;
	cout << "\t PROGRAM LAUNDRY PAKAIAN" << endl;
	cout << "\===================================" << endl;
	cout << endl;
	cout << "\tInput Data Pesanan" << endl;
	cout << "-------------------------------------" << endl;
	cout << "Nama Pelanggan       :";cin >>nama;
	cout << "Alamat               :";cin >> alamat;
	cout << "No Handphone         :";cin >> noHP;
	cout << "-------------------------------------" << endl;
	cout << "\tKategori Cucian"<< endl;
    cout << "-------------------------------------" << endl;
    cout << "1.Reguler" << endl;
    cout << "2.Ekpress" << endl;
    cout << "3.Kilat" << endl;
    cout << "------------------------------------" << endl;
    cout << "------------------------------------" << endl;
    cout << "Input No Kategori [1,2,3 :";cin >> kdkategori;
    switch (kdkategori){
    	
    	 // untuk kategori reguler
    	 case '1' :
    	strcpy (kategoricucian,"Cuci reguler 1 hari");
    	biaya =10000;
    	break;
    	// untuk kategori cekspress
    	case '2' :
        strcpy (kategoricucian,"Cuci Ekspress 12 jam");
        biaya =12000;
        break;
        
       // untuk kategori kilat
       case '3' :
       	strcpy (kategoricucian,"Cuci Kilat 9 jam");
       	biaya =15000;
       	break;
       	//untuk
       	 default :
       	 	strcpy(kategoricucian,"tanda alamat salah");
       	 	break;
	}
    cout << "Berat cucian (kg)       :";cin>>berat;
	cout << "---------------------------------" << endl;
	cout <<"\tData pelanggan" << endl;
	cout << "---------------------------------" << endl;
	cout << "Nama Pelanggan          :" << nama << endl;
	cout << "Alamat                  :" << alamat << endl;
	cout << "No Handphone            :" << noHP << endl;
	cout<<kategoricucian<<"  : Rp." << biaya << endl;
	totalberat=biaya*berat;
	cout << "Total Biaya            :Rp."<< totalberat << endl;
	cout << "---------------------------------" << endl;
	cout << "Uang pelanggan         :Rp.";cin >>jumlahbayar;
	uangkembalian=jumlahbayar-totalberat;
	cout << "kembalian               :Rp."<<uangkembalian<<endl;
	cout <<""<<endl;
	cout << "===========================================" <<endl;
	cout << "Terima kasih telah datang di laundry kami " << endl;
	cout << "==========================================="<< endl;
	cout <<"" << endl;
	
	getch();
	
}