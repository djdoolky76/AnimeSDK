#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class FrameCaptureManager_CaptureUsage : ::System::Int32
	{
		None = 0,
		TurnPage = 1,
		FramBlend = 2,
	};
}
