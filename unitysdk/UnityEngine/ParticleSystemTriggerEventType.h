#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	enum class ParticleSystemTriggerEventType : ::System::Int32
	{
		Inside = 0,
		Outside = 1,
		Enter = 2,
		Exit = 3,
	};
}
