#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class HarmonySyncMode : ::System::Int32
	{
		SyncBeat = 0,
		SyncGrid = 1,
		SyncBar = 2,
	};
}
