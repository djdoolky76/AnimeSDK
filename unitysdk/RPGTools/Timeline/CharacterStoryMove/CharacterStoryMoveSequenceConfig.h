#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BodySize.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace RPGTools::Timeline::CharacterStoryMove { class AvatarStoryMoveSequence; }
namespace RPGTools::Timeline::CharacterStoryMove { class AvatarStoryMoveSequenceConfig; }
namespace RPGTools::Timeline::CharacterStoryMove { class NPCStoryMoveSequence; }
namespace RPGTools::Timeline::CharacterStoryMove { class NPCStoryMoveSequenceConfig; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVE_CHARACTERSTORYMOVESEQUENCECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xE8C3C00)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVE_CHARACTERSTORYMOVESEQUENCECONFIG_PAABEMLAHOL_1_OFFSET UNITYSDK_OFFSET(0xE8C3A90)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVE_CHARACTERSTORYMOVESEQUENCECONFIG_PAABEMLAHOL_OFFSET UNITYSDK_OFFSET(0xE8C3920)

namespace RPGTools::Timeline::CharacterStoryMove
{
	inline static constexpr unsigned int CharacterStoryMoveSequenceConfig_TypeDefinitionIndex = 48713;

	class CharacterStoryMoveSequenceConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::Il2CppArray<::RPGTools::Timeline::CharacterStoryMove::AvatarStoryMoveSequenceConfig*>* AvatarSequences; // 0x18
		::Il2CppArray<::RPGTools::Timeline::CharacterStoryMove::NPCStoryMoveSequenceConfig*>* NPCSequences; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVE_CHARACTERSTORYMOVESEQUENCECONFIG_CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::CharacterStoryMove::AvatarStoryMoveSequence* PAABEMLAHOL(::System::String* a1, ::RPG::GameCore::BodySize a2)
		{
			return ((::RPGTools::Timeline::CharacterStoryMove::AvatarStoryMoveSequence*(*)(::PVOID, ::System::String*, ::RPG::GameCore::BodySize))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVE_CHARACTERSTORYMOVESEQUENCECONFIG_PAABEMLAHOL_OFFSET))(this, a1, a2);
		}

		::RPGTools::Timeline::CharacterStoryMove::NPCStoryMoveSequence* PAABEMLAHOL_1(::System::String* a1, ::RPG::GameCore::NPCBodySize a2)
		{
			return ((::RPGTools::Timeline::CharacterStoryMove::NPCStoryMoveSequence*(*)(::PVOID, ::System::String*, ::RPG::GameCore::NPCBodySize))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVE_CHARACTERSTORYMOVESEQUENCECONFIG_PAABEMLAHOL_1_OFFSET))(this, a1, a2);
		}

	};
}
