#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameCharacterVisionConfig.h"
#include "unitysdk/RPG/Client/TimelineControlGameCharacterConfigAsset.h"

#define RPG_CLIENT_TIMELINECONTROLGAMEMONSTERCONFIGASSET_CTOR_OFFSET UNITYSDK_OFFSET(0xE2A9A80)

namespace RPG::Client
{
	class TimelineControlGameMonsterConfigAsset : public ::RPG::Client::TimelineControlGameCharacterConfigAsset
	{
	public:
		::RPG::Client::LittleGame::TimelineControlGameCharacterVisionConfig visionConfig; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINECONTROLGAMEMONSTERCONFIGASSET_CTOR_OFFSET))(this);
		}

	};
}
