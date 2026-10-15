#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	enum class MaterialGlobalIlluminationFlags : ::System::Int32
	{
		None = 0,
		RealtimeEmissive = 1,
		BakedEmissive = 2,
		EmissiveIsBlack = 4,
		AnyEmissive = 3,
	};
}
