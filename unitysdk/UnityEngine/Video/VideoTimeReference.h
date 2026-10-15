#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Video
{
	enum class VideoTimeReference : ::System::Int32
	{
		Freerun = 0,
		InternalTime = 1,
		ExternalTime = 2,
	};
}
