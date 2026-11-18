#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int LerpFunc_TypeDefinitionIndex = 9093;

	enum class LerpFunc : ::System::Int32
	{
		SinOut = 3,
		ExpoInOut = 10,
		SmoothArrival = 14,
		ExpoIn = 8,
		SmoothDeparture = 15,
		SinInOut = 4,
		CircularIn = 11,
		ExpoOut = 9,
		EaseIn = 5,
		CircularInOut = 13,
		SinIn = 2,
		CircularOut = 12,
		SmoothStep = 16,
		EaseInOut = 7,
		Step = 1,
		Linear = 0,
		EaseOut = 6,
	};
}
