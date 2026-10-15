#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameCharacterMoveDirection.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
namespace RPG::Client { class TimelineControlGamePlayerConfigAsset; }

namespace RPG::Client
{
	struct alignas(8) TimelineControlGamePuzzleBoard_PlayerConfig
	{
		::UnityEngine::Vector3Int initPos; // 0x10
		::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection initDirection; // 0x1C
		::UnityEngine::Vector3Int endPos; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TimelineControlGamePlayerConfigAsset* config; // 0x30
	};
}
