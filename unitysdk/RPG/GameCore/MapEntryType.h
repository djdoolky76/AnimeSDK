#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class MapEntryType : ::System::Int32
	{
		Unknown = 0,
		Town = 1,
		Mission = 2,
		Explore = 3,
	};
}
