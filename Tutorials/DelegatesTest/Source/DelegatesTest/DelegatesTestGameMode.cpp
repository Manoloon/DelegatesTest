// Copyright Epic Games, Inc. All Rights Reserved.

#include "DelegatesTestGameMode.h"
#include "DelegatesTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADelegatesTestGameMode::ADelegatesTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
