#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	enum class ParticleSystemSubEmitterProperties : ::System::Int32
	{
		InheritNothing = 0,
		InheritEverything = 31,
		InheritColor = 1,
		InheritSize = 2,
		InheritRotation = 4,
		InheritLifetime = 8,
		InheritDuration = 16,
	};
}
