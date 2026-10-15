#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityNodeConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class ChenLingBattleAbility_SummonSoldier; }
namespace RPG::GameCore { class ChenLingBattleEffectConfig; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITY_SUMMONSOLDIER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D554160)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_SUMMONSOLDIER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D554170)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_SUMMONSOLDIER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D554110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAbility_SummonSoldier_TypeDefinitionIndex = 15741;

	class ChenLingBattleAbility_SummonSoldier : public ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig
	{
	public:
		::RPG::GameCore::BaseChenLingBattleValueGetter* SoldierID; // 0x10
		::RPG::GameCore::BaseChenLingBattleValueGetter* Level; // 0x18
		::RPG::GameCore::BaseChenLingBattleValueGetter* SoldierUnitID; // 0x20
		::RPG::GameCore::BaseChenLingBattleValueGetter* Num; // 0x28
		::RPG::GameCore::BaseChenLingBattleValueGetter* Distance; // 0x30
		::RPG::GameCore::BaseChenLingBattleValueGetter* WaitTime; // 0x38
		::RPG::GameCore::ChenLingBattleEffectConfig* EffectConfig; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_SUMMONSOLDIER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAbility_SummonSoldier* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAbility_SummonSoldier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_SUMMONSOLDIER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAbility_SummonSoldier* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAbility_SummonSoldier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_SUMMONSOLDIER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
