#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int PostProcessPass_EPostProcessShaderQualityLevel_TypeDefinitionIndex = 26466;

	enum class PostProcessPass_EPostProcessShaderQualityLevel : ::System::Int32
	{
		Num = 3,
		Low = 0,
		High = 2,
		Medium = 1,
	};
}
