#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ItemGiftSubType : ::System::Int32
	{
		Unknown = 0,
		Fix = 1,
		Random = 2,
		Opitonal = 3,
		Rebate = 4,
	};
}
