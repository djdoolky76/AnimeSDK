#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class GrowthMaterialGroup : ::System::UInt32
	{
		LEVELUP_MATERIAL = 0,
		OUTERCIRCLE_EQUIPMENT = 1,
		INNERCIRCLE_EQUIPMENT = 2,
		NUM = 3,
	};
}
