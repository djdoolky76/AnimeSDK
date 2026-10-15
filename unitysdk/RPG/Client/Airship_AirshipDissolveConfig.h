#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"

namespace RPG::Client
{
	struct alignas(4) Airship_AirshipDissolveConfig
	{
		::System::Single DissolveRange; // 0x10
		::UnityEngine::Color DissolveEmissionColor; // 0x14
		::System::Single DissolveEmissionIntensity; // 0x24
	};
}
