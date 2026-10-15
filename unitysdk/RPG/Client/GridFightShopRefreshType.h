#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class GridFightShopRefreshType : ::System::Int32
	{
		Default = 0,
		Manual = 1,
		GemiRefresh = 2,
		EnterNode = 3,
	};
}
