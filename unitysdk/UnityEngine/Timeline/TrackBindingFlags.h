#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Timeline
{
	enum class TrackBindingFlags : ::System::Int32
	{
		None = 0,
		AllowCreateComponent = 1,
		All = 1,
	};
}
