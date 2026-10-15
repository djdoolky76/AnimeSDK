#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	enum class EDebugPlatform : ::System::Int32
	{
		EDebugPC = 0,
		EDebugIOS = 1,
		EDebugAndroid = 2,
		EDebugPS5 = 3,
		EDebugPS4 = 4,
	};
}
