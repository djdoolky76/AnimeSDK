#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClockParkProgressRewardRow; }

#define RPG_GAMECORE_CLOCKPARKPROGRESSREWARDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5BFD20)
#define RPG_GAMECORE_CLOCKPARKPROGRESSREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5BF780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkProgressRewardRow_TypeDefinitionIndex = 11196;

	class ClockParkProgressRewardRow : public ::System::Object
	{
	public:
		::System::UInt32 QuestProgress; // 0x10
		::System::UInt32 QuestID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKPROGRESSREWARDROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClockParkProgressRewardRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClockParkProgressRewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKPROGRESSREWARDROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
