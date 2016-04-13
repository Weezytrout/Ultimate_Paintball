// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "Ultimate_Paintball.h"
#include "Ultimate_PaintballGameMode.h"
#include "Ultimate_PaintballPlayerController.h"
#include "Ultimate_PaintballCharacter.h"

AUltimate_PaintballGameMode::AUltimate_PaintballGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AUltimate_PaintballPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}