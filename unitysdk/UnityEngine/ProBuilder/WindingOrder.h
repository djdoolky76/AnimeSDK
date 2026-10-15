#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::ProBuilder
{
	enum class WindingOrder : ::System::Int32
	{
		Unknown = 0,
		Clockwise = 1,
		CounterClockwise = 2,
	};
}
