// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Navigation/CrowdFollowingComponent.h"
#include "BPF_General.generated.h"

/**
 * 
 */
UCLASS()
class TASK1_AI_API UBPF_General : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintCallable, Category = "UR_BP_FunctionLibrary|Actor", meta=(WorldContext="world_context_object"))
	static void Update_Crowd_Agent_Param(UObject* world_context_object, UCrowdFollowingComponent* crowd_follow_comp);

};
