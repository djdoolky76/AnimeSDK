#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HeliobusRewardRow; }

#define RPG_GAMECORE_HELIOBUSREWARDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7644E0)
#define RPG_GAMECORE_HELIOBUSREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D763EF0)

namespace RPG::GameCore
{
	class HeliobusRewardRow : public ::System::Object
	{
	public:
		::System::UInt32 Level; // 0x10
		::System::UInt32 RewardQuestID; // 0x14
		::System::UInt32 IncomeTarget; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSREWARDROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::HeliobusRewardRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HeliobusRewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSREWARDROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
