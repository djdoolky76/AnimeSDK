#pragma once
#include "unitysdk/unitysdk.h"

namespace VLB
{
	enum class BlendingMode : ::System::Int32
	{
		Additive = 0,
		SoftAdditive = 1,
		TraditionalTransparency = 2,
		Overlay = 3,
	};
}
