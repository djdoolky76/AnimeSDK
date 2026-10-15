#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngineInternal
{
	enum class LightmapType : ::System::Int32
	{
		NoLightmap = -1,
		StaticLightmap = 0,
		DynamicLightmap = 1,
	};
}
