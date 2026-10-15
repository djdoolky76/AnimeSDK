#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleValueGetter.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBattleValueGetter_SpillDamage; }

#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_SPILLDAMAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D55C720)
#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_SPILLDAMAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D55C730)
#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_SPILLDAMAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D55C690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleValueGetter_SpillDamage_TypeDefinitionIndex = 15805;

	class ChenLingBattleValueGetter_SpillDamage : public ::RPG::GameCore::BaseChenLingBattleValueGetter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_SPILLDAMAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleValueGetter_SpillDamage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleValueGetter_SpillDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_SPILLDAMAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleValueGetter_SpillDamage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleValueGetter_SpillDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_SPILLDAMAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
