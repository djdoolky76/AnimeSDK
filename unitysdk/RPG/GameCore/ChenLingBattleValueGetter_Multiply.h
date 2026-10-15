#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleValueGetter.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class ChenLingBattleValueGetter_Multiply; }

#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_MULTIPLY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D589B80)
#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_MULTIPLY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D589B90)
#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_MULTIPLY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D589B30)

namespace RPG::GameCore
{
	class ChenLingBattleValueGetter_Multiply : public ::RPG::GameCore::BaseChenLingBattleValueGetter
	{
	public:
		::RPG::GameCore::BaseChenLingBattleValueGetter* ValueGetter; // 0x10
		::RPG::GameCore::BaseChenLingBattleValueGetter* Multiplier; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_MULTIPLY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleValueGetter_Multiply* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleValueGetter_Multiply*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_MULTIPLY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleValueGetter_Multiply* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleValueGetter_Multiply*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_MULTIPLY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
