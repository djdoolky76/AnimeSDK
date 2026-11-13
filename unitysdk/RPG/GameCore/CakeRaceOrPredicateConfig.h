#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceBasePredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceBasePredicateConfig; }
namespace RPG::GameCore { class CakeRaceOrPredicateConfig; }

#define RPG_GAMECORE_CAKERACEORPREDICATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBF6DC0)
#define RPG_GAMECORE_CAKERACEORPREDICATECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EBF6DD0)
#define RPG_GAMECORE_CAKERACEORPREDICATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EBFCC00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceOrPredicateConfig_TypeDefinitionIndex = 18534;

	class CakeRaceOrPredicateConfig : public ::RPG::GameCore::CakeRaceBasePredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::CakeRaceBasePredicateConfig*>* Predicates; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEORPREDICATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceOrPredicateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceOrPredicateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEORPREDICATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceOrPredicateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceOrPredicateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEORPREDICATECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
