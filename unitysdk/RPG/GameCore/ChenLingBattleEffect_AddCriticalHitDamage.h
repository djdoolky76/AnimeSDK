#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleEffect.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class ChenLingBattleEffect_AddCriticalHitDamage; }

#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDCRITICALHITDAMAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D583BE0)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDCRITICALHITDAMAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D583BF0)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDCRITICALHITDAMAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D583B20)

namespace RPG::GameCore
{
	class ChenLingBattleEffect_AddCriticalHitDamage : public ::RPG::GameCore::BaseChenLingBattleEffect
	{
	public:
		::RPG::GameCore::BaseChenLingBattleValueGetter* Num; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDCRITICALHITDAMAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleEffect_AddCriticalHitDamage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleEffect_AddCriticalHitDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDCRITICALHITDAMAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleEffect_AddCriticalHitDamage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleEffect_AddCriticalHitDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDCRITICALHITDAMAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
