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
#include "KnightsCape.h"

#define LOCTEXT_NAMESPACE "EtherealText"

// Sets default values
AKnightsCape::AKnightsCape(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// Get Assets, References Obtained Via Right Click in Editor
	static ConstructorHelpers::FObjectFinder<UTexture2D> LargeIconObject(TEXT("Texture2D'/Game/Blueprints/Widgets/UI-Images/Icons_Gear/ArmorIcon_KnightsCape.ArmorIcon_KnightsCape'"));
	static ConstructorHelpers::FObjectFinder<UTexture2D> SmallIconObject(TEXT("Texture2D'/Game/Blueprints/Widgets/UI-Images/Icons_Gear/ArmorIcon_KnightsCape-small.ArmorIcon_KnightsCape-small'"));

	// Set Default Objects
	LargeIcon = LargeIconObject.Object;
	SmallIcon = SmallIconObject.Object;
	
	// Set Default Values
	Name = EMasterGearList::GL_KnightsCape;
	NameText = LOCTEXT("KnightsCapeName", "Knight's Cape");
	Type = EMasterGearTypes::GT_Cape;
	TypeText = LOCTEXT("KnightsCapeType", "Cape");
	Description = "The crest of the Ethereal Order is emblazoned on the back.";
	Price = 12500;
	MPCost = 0;
	ATK = 5;
	DEF = 5;
	SPD = 0;
	HP = 25;
	MP = 0;
}

// Called when the game starts or when spawned
void AKnightsCape::BeginPlay()
{
	Super::BeginPlay();
}

#undef LOCTEXT_NAMESPACE
