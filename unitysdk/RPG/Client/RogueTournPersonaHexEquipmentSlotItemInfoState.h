#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class RogueTournPersonaHexEquipmentSlotItemInfoState : ::System::Int32
	{
		Invalid = 0,
		Locked = 1,
		Equippable = 2,
		Equipped = 3,
	};
}
