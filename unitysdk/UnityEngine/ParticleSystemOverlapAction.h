#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	enum class ParticleSystemOverlapAction : ::System::Int32
	{
		Ignore = 0,
		Kill = 1,
		Callback = 2,
	};
}
