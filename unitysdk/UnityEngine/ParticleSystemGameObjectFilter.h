#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	enum class ParticleSystemGameObjectFilter : ::System::Int32
	{
		LayerMask = 0,
		List = 1,
		LayerMaskAndList = 2,
	};
}
