#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class StageRegionLoadType : ::System::Int32
	{
		Distance = 0,
		Volume = 1,
		Always = 2,
	};
}
