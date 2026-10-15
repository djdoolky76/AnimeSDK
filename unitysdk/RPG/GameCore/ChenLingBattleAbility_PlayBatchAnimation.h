#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityNodeConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleTargetEvaluator; }
namespace RPG::GameCore { class ChenLingBattleAbility_PlayBatchAnimation; }
namespace RPG::GameCore { class ChenLingBattleAnimEventConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITY_PLAYBATCHANIMATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D553270)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_PLAYBATCHANIMATION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D553280)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_PLAYBATCHANIMATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D553220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAbility_PlayBatchAnimation_TypeDefinitionIndex = 15740;

	class ChenLingBattleAbility_PlayBatchAnimation : public ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig
	{
	public:
		::System::String* AnimationName; // 0x10
		::RPG::GameCore::BaseChenLingBattleTargetEvaluator* Targets; // 0x18
		::Il2CppArray<::RPG::GameCore::ChenLingBattleAnimEventConfig*>* AnimEvents; // 0x20
		::System::Boolean IsAffectByAttackSpeed; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_PLAYBATCHANIMATION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAbility_PlayBatchAnimation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAbility_PlayBatchAnimation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_PLAYBATCHANIMATION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAbility_PlayBatchAnimation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAbility_PlayBatchAnimation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_PLAYBATCHANIMATION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
