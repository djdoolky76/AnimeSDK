#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class MazeSubType : ::System::Int32
	{
		Unknown = 0,
		Mainline = 1,
		Raid = 2,
		Material = 3,
		Rogue = 4,
		Tower = 5,
	};
}
