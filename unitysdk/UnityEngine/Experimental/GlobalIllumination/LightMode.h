#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Experimental::GlobalIllumination
{
	inline static constexpr unsigned int LightMode_TypeDefinitionIndex = 6327;

	enum class LightMode : ::System::Byte
	{
		Realtime = 0,
		Mixed = 1,
		Baked = 2,
		Unknown = 3,
	};
}
