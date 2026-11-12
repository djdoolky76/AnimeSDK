#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesLargeBonusMascotRow; }
namespace RPG::GameCore { class RangeConfig; }

#define RPG_GAMECORE_PLANETFESLARGEBONUSMASCOTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB414A0)
#define RPG_GAMECORE_PLANETFESLARGEBONUSMASCOTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EB411C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesLargeBonusMascotRow_TypeDefinitionIndex = 12318;

	class PlanetFesLargeBonusMascotRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* UnlockIDList; // 0x10
		::RPG::GameCore::RangeConfig* TapIncome; // 0x18
		::System::UInt32 TapCD; // 0x20
		::System::UInt32 ComboIncome; // 0x24
		::System::UInt32 TimePerSecond; // 0x28
		::System::UInt32 ID; // 0x2C
		::System::UInt32 BaseIncome; // 0x30
		::System::UInt32 Duration; // 0x34
		::System::UInt32 ActivityRewardID; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLARGEBONUSMASCOTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlanetFesLargeBonusMascotRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlanetFesLargeBonusMascotRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLARGEBONUSMASCOTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
