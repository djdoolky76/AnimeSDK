#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BodySize.h"
#include "unitysdk/RPGTools/Timeline/Story/BaseStoryMoveRunData.h"

#define RPGTOOLS_TIMELINE_STORY_AVATARSTORYMOVERUNDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA1D1E0)

namespace RPGTools::Timeline::Story
{
	inline static constexpr unsigned int AvatarStoryMoveRunData_TypeDefinitionIndex = 49753;

	class AvatarStoryMoveRunData : public ::RPGTools::Timeline::Story::BaseStoryMoveRunData
	{
	public:
		::RPG::GameCore::BodySize BodySize; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORY_AVATARSTORYMOVERUNDATA_CTOR_OFFSET))(this);
		}

	};
}
