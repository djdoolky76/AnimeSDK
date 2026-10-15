#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Math::Prime
{
	enum class ConfidenceFactor : ::System::Int32
	{
		ExtraLow = 0,
		Low = 1,
		Medium = 2,
		High = 3,
		ExtraHigh = 4,
		Provable = 5,
	};
}
