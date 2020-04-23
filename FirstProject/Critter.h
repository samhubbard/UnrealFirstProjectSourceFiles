// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Critter.generated.h"

UCLASS()
class FIRSTPROJECT_API ACritter : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACritter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// defining the static mesh component for the pawn
	UPROPERTY(EditAnywhere)
	class USkeletalMeshComponent* MeshComponent;

	// defining the camera for the pawn
	UPROPERTY(EditAnywhere)
	class UCameraComponent* Camera;

	// defining the max speed float for movement
	UPROPERTY(EditAnywhere, Category = "Pawn Movement")
	float MaxSpeed;

private:
	// declaring the functions to move the player
	void MoveForward(float Value);
	void MoveRight(float Value);

	// a container to hold the current velocity
	FVector CurrentVelocity;
};
