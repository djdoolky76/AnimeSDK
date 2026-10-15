#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityNodeConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleEffect; }
namespace RPG::GameCore { class BaseChenLingBattleTargetEvaluator; }
namespace RPG::GameCore { class ChenLingBattleAbilityModifierApplier; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITYMODIFIERAPPLIER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D57EFE0)
#define RPG_GAMECORE_CHENLINGBATTLEABILITYMODIFIERAPPLIER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D57EFF0)
#define RPG_GAMECORE_CHENLINGBATTLEABILITYMODIFIERAPPLIER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D57EF90)

namespace RPG::GameCore
{
	class ChenLingBattleAbilityModifierApplier : public ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseChenLingBattleEffect*>* Effects; // 0x10
		::RPG::GameCore::BaseChenLingBattleTargetEvaluator* Targets; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYMODIFIERAPPLIER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAbilityModifierApplier* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAbilityModifierApplier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYMODIFIERAPPLIER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAbilityModifierApplier* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAbilityModifierApplier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYMODIFIERAPPLIER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
