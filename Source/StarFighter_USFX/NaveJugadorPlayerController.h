// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "NaveJugadorPlayerController.generated.h"


/**
 * 
 */
UCLASS()
class STARFIGHTER_USFX_API ANaveJugadorPlayerController : public APlayerController
{
	GENERATED_BODY()
	
		ANaveJugadorPlayerController();

	UFUNCTION()
		virtual void SetupInputComponent() override;

protected:
	virtual void BeginPlay() override;
	void MoveHorizontal(float AxisValue);


};
