// Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void kiem_tra_so_chinh_phuong()
{
	char Tieptuc;
	do
	{
		system("cls");
	int n;
	printf("Nhap so n: ");
	scanf_s("%d", &n);

	if (n < 0) {
		printf("%d So phai lon hon hoac bang 0.\n", n);
		return;
	}

	int sqrt_n = (int)sqrt(n);
	if (sqrt_n * sqrt_n == n) {
		printf("%d la so chinh phuong.\n", n);
	}
	else 
	{
		printf("%d khong phai la so chinh phuong.\n", n);
	}
	printf("Ban co muon tiep tuc chuc nang nay khong (y/n)? ");
	printf("\n");
	scanf_s("%c", &Tieptuc);
	} while (Tieptuc == 'y' || Tieptuc == 'Y');
}
void tim_uoc_chung_va_boi_so_chung_cua_hai_so()
{
	char Tieptuc;
	do
	{
		system("cls");
	printf("Chuong trinh dang phat trien\n");
	int a, b;
	printf("Nhap hai so nguyen a va b: ");
	scanf_s("%d %d", &a, &b);

	int uoc_chung = 1;

	for (int i = 1; i < i <= a && i <= b; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			uoc_chung = i;
		}
	}

	int boi_so = (a * b) / uoc_chung;
	printf("Uoc chung lon nhat cua %d va %d la: %d\n", a, b, uoc_chung);
	printf("Boi so chung nho nhat cua %d va %d la: %d\n", a, b, boi_so);

		printf("Ban co muon tiep tuc chuc nang nay khong (y/n)? ");
	    printf("\n");
	    scanf_s("%c", &Tieptuc);
	} while (Tieptuc == 'y' || Tieptuc == 'Y');
}
void tinh_tien_cho_quan_karaoke()
{
	char Tieptuc;
	do
	{
		system("cls");
		int gio, phut;
		float tien_gio, tien_phut;

		printf("Nhap so gio: ");
		scanf_s("%d", &gio);
		printf("Nhap so phut: ");
		scanf_s("%d", &phut);

		tien_gio = gio * 100000;
		tien_phut = phut * (100000 / 60);
		float tong_tien = tien_gio + tien_phut;
		printf("Tong tien cho %d gio %d phut phai tra la: %.f VND\n", gio, phut, tong_tien);
		printf("Ban co muon tiep tuc chuc nang nay khong (y/n)? ");
		printf("\n");
		scanf_s("%c", &Tieptuc);
	} while (Tieptuc == 'y' || Tieptuc == 'Y');
}
void tinh_tien_dien()
{
	char Tieptuc;
	do
	{
		system("cls");
	int so_kWh;
	printf("Nhap so kWh tieu thu: ");
	scanf_s("%d", &so_kWh);

	float tien_dien;

	tien_dien = so_kWh * 3500;
	printf("Tong tien Bdien phai tra la: %.f VND\n", tien_dien);
	printf("Ban co muon tiep tuc chuc nang nay khong (y/n)? ");
	printf("\n");
	scanf_s("%c", &Tieptuc);
	} while (Tieptuc == 'y' || Tieptuc == 'Y');
}
void doi_tien()
{
	char Tieptuc;
	do
	{
		system("cls");
	int tien;
	int menhGia[] = { 500, 200, 100, 50, 20, 10, 5, 2, 1 };
	int soTo[9] = { 0 };
	printf("Nhap so tien can doi: ");
	scanf_s("%d", &tien);
	for (int i = 0; i < 9; i++)
	{
		soTo[i] = tien / menhGia[i];
		tien = tien % menhGia[i];
	}
	printf("Ket qua doi tien :\n");
	for (int i = 0; i < 9; i++)
	{
		if (soTo[i] > 0)
			printf("%d to %d\n", soTo[i], menhGia[i]);
	}
	printf("Ban co muon tiep tuc chuc nang nay khong (y/n)? ");
	printf("\n");
	scanf_s("%c", &Tieptuc);
	} while (Tieptuc == 'y' || Tieptuc == 'Y');
}
void tinh_lai_suat_vay_ngan_hang_tra_gop()
{
	char Tieptuc;
	do
	{
		system("cls");
	float so_tien_vay, lai_suat, thoi_gian, tong_tien, tien_tra_theo_thang;

	printf("Nhap so tien vay: ");
	scanf_s("%f", &so_tien_vay);
	printf("Nhap lai suat (theo thang): ");
	scanf_s("%f", &lai_suat);
	printf("Nhap thoi gian vay (thang): ");
	scanf_s("%f", &thoi_gian);

	lai_suat = lai_suat / 100;
	if (lai_suat == 0) {
		tien_tra_theo_thang = so_tien_vay / thoi_gian;
	}
	else tien_tra_theo_thang = (so_tien_vay * lai_suat) / (1 - pow(1 + lai_suat, -thoi_gian));
	tong_tien = so_tien_vay * ((lai_suat / 100) + 1) * thoi_gian;

	tong_tien = tien_tra_theo_thang * thoi_gian;

	printf("So tien vay: %.f VND\n", so_tien_vay);
	printf("Tien phai tra moi thang: %.2f VND\n", tien_tra_theo_thang);
	printf("Tong tien phai tra sau %.f thang vay la: %.f VND\n", thoi_gian, tong_tien);

		printf("Ban co muon tiep tuc chuc nang nay khong (y/n)? ");
	    printf("\n");
	    scanf_s("%c", &Tieptuc);
	} while (Tieptuc == 'y' || Tieptuc == 'Y');
}
void vay_tien_mua_xe()
{
	char Tieptuc;
	do
	{
		system("cls");
	float gia_xe, tien_dat_coc, so_tien_vay, lai_suat, thoi_gian_vay, tong_tien_phai_tra = 0, tien_tra_theo_thang = 0;
	printf("Nhap gia xe: ");
	scanf_s("%f", &gia_xe);
	printf("Nhap tien dat coc: ");
	scanf_s("%f", &tien_dat_coc);
	printf("Nhap lai suat vay (theo thang): ");
	scanf_s("%f", &lai_suat);
	printf("Nhap thoi gian vay (thang): ");
	scanf_s("%f", &thoi_gian_vay);

	so_tien_vay = gia_xe - tien_dat_coc;
	float lai_suat_thang = lai_suat / 100;

	if (lai_suat_thang == 0)
	{
		tien_tra_theo_thang = so_tien_vay / thoi_gian_vay;
		tong_tien_phai_tra = so_tien_vay;
	}
	else
	{
		tien_tra_theo_thang = (so_tien_vay * lai_suat_thang) / (1 - pow(1 + lai_suat_thang, -thoi_gian_vay));
		tong_tien_phai_tra = tien_tra_theo_thang * thoi_gian_vay;
	}

	printf("So tien vay: %.f VND\n", so_tien_vay);
	printf("Tien phai tra moi thang: %.f VND\n", tien_tra_theo_thang);
	printf("Tong tien phai tra sau %.0f thang vay la: %.f VND\n", thoi_gian_vay, tong_tien_phai_tra);
		printf("Ban co muon tiep tuc chuc nang nay khong (y/n)? ");
	    printf("\n");
	    scanf_s("%c", &Tieptuc);
	} while (Tieptuc == 'y' || Tieptuc == 'Y');
}
void sap_xem_thong_tin_sinh_vien()
{
	printf("Chuong trinh dang phat trien\n");
}
void xay_dung_game_FPOLY_LOTT()
{
	printf("Chuong trinh dang phat trien\n");
}
void tinh_toan_phan_so()
{
	char Tieptuc;
	do
	{
			system("cls");
		int a, b, c, d;

		printf("Nhap tu va mau cua phan so 1: ");
		scanf_s("%d%d", &a, &b);

		printf("Nhap tu va mau cua phan so 2: ");
		scanf_s("%d%d", &c, &d);

		// Tong
		int tong_tu = a * d + c * b;
		int tong_mau = b * d;
		printf("Tong: %d/%d\n", tong_tu, tong_mau);

		// Hieu
		int hieu_tu = a * d - c * b;
		int hieu_mau = b * d;
		printf("Hieu: %d/%d\n", hieu_tu, hieu_mau);

		// Tich
		int tich_tu = a * c;
		int tich_mau = b * d;
		printf("Tich: %d/%d\n", tich_tu, tich_mau);

		// Thuong
		int thuong_tu = a * d;
		int thuong_mau = b * c;
		printf("Thuong: %d/%d\n", thuong_tu, thuong_mau);
		printf("Ban co muon tiep tuc chuc nang nay khong (y/n)? ");
	    printf("\n");
	    scanf_s("%c", &Tieptuc);
	} while (Tieptuc == 'y' || Tieptuc == 'Y');
}


