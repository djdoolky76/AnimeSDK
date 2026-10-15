#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	enum class CullMode : ::System::Int32
	{
		Off = 0,
		Front = 1,
		Back = 2,
	};
}
