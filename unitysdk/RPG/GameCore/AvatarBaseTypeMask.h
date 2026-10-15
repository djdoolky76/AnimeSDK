#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class AvatarBaseTypeMask : ::System::UInt32
	{
		None = 0,
		Warrior = 2,
		Rogue = 4,
		Mage = 8,
		Shaman = 16,
		Warlock = 32,
		Knight = 64,
		Priest = 128,
		Memory = 256,
		Elation = 512,
		All = 1022,
	};
}
