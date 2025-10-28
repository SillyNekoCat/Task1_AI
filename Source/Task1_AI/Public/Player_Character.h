// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "Player_Character.generated.h"

UCLASS()
class TASK1_AI_API APlayer_Character : public ACharacter, public IGameplayTagAssetInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayer_Character();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	///////////////IGameplayTagAssetInterface
	virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override { TagContainer = OwnedGameplayTags; return; };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay Tags")
	FGameplayTagContainer OwnedGameplayTags;
	//////////////


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
