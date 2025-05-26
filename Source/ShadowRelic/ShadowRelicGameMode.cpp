// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShadowRelicGameMode.h"
#include "ShadowRelicCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShadowRelicGameMode::AShadowRelicGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
