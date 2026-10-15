#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityNodeConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleTargetEvaluator; }
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class ChenLingBattleAbility_CreateLaser; }
namespace RPG::GameCore { class ChenLingBattleEffectTier; }
namespace RPG::GameCore { class ChenLingBattleLaserSplitConfig; }
namespace RPG::GameCore { class ChenLingBattleResource_OnHit; }
namespace RPG::GameCore { class ChenLingBattleTriggerCallback; }
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITY_CREATELASER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D57FCC0)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_CREATELASER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D57FCD0)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_CREATELASER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D57FC70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAbility_CreateLaser_TypeDefinitionIndex = 15744;

	class ChenLingBattleAbility_CreateLaser : public ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig
	{
	public:
		::System::String* BulletPath; // 0x10
		::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>* EffectTiers; // 0x18
		::RPG::GameCore::BaseChenLingBattleTargetEvaluator* Attacker; // 0x20
		::RPG::GameCore::BaseChenLingBattleTargetEvaluator* Targets; // 0x28
		::System::String* FireAttachPointName; // 0x30
		::System::String* HitAttachPointName; // 0x38
		::RPG::GameCore::BaseChenLingBattleValueGetter* DamageInterval; // 0x40
		::RPG::GameCore::BaseChenLingBattleValueGetter* Duration; // 0x48
		::RPG::GameCore::ChenLingBattleResource_OnHit* OnHitResource; // 0x50
		::RPG::GameCore::ChenLingBattleTriggerCallback* OnHitCallback; // 0x58
		::RPG::GameCore::ChenLingBattleLaserSplitConfig* SplitConfig; // 0x60
		::System::Single Delay; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_CREATELASER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAbility_CreateLaser* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAbility_CreateLaser*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_CREATELASER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAbility_CreateLaser* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAbility_CreateLaser*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_CREATELASER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
