#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ClockParkRoundType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClockParkRoundRow; }

#define RPG_GAMECORE_CLOCKPARKROUNDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F50A5A0)
#define RPG_GAMECORE_CLOCKPARKROUNDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F509F40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkRoundRow_TypeDefinitionIndex = 11185;

	class ClockParkRoundRow : public ::System::Object
	{
	public:
		::RPG::GameCore::ClockParkRoundType RoundType; // 0x10
		::System::UInt32 RoundID; // 0x14
		::System::Boolean DiceSpecialDisplay; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKROUNDROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClockParkRoundRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClockParkRoundRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKROUNDROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
