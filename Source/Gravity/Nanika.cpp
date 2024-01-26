// Fill out your copyright notice in the Description page of Project Settings.

#include "Nanika.h"
#include "Kismet/KismetSystemLibrary.h" //追加

// Sets default values
ANanika::ANanika()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ANanika::BeginPlay()
{
	Super::BeginPlay();

	UKismetSystemLibrary::PrintString(this, "Nanika", true, true, FColor::Cyan, 2.f, TEXT("None"));
}

// Called every frame
void ANanika::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
