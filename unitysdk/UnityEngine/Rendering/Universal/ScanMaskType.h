#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ScanMaskType_TypeDefinitionIndex = 26281;

	enum class ScanMaskType : ::System::Int32
	{
		WorldSpace = 1,
		Screen = 0,
	};
}
