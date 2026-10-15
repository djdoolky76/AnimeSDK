#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleValueGetter.h"
#include "unitysdk/RPG/GameCore/ChenLingTeamSelectorType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBattleValueGetter_AliveSoliderCount; }

#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_ALIVESOLIDERCOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D55BC70)
#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_ALIVESOLIDERCOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D55BC80)
#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_ALIVESOLIDERCOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D55BC20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleValueGetter_AliveSoliderCount_TypeDefinitionIndex = 15806;

	class ChenLingBattleValueGetter_AliveSoliderCount : public ::RPG::GameCore::BaseChenLingBattleValueGetter
	{
	public:
		::RPG::GameCore::ChenLingTeamSelectorType TeamSelectorType; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_ALIVESOLIDERCOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleValueGetter_AliveSoliderCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleValueGetter_AliveSoliderCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_ALIVESOLIDERCOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleValueGetter_AliveSoliderCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleValueGetter_AliveSoliderCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_ALIVESOLIDERCOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
