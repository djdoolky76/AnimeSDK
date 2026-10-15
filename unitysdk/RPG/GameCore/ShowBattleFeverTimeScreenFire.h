#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowBattleFeverTimeScreenFire; }

#define RPG_GAMECORE_SHOWBATTLEFEVERTIMESCREENFIRE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD7EA0)
#define RPG_GAMECORE_SHOWBATTLEFEVERTIMESCREENFIRE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAD7EB0)
#define RPG_GAMECORE_SHOWBATTLEFEVERTIMESCREENFIRE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAD7E60)

namespace RPG::GameCore
{
	class ShowBattleFeverTimeScreenFire : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsShow; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEFEVERTIMESCREENFIRE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowBattleFeverTimeScreenFire* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowBattleFeverTimeScreenFire*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEFEVERTIMESCREENFIRE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowBattleFeverTimeScreenFire* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowBattleFeverTimeScreenFire*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEFEVERTIMESCREENFIRE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
