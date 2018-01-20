#include <iostrem>
#include <string>
using namespace std;

class bunga {
	public:
		void warna(string warna);
		int bentuk(string bentuk);
		string wangi;
		void berasaldari(string asal);
		void tumbuhdi(int wilayah);
};
		
int main(){
	bunga bungaester,bungasepatu,bungaasoka,bungamawar,bungaalamanda,bungasakura,bungarafflesia,bungaelata;
	bungaester.wangi ="harum sekali";
	bungasepatu.wangi ="tidak berbau";
	bungaasoka.wangi = "harum pada malam hari";
	bungamawar.wangi = "harum sekali bisa dibuat farpum"
	bungaalamanda.wangi = "harum aja"
	bungasakura.wangi = "harum aja"
	bungarafflesia.wangi = "berbau bangkai"
	bungaelata.wangi = "bau tak sedap"
	
	cout <<"Ciri-ciri bunga ester: \n\n";
	cout <<(bungaester.wangi);
	bungaester.warna("merah,kuning,pink,ungu,biru");
	bungaester.bentuk("menyerupai bintang");
	bungaester.berasaldari"Tiongkok");
	bungaester.tumbuhdi("Indonesia,Cina,Jepang");
	cout <<"_______________________________\n\n";
	
	cout <<"Ciri-ciri bunga sepatu: \n\n";
	cout <<(bungasepatu.wangi);
	bungasepatu.warna("merah,kuning,putih,oranye");
	bungasepatu.bentuk("seperti terompet");
	bungasepatu.berasaldari"Indonesia");
	bungasepatu.tumbuhdi("Indonesia,Malaysia,Tiongkok,Jepang");
	cout <<"_______________________________\n\n";
	
	cout <<"Ciri-ciri bunga asoka: \n\n";
	cout <<(bungaasoka.wangi);
	bungaasoka.warna("merah,kuning,jingga");
	bungaasoka.bentuk("bergerombol dan berderet");
	bungaasoka.berasaldari"India");
	bungaasoka.tumbuhdi("Indonesia,Daerah Asia");
	cout <<"_______________________________\n\n";
	
	cout <<"Ciri-ciri bunga mawar: \n\n";
	cout <<(bungamawar.wangi);
	bungamawar.warna("merah,merah muda,putih,kuning");
	bungamawar.bentuk("daun mahkota");
	bungamawar.berasaldari"Cina");
	bungamawar.tumbuhdi("Indonesia,Eropa,Tiongkok,Timur Tengah,Jepang,Amerika Serikat");
	cout <<"_______________________________\n\n";
	
	cout <<"Ciri-ciri bunga alamanda: \n\n";
	cout <<(bungaalamanda.wangi);
	bungaalamanda.warna("kuning");
	bungaalamanda.bentuk("menyerupai lonceng");
	bungaalamanda.berasaldari"Amerika Tengah");
	bungaalamanda.tumbuhdi("Indonesia,Brazil,");
	cout <<"_______________________________\n\n";
	
	cout <<"Ciri-ciri bunga sakura: \n\n";
	cout <<(bungasakura.wangi);
	bungasakura.warna("merah jambu,putih,kuning muda,hijau muda");
	bungasakura.bentuk("sususan mahkota berlapis");
	bungasakura.berasaldari"Jepang");
	bungasakura.tumbuhdi("Tokyo,Kyoto,Honshu,Osaka");
	cout <<"_______________________________\n\n";
	
	
	
}
