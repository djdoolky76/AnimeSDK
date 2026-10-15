#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class EvolveBuildProtductType : ::System::Int32
	{
		Unknown = 0,
		AddMazeBuff = 1,
		UnlockAbility = 2,
		AddAccessorySlot = 3,
		InitWeaponLevel = 4,
	};
}
