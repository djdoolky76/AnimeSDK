#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Pooled
{
	enum class ClearMode : ::System::Int32
	{
		Auto = 0,
		Always = 1,
		Never = 2,
	};
}
