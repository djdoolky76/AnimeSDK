#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class BattleModeViewState : ::System::Int32
	{
		None = 0,
		Inited = 1,
		Loading = 2,
		Loaded = 3,
	};
}
