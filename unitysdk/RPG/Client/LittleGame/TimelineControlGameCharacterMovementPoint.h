#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameLevelFloorPoint.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::LittleGame
{
	struct alignas(4) TimelineControlGameCharacterMovementPoint
	{
		::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint FloorPoint; // 0x10
		::UnityEngine::Vector3 Offset; // 0x14
	};
}
