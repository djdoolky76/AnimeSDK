#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityNodeConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class BaseChenLingBattleTargetEvaluator; }
namespace RPG::GameCore { class ChenLingBattleAbility_Dash; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITY_DASH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5525F0)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_DASH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D552600)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_DASH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5525A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAbility_Dash_TypeDefinitionIndex = 15732;

	class ChenLingBattleAbility_Dash : public ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig
	{
	public:
		::RPG::GameCore::BaseChenLingBattleTargetEvaluator* DashTarget; // 0x10
		::System::Single RotationSpeed; // 0x18
		::System::Single DashSpeed; // 0x1C
		::System::Single StartDashNormalizedTime; // 0x20
		::System::Single EndDashNormalizedTime; // 0x24
		::Il2CppArray<::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*>* OnCollision; // 0x28
		::Il2CppArray<::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*>* OnStartDash; // 0x30
		::System::Single CollisionRadius; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_DASH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAbility_Dash* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAbility_Dash*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_DASH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAbility_Dash* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAbility_Dash*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_DASH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
