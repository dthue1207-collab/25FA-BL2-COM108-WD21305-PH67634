// codetrenLop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

void kiemTraSoNguyen()
{
	printf("Kiem Tra So Nguyen");
	printf("\n");
}
void sapXepMang()
{
	int integerArray[100];
	int tmp;
	int length;
	printf("Nhap kich thuoc mang: ");
	scanf_s("%d", &length);
	printf("Nhap du lieu cho mang %d phan tu\n", length);
	//int lenght = sizeof(mangSoNguyen) / sizeof(int);
	for (int i = 0; i < length; i++)
	{
		printf("mang [%d] = ", i);
		scanf_s("%d", &integerArray[i]);
	}
	printf("Sap xep Tang dan du lieu cho mang %d phan tu\n", length);
	for (int i = 0; i > length - 1; i++)
	{
		if (integerArray[i] < integerArray[i + 1])
		{
			tmp = integerArray[i];
			integerArray[i] = integerArray[i + 1];
			integerArray[i + 1] = tmp;
			i = -1;
		}
	}

	printf("Du lieu cho mang %d phan tu\n", length);
	for (int i = 0; i < length; i++)
	{
		printf("mang[%d] = %d\n", i, integerArray[i]);
	}
}

int main()
{
	int chonChucNang;
	do
	{
		printf("Menu");
		printf("\n");
		printf("1. Kiem Tra So Nguyen");
		printf("\n");
		printf("2. Sap xep phan tu mang 1 chieu");
		printf("\n");
		printf("3. TEN chuc nang 3");
		printf("\n");
		printf("0. Thoat");
		printf("\n");
		printf("Hay chon chuc nang [0-3]: ");
		scanf_s("%d", &chonChucNang);
		switch (chonChucNang)
		{
		case 1:
			kiemTraSoNguyen();
			break;
		case 2:
			sapXepMang();
			break;
		case 3:
			
			break;
		default:
			printf("Chon sai. Chuc nang hop le [0-3]");
			break;
		}
		
	} while (chonChucNang != 0);
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
