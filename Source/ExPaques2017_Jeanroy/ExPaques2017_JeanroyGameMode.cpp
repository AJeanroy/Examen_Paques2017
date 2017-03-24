// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "ExPaques2017_Jeanroy.h"
#include "ExPaques2017_JeanroyGameMode.h"
#include "ExPaques2017_JeanroyCharacter.h"

AExPaques2017_JeanroyGameMode::AExPaques2017_JeanroyGameMode()
{
	// set default pawn class to our character
	DefaultPawnClass = AExPaques2017_JeanroyCharacter::StaticClass();	
}
