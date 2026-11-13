#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/IdleLiveGiftEffectType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ActivityIdleLive { class GiftSenderUiData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveGiftUiData; }
namespace RPG::GameCore { class IdleLiveGiftRow; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTUIDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1D6C2980)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTUIDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C31C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTUIDATA__INITGIFTCONTENT_OFFSET UNITYSDK_OFFSET(0x1D6C31D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTUIDATA__INITSENDERICON_OFFSET UNITYSDK_OFFSET(0x1D6C33A0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveGiftUiData_TypeDefinitionIndex = 77752;

	class IdleLiveGiftUiData : public ::System::Object
	{
	public:
		::System::String* SenderIcon; // 0x10
		::System::String* Icon; // 0x18
		::System::String* AbilityName; // 0x20
		::RPG::Client::ActivityIdleLive::GiftSenderUiData* SenderUiData; // 0x28
		::RPG::GameCore::IdleLiveGiftEffectType EffectType; // 0x30
		::System::Single FlySpeed; // 0x34
		::System::Boolean HasAbility; // 0x38
		::System::Byte _padding0[0x3];
		::System::UInt32 Rarity; // 0x3C
		::System::UInt32 ItemId; // 0x40
		::System::UInt32 GiftId; // 0x44
		::System::UInt32 Count; // 0x48
		::System::Single ProtectTime; // 0x4C
		::RPG::Client::TextID Content; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTUIDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveGiftUiData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveGiftUiData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTUIDATA_CREATE_OFFSET))(a1);
		}

		::System::Void _InitGiftContent(::RPG::GameCore::IdleLiveGiftRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveGiftRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTUIDATA__INITGIFTCONTENT_OFFSET))(this, a1);
		}

		::System::Void _InitSenderIcon(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGIFTUIDATA__INITSENDERICON_OFFSET))(this, a1);
		}

	};
}
