// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Floor.h"
#include "Wall.h"
#include "CyberMazeGameModeBase.generated.h"

/**
 *
 */
UCLASS()
class CYBERMAZE_API ACyberMazeGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, Category = "Config")
	TSubclassOf<AFloor> FloorClass;

	UPROPERTY(EditAnywhere, Category = "Config")
	TSubclassOf<AWall> WallClass;

	UPROPERTY(EditAnywhere, Category = "Config")
	int32 NumInitialFloorTiles = 10;

	UPROPERTY(VisibleInstanceOnly, Category = "Runtime")
	FTransform NextSpawnPoint;

	UFUNCTION(BlueprintCallable)
	void CreateInitialFloorTiles();

	UFUNCTION(BlueprintCallable)
	void CreateInitialWallTiles();


protected:
	virtual void BeginPlay() override;
};
