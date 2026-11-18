#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ScanType_TypeDefinitionIndex = 26577;

	enum class ScanType : ::System::Int32
	{
		Linear = 0,
		RadialFromAvatar = 2,
		RadialFromCustom = 3,
		RadialFromCamera = 1,
	};
}
