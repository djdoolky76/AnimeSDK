#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClockParkAttribute; }
namespace RPG::GameCore { class ClockParkLotteryRow; }

#define RPG_GAMECORE_CLOCKPARKLOTTERYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5BEF40)
#define RPG_GAMECORE_CLOCKPARKLOTTERYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5BE8F0)

namespace RPG::GameCore
{
	class ClockParkLotteryRow : public ::System::Object
	{
	public:
		::RPG::GameCore::ClockParkAttribute* LotteryAttributeGain; // 0x10
		::System::UInt32 LotteryType; // 0x18
		::System::UInt32 Weight; // 0x1C
		::System::UInt32 LotteryID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKLOTTERYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClockParkLotteryRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClockParkLotteryRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKLOTTERYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
