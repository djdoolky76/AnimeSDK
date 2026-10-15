#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/IdleLiveGiftSourceType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveGiftRow; }
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVEGIFTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D77C710)
#define RPG_GAMECORE_IDLELIVEGIFTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D77C250)

namespace RPG::GameCore
{
	class IdleLiveGiftRow : public ::System::Object
	{
	public:
		::System::String* Icon; // 0x10
		::RPG::GameCore::IdleLiveGiftSourceType SourceType; // 0x18
		::System::UInt32 TriggerID; // 0x1C
		::System::UInt32 FinalActChapterIndex; // 0x20
		::System::UInt32 DonateValue; // 0x24
		::System::UInt32 SourceID; // 0x28
		::System::UInt32 RarityType; // 0x2C
		::RPG::Client::TextID MainText; // 0x30
		::System::Single ProtectTime; // 0x40
		::System::Single FlySpeed; // 0x44
		::System::UInt32 SenderID; // 0x48
		::System::UInt32 UnlockID; // 0x4C
		::System::UInt32 ID; // 0x50
		::System::UInt32 RewardID; // 0x54
		::System::UInt32 Count; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEGIFTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveGiftRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveGiftRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEGIFTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
