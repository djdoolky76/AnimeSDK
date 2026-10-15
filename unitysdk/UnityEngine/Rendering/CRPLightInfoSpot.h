#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	struct alignas(4) CRPLightInfoSpot
	{
		::System::Single CookieAtten; // 0x10
		::System::Single CookieHeight; // 0x14
	};
}
