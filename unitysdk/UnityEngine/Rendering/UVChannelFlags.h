#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	enum class UVChannelFlags : ::System::Int32
	{
		UV0 = 1,
		UV1 = 2,
		UV2 = 4,
		UV3 = 8,
	};
}
