#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	enum class CapturePostProcessPass_EPostProcess : ::System::Int32
	{
		None = 0,
		Material = 1,
		WaterMark = 2,
		Blur = 4,
	};
}
