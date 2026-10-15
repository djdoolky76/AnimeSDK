#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleValueGetter.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBattleValueGetter_SoldierScale; }

#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_SOLDIERSCALE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D55C620)
#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_SOLDIERSCALE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D55C630)
#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_SOLDIERSCALE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D55C590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleValueGetter_SoldierScale_TypeDefinitionIndex = 15808;

	class ChenLingBattleValueGetter_SoldierScale : public ::RPG::GameCore::BaseChenLingBattleValueGetter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_SOLDIERSCALE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleValueGetter_SoldierScale* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleValueGetter_SoldierScale*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_SOLDIERSCALE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleValueGetter_SoldierScale* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleValueGetter_SoldierScale*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_SOLDIERSCALE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
