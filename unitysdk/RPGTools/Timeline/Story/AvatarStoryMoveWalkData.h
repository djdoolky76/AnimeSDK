#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BodySize.h"
#include "unitysdk/RPGTools/Timeline/Story/BaseStoryMoveWalkData.h"

#define RPGTOOLS_TIMELINE_STORY_AVATARSTORYMOVEWALKDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA1D200)

namespace RPGTools::Timeline::Story
{
	inline static constexpr unsigned int AvatarStoryMoveWalkData_TypeDefinitionIndex = 49752;

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
