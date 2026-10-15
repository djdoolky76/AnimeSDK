#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class AssetLoadPriority : ::System::Int32
	{
		eLow = 0,
		eMiddle = 1,
		eHigh = 2,
	};
}
