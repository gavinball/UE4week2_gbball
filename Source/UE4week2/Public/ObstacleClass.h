// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ObstacleClass.generated.h"

UCLASS()
class UE4WEEK2_API AObstacleClass : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AObstacleClass() {}

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override {}


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override {}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = Movement)
	float MovementSpeed = 1;
};
