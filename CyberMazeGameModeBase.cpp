// Copyright Epic Games, Inc. All Rights Reserved.


#include "CyberMazeGameModeBase.h"
#include "MazeGenerator.h"


UWorld* World;


void ACyberMazeGameModeBase::BeginPlay()
{
	CreateInitialFloorTiles();
	CreateInitialWallTiles();
}


void ACyberMazeGameModeBase::CreateInitialFloorTiles()
{

	World = GetWorld();

	for (int i = 0; i < NumInitialFloorTiles; i++)
	{
		for (int j = 0; j < NumInitialFloorTiles; j++)
		{
			FTransform Transform;
			Transform.SetLocation(FVector(i * 1000, j * 1000, 0));
			AFloor* Tile = World->SpawnActor<AFloor>(FloorClass, Transform);
		}
	}
}

void ACyberMazeGameModeBase::CreateInitialWallTiles()
{
	World = GetWorld();
	int maze[10][10] = {
		{1,1,1,1,1,1,1,1,1,1},
		{2,0,1,1,1,1,1,1,1,1},
		{1,0,1,1,0,0,1,1,1,1},
		{1,0,1,1,1,0,1,1,1,1},
		{1,0,0,0,1,0,0,0,1,1},
		{1,1,1,0,1,0,1,1,1,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,1,1,1,0,1,1,1,1},
		{1,0,1,1,1,0,0,0,0,9},
		{1,1,1,1,1,1,1,1,1,1},
	};
	for (int i = 0; i < NumInitialFloorTiles; i++)
	{
		for (int j = 0; j < NumInitialFloorTiles; j++)
		{
			if (maze[i][j] && maze[i][j]!=9) {
				FTransform Transform;
				Transform.SetLocation(FVector(i * 1000, j * 1000, 100));
				AFloor* Tile = World->SpawnActor<AFloor>(FloorClass, Transform);
			}
		}
	}
}
