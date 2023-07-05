#include <iostream>
using namespace std;

class MataKuliah {
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;

public:
	MataKuliah() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		tugasAkhir = 0;

	}

	virtual float hitungNilaiAkhir() { return 0; }
	virtual void cekKelulusan() { }
	virtual void input() { }

	void setP(float nilai) {
		this->presensi = nilai;
	}

	float getP() {
		return presensi;
	}

	void setA(float nilai) {
		this->activity = nilai;
	}

	float getA() {
		return activity;
	}

	void setE(float nilai) {
		this->exercise = nilai;
	}

	float getE() {
		return exercise;
	}

	void setUA(float nilai) {
		this->tugasAkhir = nilai;
	}

	float getUA() {
		return tugasAkhir;
	}
};

class Pemograman : public MataKuliah { //inheritance turunan
public:
	float hitungNilaiAkhir() {
		return (getP() * 0.1) + (getA() * 0.2) + (getE() * 0.3) + (getUA() * 0.4);
	}

	void cekKelulusan() {
		float NilaiAkhir = hitungNilaiAkhir();
		if (NilaiAkhir > 75) {
			cout << "Selamat, Anda lulus mata kuliah Pemograman dengan nilai akhir " << NilaiAkhir << endl;
		}
		else {
			cout << "Mohon maaf, Anda dinyatakan tidak lulus mata kuliah Pemograman" << endl;
		}
	}

	void input() {
		cout << "Masukkan nilai Presensi: ";
		float p = getP();
		cin >> p;
		setP(p);

		cout << "Masukkan nilai Activity: ";
		float a = getA();
		cin >> a;
		setA(a);

		cout << "Masukkan nilai Exercise: ";
		float e = getE();
		cin >> e;
		setE(e);

		cout << "Masukkan nilai Tugas Akhir: ";
		float ua = getUA();
		cin >> ua;
		setUA(ua);
	}
};

int main() {
	cout << "Program dibuat" << endl;;
	
	char pengulanganprogram;

	do {
		cout 
		cout << "Apakah anda ingin mengulan program? Y/N";
		cin >> pengulanganprogram;

	} while

	return 0;
}