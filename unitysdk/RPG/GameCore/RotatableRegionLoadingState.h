#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class RotatableRegionLoadingState : ::System::Int32
	{
		Unload = 0,
		Loading = 1,
		Ready = 2,
	};
}
