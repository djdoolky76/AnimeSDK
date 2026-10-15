#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::CustomRP
{
	struct alignas(4) CustomAdditionalLightData_LocalLightParamExt
	{
		::UnityEngine::Color Color; // 0x10
		::UnityEngine::Vector2 Distance; // 0x20
		::System::Single DistancePow; // 0x28
		::System::Single DistanceStrength; // 0x2C
		::UnityEngine::Color DarkSkinColor; // 0x30
	};
}
