// Fill out your copyright notice in the Description page of Project Settings.


#include "PacManController.h"
#include "PacManPawn.h"

APacManPawn* APacManController::GetPacManPawn() const
{
	return Cast<APacManPawn>(GetPawn());
}

void APacManController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("MoveUp", IE_Pressed, this, &APacManController::MoveUp);
	InputComponent->BindAction("MoveDown", IE_Pressed, this, &APacManController::MoveDown);
	InputComponent->BindAction("MoveRight", IE_Pressed, this, &APacManController::MoveRight);
	InputComponent->BindAction("MoveLeft", IE_Pressed, this, &APacManController::MoveLeft);
}

void APacManController::MoveUp()
{
	if (GetPacManPawn())
	{
		GetPacManPawn()->SetDirection(FVector::UpVector);
	}
}

void APacManController::MoveDown()
{
	if (GetPacManPawn())
	{
		GetPacManPawn()->SetDirection(FVector::DownVector);
	}
}

void APacManController::MoveRight()
{
	if (GetPacManPawn())
	{
		GetPacManPawn()->SetDirection(FVector::RightVector);
	}
}

void APacManController::MoveLeft()
{
	if (GetPacManPawn())
	{
		GetPacManPawn()->SetDirection(FVector::LeftVector);
	}
}
