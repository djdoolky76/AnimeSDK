#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CRPLightInfoSpot_TypeDefinitionIndex = 4883;

	struct alignas(4) CRPLightInfoSpot
	{
		::System::Single CookieAtten; // 0x10
		::System::Single CookieHeight; // 0x14
	};
}
