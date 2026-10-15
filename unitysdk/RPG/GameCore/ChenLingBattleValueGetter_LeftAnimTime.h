#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleValueGetter.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBattleValueGetter_LeftAnimTime; }

#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_LEFTANIMTIME_CTOR_OFFSET UNITYSDK_OFFSET(0x1D589AC0)
#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_LEFTANIMTIME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D589AD0)
#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_LEFTANIMTIME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D589A30)

namespace RPG::GameCore
{
	class ChenLingBattleValueGetter_LeftAnimTime : public ::RPG::GameCore::BaseChenLingBattleValueGetter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_LEFTANIMTIME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleValueGetter_LeftAnimTime* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleValueGetter_LeftAnimTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_LEFTANIMTIME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleValueGetter_LeftAnimTime* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleValueGetter_LeftAnimTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_LEFTANIMTIME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
