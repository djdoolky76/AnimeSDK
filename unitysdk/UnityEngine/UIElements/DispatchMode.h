#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UIElements
{
	enum class DispatchMode : ::System::Int32
	{
		Default = 1,
		Queued = 1,
		Immediate = 2,
	};
}
