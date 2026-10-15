#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByRogueBattleWinTime; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBATTLEWINTIME_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA98B0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBATTLEWINTIME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAA98C0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBATTLEWINTIME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAA9880)

namespace RPG::GameCore
{
	class SetDynamicValueByRogueBattleWinTime : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBATTLEWINTIME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRogueBattleWinTime* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRogueBattleWinTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBATTLEWINTIME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRogueBattleWinTime* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRogueBattleWinTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBATTLEWINTIME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
