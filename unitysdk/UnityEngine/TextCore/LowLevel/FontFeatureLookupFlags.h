#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::TextCore::LowLevel
{
	enum class FontFeatureLookupFlags : ::System::Int32
	{
		None = 0,
		IgnoreLigatures = 4,
		IgnoreSpacingAdjustments = 256,
	};
}
