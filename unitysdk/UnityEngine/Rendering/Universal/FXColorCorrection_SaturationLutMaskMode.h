#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int FXColorCorrection_SaturationLutMaskMode_TypeDefinitionIndex = 27258;

	enum class FXColorCorrection_SaturationLutMaskMode : ::System::Int32
	{
		SkipNonChar = 2,
		DefaultAll = 0,
		SkipChar = 1,
	};
}
