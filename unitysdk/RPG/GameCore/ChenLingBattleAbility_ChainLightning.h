#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityNodeConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleTargetEvaluator; }
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class ChenLingBattleAbility_ChainLightning; }
namespace RPG::GameCore { class ChenLingBattleEffectConfig; }
namespace RPG::GameCore { class ChenLingBattleResource_OnHit; }
namespace RPG::GameCore { class ChenLingBattleTriggerCallback; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITY_CHAINLIGHTNING_CTOR_OFFSET UNITYSDK_OFFSET(0x1D551B40)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_CHAINLIGHTNING_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D551B50)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_CHAINLIGHTNING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D551AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAbility_ChainLightning_TypeDefinitionIndex = 15734;

	class ChenLingBattleAbility_ChainLightning : public ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig
	{
	public:
		::RPG::GameCore::BaseChenLingBattleTargetEvaluator* Targets; // 0x10
		::RPG::GameCore::BaseChenLingBattleValueGetter* Damage; // 0x18
		::RPG::GameCore::BaseChenLingBattleValueGetter* ChainNum; // 0x20
		::RPG::GameCore::BaseChenLingBattleValueGetter* ChainRange; // 0x28
		::RPG::GameCore::BaseChenLingBattleValueGetter* JumpInterval; // 0x30
		::RPG::GameCore::ChenLingBattleEffectConfig* EffectConfig; // 0x38
		::RPG::GameCore::ChenLingBattleResource_OnHit* OnHitResource; // 0x40
		::RPG::GameCore::ChenLingBattleTriggerCallback* OnHitCallback; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_CHAINLIGHTNING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAbility_ChainLightning* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAbility_ChainLightning*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_CHAINLIGHTNING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAbility_ChainLightning* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAbility_ChainLightning*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_CHAINLIGHTNING_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
