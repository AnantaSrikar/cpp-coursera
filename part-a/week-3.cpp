#include<iostream>

using namespace std;

int main()
{
	bool **generate_random_graph(int);
	
	const int size = 5;
	bool **graph = generate_random_graph(size);

	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < size; j++)
			cout<<graph[i][j]<<" ";
		
		cout<<endl;
	}
	
	return(0);
}


bool** generate_random_graph(int size)
{
	bool **graph;
	srand(time(0));

	graph = new bool*[size];

	for(int i = 0; i < size; i++)
		graph[i] = new bool[size];

	for(int i = 0; i < size; i++)
		for(int	j = i; j < size; j++)
			if(i == j)
				graph[i][j] = false; //No loops

			else
				graph[i][j] = graph[j][i] = ((rand()%100) < 80);

	return graph;
}