#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class RogueTournPersonaHexEquipmentMessage : ::System::Int32
	{
		None = 0,
		OnSelectedHexChanged = 1,
		OnEquippedHexChanged = 2,
		OnFilteredHexesChanged = 3,
	};
}
