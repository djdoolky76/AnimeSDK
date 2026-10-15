#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleEffect.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class ChenLingBattleEffect_GainGoldCoin; }

#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_GAINGOLDCOIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5844F0)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_GAINGOLDCOIN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D584500)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_GAINGOLDCOIN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D584430)

namespace RPG::GameCore
{
	class ChenLingBattleEffect_GainGoldCoin : public ::RPG::GameCore::BaseChenLingBattleEffect
	{
	public:
		::RPG::GameCore::BaseChenLingBattleValueGetter* Num; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_GAINGOLDCOIN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleEffect_GainGoldCoin* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleEffect_GainGoldCoin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_GAINGOLDCOIN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleEffect_GainGoldCoin* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleEffect_GainGoldCoin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_GAINGOLDCOIN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
