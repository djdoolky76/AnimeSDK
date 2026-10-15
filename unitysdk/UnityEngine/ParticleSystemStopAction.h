#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	enum class ParticleSystemStopAction : ::System::Int32
	{
		None = 0,
		Disable = 1,
		Destroy = 2,
		Callback = 3,
	};
}
