#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceBasePredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceAndPredicateConfig; }
namespace RPG::GameCore { class CakeRaceBasePredicateConfig; }

#define RPG_GAMECORE_CAKERACEANDPREDICATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D54AA10)
#define RPG_GAMECORE_CAKERACEANDPREDICATECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D54AA20)
#define RPG_GAMECORE_CAKERACEANDPREDICATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D54A9C0)

namespace RPG::GameCore
{
	class CakeRaceAndPredicateConfig : public ::RPG::GameCore::CakeRaceBasePredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::CakeRaceBasePredicateConfig*>* Predicates; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEANDPREDICATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceAndPredicateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceAndPredicateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEANDPREDICATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceAndPredicateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceAndPredicateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEANDPREDICATECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
