#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }

#define RPG_GAMECORE_BASECHENLINGBATTLEVALUEGETTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D43BBB0)
#define RPG_GAMECORE_BASECHENLINGBATTLEVALUEGETTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D43BB50)
#define RPG_GAMECORE_BASECHENLINGBATTLEVALUEGETTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D43B740)

namespace RPG::GameCore
{
	class BaseChenLingBattleValueGetter : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLEVALUEGETTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BaseChenLingBattleValueGetter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BaseChenLingBattleValueGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLEVALUEGETTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BaseChenLingBattleValueGetter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BaseChenLingBattleValueGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLEVALUEGETTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
