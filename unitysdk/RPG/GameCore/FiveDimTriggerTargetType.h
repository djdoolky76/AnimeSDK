#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class FiveDimTriggerTargetType : ::System::UInt32
	{
		None = 0,
		Player = 1,
		Arrow = 2,
		MascotFakePlayer = 4,
		Gecko = 8,
		FloatingSpirit = 16,
		PlayerPhysicsProxy = 32,
		MascotFakePlayerPhysicsProxy = 64,
		CleanerBot = 128,
		DragonDog = 256,
	};
}
