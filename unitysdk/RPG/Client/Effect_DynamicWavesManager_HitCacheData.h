#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_DynamicWavesManager_HitData.h"

namespace RPG::Client
{
	struct alignas(4) Effect_DynamicWavesManager_HitCacheData
	{
		::RPG::Client::Effect_DynamicWavesManager_HitData hitData; // 0x10
		::System::Boolean onCollisionEnter; // 0x38
	};
}
