#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::NVIDIA
{
	enum class PluginEvent : ::System::Int32
	{
		DestroyFeature = 0,
		DLSSExecute = 1,
		DLSSInit = 2,
	};
}
