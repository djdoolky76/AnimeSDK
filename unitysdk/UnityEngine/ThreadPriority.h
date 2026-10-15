#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	enum class ThreadPriority : ::System::Int32
	{
		Low = 0,
		BelowNormal = 1,
		Normal = 2,
		High = 4,
	};
}
