#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityConditionChecker.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class ChenLingBattleAbilityConditionChecker_EnemyWithinRadius; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ENEMYWITHINRADIUS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D550820)
#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ENEMYWITHINRADIUS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D550830)
#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ENEMYWITHINRADIUS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5507D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAbilityConditionChecker_EnemyWithinRadius_TypeDefinitionIndex = 15720;

	class ChenLingBattleAbilityConditionChecker_EnemyWithinRadius : public ::RPG::GameCore::BaseChenLingBattleAbilityConditionChecker
	{
	public:
		::RPG::GameCore::BaseChenLingBattleValueGetter* Radius; // 0x10
		::System::Boolean IntersectWithTargetCollsion; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ENEMYWITHINRADIUS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_EnemyWithinRadius* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_EnemyWithinRadius*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ENEMYWITHINRADIUS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_EnemyWithinRadius* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_EnemyWithinRadius*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ENEMYWITHINRADIUS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
