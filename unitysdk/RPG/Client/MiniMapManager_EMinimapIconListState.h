#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class MiniMapManager_EMinimapIconListState : ::System::Int32
	{
		Dirty = 0,
		Sorted = 1,
		Filtered = 2,
	};
}
