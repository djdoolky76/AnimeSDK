#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class PixAirContentType : ::System::Int32
	{
		None = 0,
		Supply = 1,
		Shop = 2,
		Event = 3,
		Battle = 4,
		GroupedBattle = 5,
		ShopGroup = 6,
	};
}
