#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ITalkOptionExtData; }
namespace RPG::Client { class RogueTalkOptionDataExt; }
namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }

#define RPG_CLIENT_TALKOPTIONDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xEC533F0)

namespace RPG::Client
{
	inline static constexpr unsigned int TalkOptionData_TypeDefinitionIndex = 69984;

	class TalkOptionData : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::GameCore::JsonEnum* OptionIconType; // 0x18
		::RPG::Client::ITalkOptionExtData* ExtData; // 0x20
		::RPG::Client::RogueTalkOptionDataExt* RogueExt; // 0x28
		::RPG::Client::TextID Text; // 0x30
		::System::UInt32 TalkSentenceID; // 0x40
		::System::UInt32 MenuItemExtraInfo; // 0x44
		::System::Boolean DeleteAfterSelection; // 0x48
		::System::Boolean IsLastSelected; // 0x49
		::System::Boolean HasTriggered; // 0x4A
		::System::Boolean IsSkipDefault; // 0x4B
		::System::UInt32 DialogueGroupID; // 0x4C
		::System::Int32 InfoIndex; // 0x50
		::System::UInt32 SubMissionIDForMenuItem; // 0x54
		::System::Boolean IsValid; // 0x58
		::System::Boolean HasBeenTriggeredLogic; // 0x59
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKOPTIONDATA_CTOR_OFFSET))(this);
		}

	};
}
