#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BoomRobotGameplayBoomStart; }

#define RPG_GAMECORE_BOOMROBOTGAMEPLAYBOOMSTART_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4764B0)
#define RPG_GAMECORE_BOOMROBOTGAMEPLAYBOOMSTART_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4764C0)
#define RPG_GAMECORE_BOOMROBOTGAMEPLAYBOOMSTART_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4763F0)

namespace RPG::GameCore
{
	class BoomRobotGameplayBoomStart : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOMROBOTGAMEPLAYBOOMSTART_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BoomRobotGameplayBoomStart* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BoomRobotGameplayBoomStart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOMROBOTGAMEPLAYBOOMSTART_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BoomRobotGameplayBoomStart* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BoomRobotGameplayBoomStart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOMROBOTGAMEPLAYBOOMSTART_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
