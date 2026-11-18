#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VolumetricFogBlitOrder_TypeDefinitionIndex = 27014;

	enum class VolumetricFogBlitOrder : ::System::Int32
	{
		BeforeAllTransparent = 0,
		AfterAllTransparent = 2,
		AfterSceneFarTransparent = 1,
	};
}
