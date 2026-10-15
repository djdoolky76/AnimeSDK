#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI
{
	enum class ScrollRect_MovementType : ::System::Int32
	{
		Unrestricted = 0,
		Elastic = 1,
		Clamped = 2,
	};
}
