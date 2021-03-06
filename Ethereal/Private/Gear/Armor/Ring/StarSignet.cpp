// © 2014 - 2016 Soverance Studios
// http://www.soverance.com

// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at

// http://www.apache.org/licenses/LICENSE-2.0

// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "Ethereal.h"
#include "StarSignet.h"

#define LOCTEXT_NAMESPACE "EtherealText"

// Sets default values
AStarSignet::AStarSignet(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// Get Assets, References Obtained Via Right Click in Editor
	static ConstructorHelpers::FObjectFinder<UTexture2D> LargeIconObject(TEXT("Texture2D'/Game/Blueprints/Widgets/UI-Images/Icons_Gear/ArmorIcon_StarSignet.ArmorIcon_StarSignet'"));
	static ConstructorHelpers::FObjectFinder<UTexture2D> SmallIconObject(TEXT("Texture2D'/Game/Blueprints/Widgets/UI-Images/Icons_Gear/ArmorIcon_StarSignet-small.ArmorIcon_StarSignet-small'"));

	// Set Default Objects
	LargeIcon = LargeIconObject.Object;
	SmallIcon = SmallIconObject.Object;
	
	// Set Default Values
	Name = EMasterGearList::GL_StarSignet;
	NameText = LOCTEXT("StarSignetName", "Star Signet");
	Type = EMasterGearTypes::GT_Ring;
	TypeText = LOCTEXT("StarSignetType", "Ring");
	Description = "Royal Star Signet. Used by the Knights to seal the Arcadian Gates at the onset of Zhan's betrayal.";
	Price = 50000;
	MPCost = 0;
	ATK = 5;
	DEF = 5;
	SPD = 5;
	HP = 0;
	MP = 0;
	SpecialEffectText = LOCTEXT("StarSignetSpecialEffect", "");
}

// Called when the game starts or when spawned
void AStarSignet::BeginPlay()
{
	Super::BeginPlay();

	// Bind this function to the event dispatcher for Bind Gear
	OnBindGear.AddDynamic(this, &AStarSignet::DoSpecialEffect);
	OnRemoveGear.AddDynamic(this, &AStarSignet::RemoveSpecialEffect);
}


// Custom code for Special Effect
void AStarSignet::DoSpecialEffect()
{

}

// Custom code for Special Effect
void AStarSignet::RemoveSpecialEffect()
{

}

#undef LOCTEXT_NAMESPACE
