// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ClairePoujois_MMindGameMode.generated.h"

UCLASS(minimalapi)
class AClairePoujois_MMindGameMode : public AGameModeBase
{
	GENERATED_BODY()
	public:
UPROPERTY(BlueprintReadWrite)
	TArray<FColor> ColorList;

public:
	AClairePoujois_MMindGameMode();
};



