// Fill out your copyright notice in the ,Description page of Project Settings.


#include "Floor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

// Sets default values
AFloor::AFloor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Scene"));
	RootComponent = SceneComponent;

	FloorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FloorMesh"));
	FloorMesh->SetupAttachment(SceneComponent);


}

// Called when the game starts or when spawned
void AFloor::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AFloor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

