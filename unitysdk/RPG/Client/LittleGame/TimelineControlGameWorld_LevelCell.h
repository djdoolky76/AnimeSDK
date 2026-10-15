#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameLevelFloor.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
class HFGDHMDFFHL;

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int TimelineControlGameWorld_LevelCell_TypeDefinitionIndex = 42514;

	struct alignas(8) TimelineControlGameWorld_LevelCell
	{
		::System::Boolean Visible; // 0x10
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3Int LocalPosition; // 0x14
		::RPG::Client::LittleGame::ETimelineControlGameLevelFloor Floor; // 0x20
		::System::Byte _padding1[0x4];
		::HFGDHMDFFHL* Debug; // 0x28
	};
}
