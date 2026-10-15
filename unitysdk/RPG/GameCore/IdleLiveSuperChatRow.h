#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveSuperChatRow; }

#define RPG_GAMECORE_IDLELIVESUPERCHATROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7807D0)
#define RPG_GAMECORE_IDLELIVESUPERCHATROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D780510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveSuperChatRow_TypeDefinitionIndex = 11798;

	class IdleLiveSuperChatRow : public ::System::Object
	{
	public:
		::System::UInt32 RewardID; // 0x10
		::System::UInt32 ID; // 0x14
		::System::UInt32 TriggerID; // 0x18
		::System::UInt32 UnlockID; // 0x1C
		::RPG::Client::TextID MainText; // 0x20
		::System::Single Duration; // 0x30
		::System::UInt32 ScSenderID; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVESUPERCHATROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveSuperChatRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveSuperChatRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVESUPERCHATROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
