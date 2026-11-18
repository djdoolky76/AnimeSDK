#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int RTXAOPass_RTXAOMode_TypeDefinitionIndex = 27290;

	enum class RTXAOPass_RTXAOMode : ::System::Int32
	{
		Inline = 1,
		ScreenSpace = 2,
		Hardware = 0,
	};
}
