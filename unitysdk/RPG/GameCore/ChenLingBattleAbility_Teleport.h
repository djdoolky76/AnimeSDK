#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityNodeConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleTargetEvaluator; }
namespace RPG::GameCore { class ChenLingBattleAbility_Teleport; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITY_TELEPORT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D581D60)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_TELEPORT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D581D70)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_TELEPORT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D581D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAbility_Teleport_TypeDefinitionIndex = 15733;

	class ChenLingBattleAbility_Teleport : public ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig
	{
	public:
		::RPG::GameCore::BaseChenLingBattleTargetEvaluator* Sources; // 0x10
		::RPG::GameCore::BaseChenLingBattleTargetEvaluator* Targets; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_TELEPORT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAbility_Teleport* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAbility_Teleport*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_TELEPORT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAbility_Teleport* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAbility_Teleport*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_TELEPORT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
