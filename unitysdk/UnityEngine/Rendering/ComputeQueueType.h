#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	enum class ComputeQueueType : ::System::Int32
	{
		Default = 0,
		Background = 1,
		Urgent = 2,
	};
}
