#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetBattleResult; }

#define RPG_GAMECORE_SETBATTLERESULT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA971D0)
#define RPG_GAMECORE_SETBATTLERESULT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA971E0)
#define RPG_GAMECORE_SETBATTLERESULT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA971A0)

namespace RPG::GameCore
{
	class SetBattleResult : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsWin; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLERESULT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetBattleResult* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetBattleResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLERESULT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetBattleResult* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetBattleResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLERESULT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
