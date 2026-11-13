#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PetMarbleTalkTriggerType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_PETMARBLE_PETMARBLEBATTLEPETTALKCONTROLLER_PETMARBLEBATTLEPETTALKCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C1EC5E0)

namespace RPG::Client::PetMarble
{
	inline static constexpr unsigned int PetMarbleBattlePetTalkController_PetMarbleBattlePetTalkConfig_TypeDefinitionIndex = 76851;

	class PetMarbleBattlePetTalkController_PetMarbleBattlePetTalkConfig : public ::System::Object
	{
	public:
		::System::String* VoiceEvt; // 0x10
		::RPG::GameCore::PetMarbleTalkTriggerType TriggerType; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID TalkContent; // 0x20
		::System::UInt32 TalkID; // 0x30
		::System::Single DelayTime; // 0x34
		::System::UInt32 PetID; // 0x38
		::System::UInt32 EntityID; // 0x3C
		::System::Boolean IsEmpty; // 0x40
		::System::Byte _padding1[0x3];
		::System::Single DurationTime; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEBATTLEPETTALKCONTROLLER_PETMARBLEBATTLEPETTALKCONFIG_CTOR_OFFSET))(this);
		}

	};
}
