#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class RegionVisualStateReason : ::System::Int32
	{
		StreamingSource = 0,
		Connection = 1,
		ConfigAffect = 2,
		OutOfRegion = 4,
	};
}
