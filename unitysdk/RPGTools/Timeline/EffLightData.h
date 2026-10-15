#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPGTools::Timeline
{
	struct alignas(4) EffLightData
	{
		::UnityEngine::Vector3 CustomLightDir; // 0x10
		::UnityEngine::Vector3 CustomPosition; // 0x1C
	};
}
