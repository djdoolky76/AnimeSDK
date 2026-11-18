#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int FXColorCorrection_FxMaskLutMode_TypeDefinitionIndex = 27260;

	enum class FXColorCorrection_FxMaskLutMode : ::System::Int32
	{
		ClipPlaneMask = 1,
		TextureMask = 0,
	};
}
