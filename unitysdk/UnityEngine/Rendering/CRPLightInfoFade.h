#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CRPLightInfoFade_TypeDefinitionIndex = 4887;

	struct alignas(4) CRPLightInfoFade
	{
		::System::Single ShadowLightingFactor; // 0x10
	};
}
