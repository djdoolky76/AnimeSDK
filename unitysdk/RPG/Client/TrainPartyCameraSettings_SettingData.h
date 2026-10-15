#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client
{
	struct alignas(4) TrainPartyCameraSettings_SettingData
	{
		::UnityEngine::Vector3 offset; // 0x10
	};
}
