#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Windows::Speech
{
	enum class SpeechSystemStatus : ::System::Int32
	{
		Stopped = 0,
		Running = 1,
		Failed = 2,
	};
}
