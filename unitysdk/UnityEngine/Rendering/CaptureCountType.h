#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	enum class CaptureCountType : ::System::Int32
	{
		kCaptureStop = 0,
		kCaptureAlways = -1,
		kCaptureOnce = 1,
	};
}
