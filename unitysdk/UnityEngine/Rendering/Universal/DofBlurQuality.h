#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DofBlurQuality_TypeDefinitionIndex = 27135;

	enum class DofBlurQuality : ::System::Int32
	{
		Low = 0,
		High = 2,
		Medium = 1,
	};
}
