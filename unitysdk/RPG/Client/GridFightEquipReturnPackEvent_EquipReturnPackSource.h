#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class GridFightEquipReturnPackEvent_EquipReturnPackSource : ::System::Int32
	{
		None = 0,
		EquipCraft = 1,
		ForgeSelect = 2,
		RoleTakeOff = 3,
		Augment = 4,
	};
}
