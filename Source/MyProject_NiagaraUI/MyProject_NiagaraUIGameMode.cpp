// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyProject_NiagaraUIGameMode.h"
#include "MyProject_NiagaraUICharacter.h"
#include "UObject/ConstructorHelpers.h"

AMyProject_NiagaraUIGameMode::AMyProject_NiagaraUIGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	/*static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;*/

}
