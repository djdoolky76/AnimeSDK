#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BodySize.h"
#include "unitysdk/RPGTools/Timeline/Story/BaseStoryMoveWalkData.h"

#define RPGTOOLS_TIMELINE_STORY_AVATARSTORYMOVEWALKDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE93C8B0)

namespace RPGTools::Timeline::Story
{
	class AvatarStoryMoveWalkData : public ::RPGTools::Timeline::Story::BaseStoryMoveWalkData
	{
	public:
		::RPG::GameCore::BodySize BodySize; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORY_AVATARSTORYMOVEWALKDATA_CTOR_OFFSET))(this);
		}

	};
}
