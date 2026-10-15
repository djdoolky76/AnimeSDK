#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetBattleResultAsWin; }

#define RPG_GAMECORE_SETBATTLERESULTASWIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA97360)
#define RPG_GAMECORE_SETBATTLERESULTASWIN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA97370)
#define RPG_GAMECORE_SETBATTLERESULTASWIN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA97320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetBattleResultAsWin_TypeDefinitionIndex = 23465;

	class SetBattleResultAsWin : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsAsWin; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLERESULTASWIN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetBattleResultAsWin* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetBattleResultAsWin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLERESULTASWIN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetBattleResultAsWin* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetBattleResultAsWin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLERESULTASWIN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
