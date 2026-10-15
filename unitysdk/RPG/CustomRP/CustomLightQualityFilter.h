#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	enum class CustomLightQualityFilter : ::System::Int32
	{
		Low = 1,
		Middle = 2,
		High = 4,
		ExtremeHigh = 8,
		All = 15,
	};
}
