// Fill out your copyright notice in the Description page of Project Settings.

#include "TimeTracking.h"
#include "Engine/World.h"

// Sets default values for this component's properties
UTimeTracking::UTimeTracking()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UTimeTracking::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UTimeTracking::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	TimeInSeconds = GetWorld()->GetTimeSeconds();

	if (TimeInSeconds - TimeBetweenLogs > 0.99f)
	{
		TimeBetweenLogs = GetWorld()->GetTimeSeconds();
		UE_LOG(LogTemp, Warning, TEXT("Time: %f"), TimeInSeconds);
	}
}

