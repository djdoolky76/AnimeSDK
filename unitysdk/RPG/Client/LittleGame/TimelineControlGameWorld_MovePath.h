#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

namespace RPG::Client::LittleGame
{
	struct alignas(4) TimelineControlGameWorld_MovePath
	{
		::System::Single CostTime; // 0x10
		::UnityEngine::Vector3Int DeltaMove; // 0x14
	};
}
