// Fill out your copyright notice in the Description page of Project Settings.


#include "BP_BaseEnemy.h"

// Sets default values
ABP_BaseEnemy::ABP_BaseEnemy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	GetMesh()->SetRelativeLocation(FVector(0.f, 0.f, -90.f));
	GetMesh()->SetRelativeRotation(FRotator(0.f, -90.f, 0.f));
}

// Called when the game starts or when spawned
void ABP_BaseEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABP_BaseEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

