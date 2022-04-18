// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveJugadorPlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/CameraActor.h"

#include "NaveJugador.h"


ANaveJugadorPlayerController::ANaveJugadorPlayerController()
{

}

void ANaveJugadorPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	EnableInput(this);

	InputComponent->BindAxis("MoveHorizontal", this, &ANaveJugadorPlayerController::MoveHorizontal);

}

void ANaveJugadorPlayerController::BeginPlay()
{

	TArray<AActor*> CameraActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACameraActor::StaticClass(), CameraActors);

	FViewTargetTransitionParams Params;
	SetViewTarget(CameraActors[0], Params);

}

void ANaveJugadorPlayerController::MoveHorizontal(float AxisValue)
{

	auto MyPawn = Cast<ANaveJugador>(GetPawn());

	if (MyPawn) {
		MyPawn-> MoveHorizontal(AxisValue);
	}
}
