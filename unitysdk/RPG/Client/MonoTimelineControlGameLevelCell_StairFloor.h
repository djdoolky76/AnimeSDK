#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameLevelFloor.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameLevelRotation.h"
#include "unitysdk/RPG/Client/MonoTimelineControlGameLevelCell_FloorConfig.h"
#include "unitysdk/System/ValueTuple.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELCELL_STAIRFLOOR_CTOR_OFFSET UNITYSDK_OFFSET(0xD86CBA0)
#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELCELL_STAIRFLOOR_GICMJDNKHMK_OFFSET UNITYSDK_OFFSET(0xD86BA00)
#define RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELCELL_STAIRFLOOR_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xD86C520)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTimelineControlGameLevelCell_StairFloor_TypeDefinitionIndex = 60439;

	class MonoTimelineControlGameLevelCell_StairFloor : public ::RPG::Client::MonoTimelineControlGameLevelCell_FloorConfig
	{
	public:
		::RPG::Client::LittleGame::ETimelineControlGameLevelRotation rotation; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELCELL_STAIRFLOOR_CTOR_OFFSET))(this);
		}

		::System::ValueTuple KFGJEKJHIMB(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::ValueTuple(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELCELL_STAIRFLOOR_KFGJEKJHIMB_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::LittleGame::ETimelineControlGameLevelFloor GICMJDNKHMK()
		{
			return ((::RPG::Client::LittleGame::ETimelineControlGameLevelFloor(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMELINECONTROLGAMELEVELCELL_STAIRFLOOR_GICMJDNKHMK_OFFSET))(this);
		}

	};
}
