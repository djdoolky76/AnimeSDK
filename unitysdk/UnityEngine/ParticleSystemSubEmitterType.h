#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	enum class ParticleSystemSubEmitterType : ::System::Int32
	{
		Birth = 0,
		Collision = 1,
		Death = 2,
		Trigger = 3,
		Manual = 4,
	};
}
