#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityNodeConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleTargetEvaluator; }
namespace RPG::GameCore { class ChenLingBattleAbility_FireVisualEffect; }
namespace RPG::GameCore { class ChenLingBattleEffectConfig; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITY_FIREVISUALEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D552DD0)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_FIREVISUALEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D552DE0)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_FIREVISUALEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D552D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAbility_FireVisualEffect_TypeDefinitionIndex = 15736;

	class ChenLingBattleAbility_FireVisualEffect : public ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig
	{
	public:
		::RPG::GameCore::ChenLingBattleEffectConfig* EffectConfig; // 0x10
		::RPG::GameCore::BaseChenLingBattleTargetEvaluator* EffectTargets; // 0x18
		::RPG::MVector3 ExtraPositionDelta; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_FIREVISUALEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAbility_FireVisualEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAbility_FireVisualEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_FIREVISUALEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAbility_FireVisualEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAbility_FireVisualEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_FIREVISUALEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
