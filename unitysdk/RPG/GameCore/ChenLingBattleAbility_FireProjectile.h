#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityNodeConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleTargetEvaluator; }
namespace RPG::GameCore { class ChenLingBattleAbility_FireProjectile; }
namespace RPG::GameCore { class ChenLingBattleBulletConfig; }
namespace RPG::GameCore { class ChenLingBattleTriggerCallback; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITY_FIREPROJECTILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D580360)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_FIREPROJECTILE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D580370)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_FIREPROJECTILE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D580310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAbility_FireProjectile_TypeDefinitionIndex = 15709;

	class ChenLingBattleAbility_FireProjectile : public ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig
	{
	public:
		::RPG::GameCore::BaseChenLingBattleTargetEvaluator* Attacker; // 0x10
		::RPG::GameCore::BaseChenLingBattleTargetEvaluator* Targets; // 0x18
		::RPG::GameCore::ChenLingBattleBulletConfig* BulletConfig; // 0x20
		::RPG::GameCore::ChenLingBattleTriggerCallback* OnHitCallback; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_FIREPROJECTILE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAbility_FireProjectile* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAbility_FireProjectile*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_FIREPROJECTILE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAbility_FireProjectile* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAbility_FireProjectile*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_FIREPROJECTILE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
