#include<iostream>
#define Max 100
using namespace std;

// instalasi matriks ke nol
int Mat[Max][Max];
void initializeMat(int v)
{
	for(int i = 0; i < v; i++)
	{ 
	    for(int j = 0; j < v; j++ )
	    { 
	    Mat[i][j] =0;
		}
	}
}

// menambahkan edges
void Edge(int u, int v, int w)
{
	Mat[u][v] = w;
	Mat[v][u] = w;
}

// mencetak matriks
void displayMat(int v)
{
	for (int i = 1; i <= v; i++)
	{
		cout << "\t";
		
		for (int j = 1; j <= v; j++)
		{
			cout << Mat[i][j] <<"\t";
		}
		cout << endl;
	}
}
int main()
{
	int vertex = 4;
	
	initializeMat(vertex);
	
	Edge(1,2,5);
	Edge(2,3,1);
	Edge(4,1,3);
	Edge(2,4,1);
	Edge(3,1,1);
	displayMat(vertex);
	
	return 0;
}
