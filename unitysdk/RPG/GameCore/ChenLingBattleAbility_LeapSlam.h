#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityNodeConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class ChenLingBattleAbility_LeapSlam; }
namespace RPG::GameCore { class ChenLingBattleEffectConfig; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITY_LEAPSLAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5809F0)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_LEAPSLAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D580A00)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_LEAPSLAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5809A0)

namespace RPG::GameCore
{
	class ChenLingBattleAbility_LeapSlam : public ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig
	{
	public:
		::RPG::GameCore::BaseChenLingBattleValueGetter* MaxJumpDistance; // 0x10
		::RPG::GameCore::BaseChenLingBattleValueGetter* MaxSlamRange; // 0x18
		::RPG::GameCore::BaseChenLingBattleValueGetter* LeapHeight; // 0x20
		::RPG::GameCore::BaseChenLingBattleValueGetter* LeapDuration; // 0x28
		::System::Single StartJumpNormalizedTime; // 0x30
		::System::Single ApplyDamageNormalizedTime; // 0x34
		::System::Single EndSkillNormalizedTime; // 0x38
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*>* OnSlam; // 0x40
		::RPG::GameCore::ChenLingBattleEffectConfig* OnSlamEffectConfig; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_LEAPSLAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAbility_LeapSlam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAbility_LeapSlam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_LEAPSLAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAbility_LeapSlam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAbility_LeapSlam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_LEAPSLAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
