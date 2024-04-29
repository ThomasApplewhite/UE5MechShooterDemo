// Copyright Epic Games, Inc. All Rights Reserved.

#include "MechShooterGameMode.h"
#include "MechShooterCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMechShooterGameMode::AMechShooterGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
