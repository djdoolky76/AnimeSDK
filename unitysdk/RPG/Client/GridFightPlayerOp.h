#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class GridFightPlayerOp : ::System::Int32
	{
		UsedOrb = 0,
		BoughtExp = 1,
		UsedEquip = 2,
	};
}
