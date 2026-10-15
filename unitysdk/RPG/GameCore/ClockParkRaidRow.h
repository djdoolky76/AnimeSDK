#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClockParkRaidRow; }

#define RPG_GAMECORE_CLOCKPARKRAIDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5C0B10)
#define RPG_GAMECORE_CLOCKPARKRAIDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5C0560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkRaidRow_TypeDefinitionIndex = 11192;

	class ClockParkRaidRow : public ::System::Object
	{
	public:
		::System::UInt32 RaidID; // 0x10
		::System::UInt32 RaidUnlockProgress; // 0x14
		::System::UInt32 RaidMapinfo; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKRAIDROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClockParkRaidRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClockParkRaidRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKRAIDROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
