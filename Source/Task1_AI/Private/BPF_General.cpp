// Fill out your copyright notice in the Description page of Project Settings.


#include "BPF_General.h"

void UBPF_General::Update_Crowd_Agent_Param(UObject* world_context_object, UCrowdFollowingComponent* crowd_follow_comp)
{
	if (crowd_follow_comp)
	{
		crowd_follow_comp->UpdateCrowdAgentParams();
	}
}
