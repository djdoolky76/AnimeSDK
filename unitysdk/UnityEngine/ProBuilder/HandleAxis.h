#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::ProBuilder
{
	enum class HandleAxis : ::System::Int32
	{
		X = 1,
		Y = 2,
		Z = 4,
		Free = 8,
	};
}
