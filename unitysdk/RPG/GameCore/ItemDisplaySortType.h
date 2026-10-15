#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ItemDisplaySortType : ::System::Int32
	{
		Unknown = 0,
		ItemID = 1,
		Rank = 2,
		ItemSubType = 3,
		PurposeType = 4,
	};
}
