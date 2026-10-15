#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	enum class MixedLightingMode : ::System::Int32
	{
		IndirectOnly = 0,
		Shadowmask = 2,
		Subtractive = 1,
	};
}
