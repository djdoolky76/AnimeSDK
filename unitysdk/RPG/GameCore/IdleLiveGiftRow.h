#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/IdleLiveGiftSourceType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveGiftRow; }
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVEGIFTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E98FE40)
#define RPG_GAMECORE_IDLELIVEGIFTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E98F980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveGiftRow_TypeDefinitionIndex = 11858;

	class IdleLiveGiftRow : public ::System::Object
	{
	public:
		::System::String* Icon; // 0x10
		::System::UInt32 FinalActChapterIndex; // 0x18
		::RPG::GameCore::IdleLiveGiftSourceType SourceType; // 0x1C
		::System::UInt32 ID; // 0x20
		::System::UInt32 UnlockID; // 0x24
		::System::Single ProtectTime; // 0x28
		::System::UInt32 DonateValue; // 0x2C
		::System::Single FlySpeed; // 0x30
		::System::UInt32 SenderID; // 0x34
		::System::UInt32 TriggerID; // 0x38
		::System::UInt32 SourceID; // 0x3C
		::System::UInt32 RewardID; // 0x40
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID MainText; // 0x48
		::System::UInt32 RarityType; // 0x58
		::System::UInt32 Count; // 0x5C
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
