// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveJugador.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Components/StaticMeshComponent.h"


// Sets default values
ANaveJugador::ANaveJugador()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	SM_NaveJugador = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SM NaveJugador"));
	RootComponent = SM_NaveJugador;

	SM_NaveJugador->SetEnableGravity(false);
	SM_NaveJugador->SetConstraintMode(EDOFMode::XZPlane);
	SM_NaveJugador->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	SM_NaveJugador->SetCollisionProfileName(TEXT("PhisicActor"));

	FloatingMovement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("Floating Pawn Movement"));


}

// Called when the game starts or when spawned
void ANaveJugador::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveJugador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ANaveJugador::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ANaveJugador::MoveHorizontal(float AxisValue)
{
	AddMovementInput(FVector(AxisValue, 0.0f, 0.0f), 1.0f, false);
}
void ANaveJugador::MoveVertical(float AxisValueY)
{
	AddMovementInput(FVector(0.0f, 0.0f, AxisValueY), 1.0f, false);
}



