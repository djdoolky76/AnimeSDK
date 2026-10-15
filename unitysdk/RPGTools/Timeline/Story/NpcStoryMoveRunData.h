#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
#include "unitysdk/RPGTools/Timeline/Story/BaseStoryMoveRunData.h"

#define RPGTOOLS_TIMELINE_STORY_NPCSTORYMOVERUNDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE93C8F0)

namespace RPGTools::Timeline::Story
{
	class NpcStoryMoveRunData : public ::RPGTools::Timeline::Story::BaseStoryMoveRunData
	{
	public:
		::RPG::GameCore::NPCBodySize NpcBodySize; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORY_NPCSTORYMOVERUNDATA_CTOR_OFFSET))(this);
		}

	};
}
