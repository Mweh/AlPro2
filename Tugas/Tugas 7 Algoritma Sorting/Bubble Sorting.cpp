#include <iostream> 

using namespace std; 

void DataNilai(int Data[], int ukuran);
void BubbleSorting(int Data[], int n);
void tukar(int *xp, int *yp);

int main() 
{ 
int Data[] = {69, 3, 6, 55, 99, -5}; 
	int n = sizeof(Data)/sizeof(Data[0]); 

	printf("Data yang ingin di Descending: \n"); 
	DataNilai(Data, n); 
	
	cout << "\nJumlah Data: \n"<<n<<endl;

	BubbleSorting(Data, n);

	printf("\nData yang sudah di Descending: \n"); 
	DataNilai(Data, n); 
} 

void tukar(int *xp, int *yp) 
{ 
	int temp = *xp; 
	*xp = *yp; 
	*yp = temp; 
} 

void BubbleSorting(int Data[], int n) 
{ 
	int i, j; 
	for (i = 0; i < n-1; i++)	 
	
	for (j = 0; j < n-i-1; j++) 
		if (Data[j] < Data[j+1]) 
			tukar(&Data[j], &Data[j+1]); 
} 

void DataNilai(int Data[], int ukuran) 
{ 
	int i; 
	for (i = 0; i < ukuran; i++) 
		cout << Data[i] << " "; 
	cout << endl; 
} 
