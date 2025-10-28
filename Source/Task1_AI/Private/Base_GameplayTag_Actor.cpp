// Fill out your copyright notice in the Description page of Project Settings.


#include "Base_GameplayTag_Actor.h"

// Sets default values
ABase_GameplayTag_Actor::ABase_GameplayTag_Actor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABase_GameplayTag_Actor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABase_GameplayTag_Actor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

