#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	struct alignas(4) CRPLightInfoFade
	{
		::System::Single ShadowLightingFactor; // 0x10
	};
}
