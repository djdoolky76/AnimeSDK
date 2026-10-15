#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceAbilityConfig; }
namespace RPG::GameCore { class CakeRaceActionSpawnAbility; }

#define RPG_GAMECORE_CAKERACEACTIONSPAWNABILITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D51C590)
#define RPG_GAMECORE_CAKERACEACTIONSPAWNABILITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D51C5A0)
#define RPG_GAMECORE_CAKERACEACTIONSPAWNABILITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D51C4D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionSpawnAbility_TypeDefinitionIndex = 18360;

	class CakeRaceActionSpawnAbility : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::RPG::GameCore::CakeRaceAbilityConfig* AbilityConfig; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONSPAWNABILITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionSpawnAbility* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionSpawnAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONSPAWNABILITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionSpawnAbility* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionSpawnAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONSPAWNABILITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
