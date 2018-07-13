/*PROGRAM DESCENDING*/
//mengurutkan sekumpulan bilangan secara ascending
#include <stdio.h>

main()
{
	/*DEKLARASI*/
	int n, i, m, A[100];			//n, i, m pencacah & A[] array
	int min, posisi, temp;			//temporari untuk min, posisi, dan penukar
	char opsi;						//variabel mengulang program
	do
	{
		/*DESKRIPSI*/
		system("cls");							//membersihkan layar
		printf("PROGRAM DESCENDING\n\n");		//judul program
		printf("Berapa banyak angka? ");
		scanf("%i", &n);						//masukkan nilai
		
		for(i=0; i<n; i++)						//untuk mengisi nilai
		{
			printf("Angka ke-%i : ", i+1);
			scanf("%i", &A[i]);
		}
		
		m=n;
		while(m>1)								//mengulangi untuk mengecek setelah ditukar
		{
			min=A[0];							//inisialisasi min
			posisi=0;							//inisialisasi posisi
			for(i=1; i<m; i++)					//pemindah indeks untuk dicek
			{
				if(A[i]<min)					//syarat nilai min berubah
				{
					min=A[i];					//nilai min berubah
					posisi=i;					//nilai posisi berubah
				}
			}
			temp=A[m-1];						//program penukaran
			A[m-1]=min;
			A[posisi]=temp;
			m=m-1;
		}
		
		printf("Hasil pengurutan angka : ");
		for(i=0; i<n; i++)						//perulangan menampilkan
		{
			printf("%i ", A[i]);				//menampilkan tiap array
		}
		printf("\n\nUlangi lagi[Y/T]? "); scanf("%s", &opsi);
	}
	while(opsi=='Y'||opsi=='y');				//'Y' untuk mengulangi
}
