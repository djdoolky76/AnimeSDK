#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BodySize.h"
#include "unitysdk/System/Object.h"
namespace RPGTools::Timeline::CharacterStoryMove { class StoryMoveSequenceClip; }

#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVE_AVATARSTORYMOVESEQUENCE_CTOR_OFFSET UNITYSDK_OFFSET(0xE8CE0C0)

namespace RPGTools::Timeline::CharacterStoryMove
{
	class AvatarStoryMoveSequence : public ::System::Object
	{
	public:
		::RPG::GameCore::BodySize BodySize; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPGTools::Timeline::CharacterStoryMove::StoryMoveSequenceClip*>* Clips; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVE_AVATARSTORYMOVESEQUENCE_CTOR_OFFSET))(this);
		}

	};
}
