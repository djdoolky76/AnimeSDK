#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }

#define RPG_GAMECORE_BASECHENLINGBATTLEVALUEGETTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D40E140)
#define RPG_GAMECORE_BASECHENLINGBATTLEVALUEGETTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D40E0E0)
#define RPG_GAMECORE_BASECHENLINGBATTLEVALUEGETTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D40DCD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseChenLingBattleValueGetter_TypeDefinitionIndex = 15799;

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