int main()
{
	int chon;
	do
	{
		printf("MENU\n");
		printf("1. Kiem tra so chinh phuong\n");
		printf("2. Tim uoc chung va boi so chung cua hai so\n");
		printf("3. Tinh tien cho quan karaoke\n");
		printf("4. Tinh tien dien\n");
		printf("5. Doi tien\n");
		printf("6. Tinh lai suat vay ngan hang tra gop\n");
		printf("7. Vay tien mua xe\n");
		printf("8. Sap xep xem thong tin sinh vien\n");
		printf("9. Xay dung game FPOLY LOTT\n");
		printf("10. Tinh toan phan so\n");
		printf("0. Thoat chuong trinh\n");
		printf("Chon chuc nang tren MENU: \n ");
		scanf_s("%d", &chon);
		switch (chon)
		{
		case 1:
			kiem_tra_so_chinh_phuong();
			break;
		case 2:
			tim_uoc_chung_va_boi_so_chung_cua_hai_so();
			break;
		case 3:
			tinh_tien_cho_quan_karaoke();
			break;
		case 4:
			tinh_tien_dien();
			break;
		case 5:
			doi_tien();
			break;
		case 6:
			tinh_lai_suat_vay_ngan_hang_tra_gop();
			break;
		case 7:
			vay_tien_mua_xe();
			break;
		case 8:
			sap_xem_thong_tin_sinh_vien();
			break;
		case 9:
			xay_dung_game_FPOLY_LOTT();
			break;
		case 10:
			tinh_toan_phan_so();
			break;
		case 0:
			printf("Thoat chuong trinh\n");
			break;
		default:
			printf("Chuc nang ban chon khong hop le. Vui long chon lai!\n");
			break;
		}
	} while (chon != 0);
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
