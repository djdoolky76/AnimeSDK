#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitBattleWinWithScore; }

#define RPG_GAMECORE_WAITBATTLEWINWITHSCORE_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED52D70)
#define RPG_GAMECORE_WAITBATTLEWINWITHSCORE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1ED52D80)
#define RPG_GAMECORE_WAITBATTLEWINWITHSCORE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1ED52D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitBattleWinWithScore_TypeDefinitionIndex = 21609;

	class WaitBattleWinWithScore : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITBATTLEWINWITHSCORE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitBattleWinWithScore* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitBattleWinWithScore*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITBATTLEWINWITHSCORE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitBattleWinWithScore* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitBattleWinWithScore*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITBATTLEWINWITHSCORE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
