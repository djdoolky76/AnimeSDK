#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	enum class EDebugOCFlag : ::System::Int32
	{
		None = 0,
		Atlas = 1,
		MipCopy = 2,
	};
}
