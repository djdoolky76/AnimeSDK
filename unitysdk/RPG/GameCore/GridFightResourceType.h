#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class GridFightResourceType : ::System::Int32
	{
		Gold = 0,
		Exp = 1,
		Level = 2,
		GlobalHP = 3,
		FreeRefreshShop = 4,
		Count = 5,
	};
}
