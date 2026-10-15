#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ItemSellType : ::System::Int32
	{
		UnSellable = 0,
		Sell = 1,
		Destroy = 2,
	};
}
