#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveFinalActGiftRow; }

#define RPG_GAMECORE_IDLELIVEFINALACTGIFTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D77B6F0)
#define RPG_GAMECORE_IDLELIVEFINALACTGIFTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D77B580)

namespace RPG::GameCore
{
	class IdleLiveFinalActGiftRow : public ::System::Object
	{
	public:
		::System::UInt32 RewardID; // 0x10
		::System::UInt32 ID; // 0x14
		::System::UInt32 FinalAct; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEFINALACTGIFTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveFinalActGiftRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveFinalActGiftRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEFINALACTGIFTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
