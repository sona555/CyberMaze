// Fill out your copyright notice in the Description page of Project Settings.


#include "MazeGenerator.h"
#include <iostream> 
#include <queue>
#include <vector>

int maze[10][10] = {
	{1,1,1,1,1,1,1,1,1,1},
	{1,0,1,1,1,1,1,1,1,1},
	{1,0,1,1,0,0,1,1,1,1},
	{1,0,1,1,1,0,1,1,1,1},
	{1,0,0,0,1,0,0,0,1,1},
	{1,1,1,0,1,0,1,1,1,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,1,1,1,0,1,1,1,1},
	{1,0,1,1,1,0,0,0,0,9},
	{1,1,1,1,1,1,1,1,1,1},
};

struct Node {
	int value;
	std::vector<Node*>;
};

int start_ver[2];
int end_ver= maze[8][9];
int dir[4][2] = { {-1, 0}, {1, 0}, {0, -1}, {0, 1} };
int* d = nullptr;

std::queue<int*> Q;

int* MazeGenerator::walkableNodes()
{
	start_ver[0] = 1;
	start_ver[1] = 1;
	Q.push(start_ver);
			
			bool visited[10][10];
			
			visited[1][1] = true;
			while (!Q.empty() && !visited[8][9]) {
				int* node = Q.front();
				Q.pop();

				for (int k = 0; k < 4; k++) {
					d = dir[k];
					int i = node[0] + d[0];
					int j = node[1] + d[1];
					if (!visited[i][j] && !maze[i][j]) {
						// node (i, j) has not yet been visited and is not a wall, add it
						int tmp[] = { i,j };
						Q.push(tmp);
						visited[i][j] = true;
						
					}
				}


			}

		}