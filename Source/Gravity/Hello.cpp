// Fill out your copyright notice in the Description page of Project Settings.

#include "Hello.h"
#include "Kismet/KismetSystemLibrary.h" //追加

// Sets default values
AHello::AHello()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AHello::BeginPlay()
{
	Super::BeginPlay();

	UKismetSystemLibrary::PrintString(this, "Hello", true, true, FColor::Cyan, 2.f, TEXT("None"));
}

// Called every frame
void AHello::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
