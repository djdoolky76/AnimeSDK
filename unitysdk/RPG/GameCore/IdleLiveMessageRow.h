#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveMessageRow; }

#define RPG_GAMECORE_IDLELIVEMESSAGEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D77D070)
#define RPG_GAMECORE_IDLELIVEMESSAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D77CE80)

namespace RPG::GameCore
{
	class IdleLiveMessageRow : public ::System::Object
	{
	public:
		::System::UInt32 RewardID; // 0x10
		::System::UInt32 UnlockID; // 0x14
		::System::UInt32 TriggerID; // 0x18
		::System::UInt32 MessageID; // 0x1C
		::System::UInt32 StartContentID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEMESSAGEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveMessageRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveMessageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEMESSAGEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
