#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	enum class EDebugRT : ::System::Int32
	{
		None = 0,
		MainLight = 1,
		AddLight = 2,
		CustomGBuffer = 3,
		DebugRT = 4,
		Num = 5,
	};
}
