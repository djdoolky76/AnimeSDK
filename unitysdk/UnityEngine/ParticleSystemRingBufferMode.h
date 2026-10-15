#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	enum class ParticleSystemRingBufferMode : ::System::Int32
	{
		Disabled = 0,
		PauseUntilReplaced = 1,
		LoopUntilReplaced = 2,
	};
}
