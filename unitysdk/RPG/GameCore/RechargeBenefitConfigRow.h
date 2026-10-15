#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CumulativeConsumptionType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RechargeBenefitConfigRow; }

#define RPG_GAMECORE_RECHARGEBENEFITCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D970EC0)
#define RPG_GAMECORE_RECHARGEBENEFITCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D970D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RechargeBenefitConfigRow_TypeDefinitionIndex = 14618;

	class RechargeBenefitConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BenefitIDList; // 0x10
		::System::UInt32 ID; // 0x18
		::System::UInt32 ActivityModuleID; // 0x1C
		::RPG::GameCore::CumulativeConsumptionType Type; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECHARGEBENEFITCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RechargeBenefitConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RechargeBenefitConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECHARGEBENEFITCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
