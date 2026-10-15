#pragma once
#include "unitysdk/unitysdk.h"

namespace ParticleRecorder
{
	enum class ParticleRecorderState : ::System::Int32
	{
		kStopped = 0,
		kBegin = 1,
		kLoop = 2,
		kBackwardLoop = 3,
		kBackwardEnd = 4,
	};
}
