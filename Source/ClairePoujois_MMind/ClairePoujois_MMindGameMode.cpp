// Copyright Epic Games, Inc. All Rights Reserved.

#include "ClairePoujois_MMindGameMode.h"
#include "ClairePoujois_MMindCharacter.h"
#include "UObject/ConstructorHelpers.h"

AClairePoujois_MMindGameMode::AClairePoujois_MMindGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
