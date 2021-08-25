// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/ArrowComponent.h"
#include "Floor.generated.h"

class UStaticMeshComponent;
class USceneComponent;
class UBoxComponent;

UCLASS()
class CYBERMAZE_API AFloor : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BLueprintReadOnly, Category = "Components")
		USceneComponent* SceneComponent;

	UPROPERTY(VisibleAnywhere, BLueprintReadOnly, Category = "Components")
		UStaticMeshComponent* FloorMesh;


	// Sets default values for this actor's properties
	AFloor();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
