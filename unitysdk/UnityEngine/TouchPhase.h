#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	enum class TouchPhase : ::System::Int32
	{
		Began = 0,
		Moved = 1,
		Stationary = 2,
		Ended = 3,
		Canceled = 4,
	};
}
