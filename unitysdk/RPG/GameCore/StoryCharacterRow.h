#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCSubType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StoryCharacterRow; }
namespace System { class String; }

#define RPG_GAMECORE_STORYCHARACTERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAF9EB0)
#define RPG_GAMECORE_STORYCHARACTERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DAF94A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StoryCharacterRow_TypeDefinitionIndex = 15183;

	class StoryCharacterRow : public ::System::Object
	{
	public:
		::System::String* StoryCharacterID; // 0x10
		::System::String* JsonPath; // 0x18
		::System::String* ConfigEntityPath; // 0x20
		::System::UInt32 CharacterID; // 0x28
		::RPG::GameCore::NPCSubType SubType; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYCHARACTERROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::StoryCharacterRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StoryCharacterRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYCHARACTERROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
