#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class RogueAdventureGameplayType : ::System::Int32
	{
		None = 0,
		RogueDestroyProp = 1,
		RogueCaptureMonster = 2,
		RogueTurntable = 3,
		RogueEscapeLaser = 4,
		RogueWolfGun = 5,
		RogueCandyCrash = 6,
	};
}
