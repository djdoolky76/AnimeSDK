#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleValueGetter.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBattleValueGetter_SpillDamage; }

#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_SPILLDAMAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E79A5B0)
#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_SPILLDAMAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E79A5C0)
#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_SPILLDAMAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E79A520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleValueGetter_SpillDamage_TypeDefinitionIndex = 15963;

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
