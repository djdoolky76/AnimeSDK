#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DynamicResUpscaleFilter_TypeDefinitionIndex = 17823;

	enum class DynamicResUpscaleFilter : ::System::Byte
	{
		Bilinear = 0,
		CatmullRom = 1,
		Lanczos = 2,
		ContrastAdaptiveSharpen = 3,
	};
}
