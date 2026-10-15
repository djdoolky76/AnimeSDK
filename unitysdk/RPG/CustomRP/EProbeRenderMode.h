#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	enum class EProbeRenderMode : ::System::Int32
	{
		ProbePreBlend = 0,
		None = 1,
		DeferProbeBlend = 2,
	};
}
