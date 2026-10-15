#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitBattleWinWithTargetCount; }

#define RPG_GAMECORE_WAITBATTLEWINWITHTARGETCOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC95100)
#define RPG_GAMECORE_WAITBATTLEWINWITHTARGETCOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC95110)
#define RPG_GAMECORE_WAITBATTLEWINWITHTARGETCOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC950D0)

namespace RPG::GameCore
{
	class WaitBattleWinWithTargetCount : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITBATTLEWINWITHTARGETCOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitBattleWinWithTargetCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitBattleWinWithTargetCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITBATTLEWINWITHTARGETCOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitBattleWinWithTargetCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitBattleWinWithTargetCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITBATTLEWINWITHTARGETCOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
