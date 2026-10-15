#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ItemFoodTargetType : ::System::Int32
	{
		All = 0,
		Alive = 1,
		Dead = 2,
	};
}
