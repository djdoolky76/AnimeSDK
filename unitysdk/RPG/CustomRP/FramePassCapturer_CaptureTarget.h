#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	enum class FramePassCapturer_CaptureTarget : ::System::Int32
	{
		OnlyParam = 0,
		ReflectionProbePass = 1,
		AmbientTexPass = 2,
	};
}
