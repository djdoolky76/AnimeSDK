#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/GameCore/PingPongPatrolType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PingPongEnemyPatrolCmptConfig; }

#define RPG_GAMECORE_PINGPONGENEMYPATROLCMPTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D916720)
#define RPG_GAMECORE_PINGPONGENEMYPATROLCMPTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D916730)
#define RPG_GAMECORE_PINGPONGENEMYPATROLCMPTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9166D0)

namespace RPG::GameCore
{
	class PingPongEnemyPatrolCmptConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::UInt32 PatrolRouteEntityID; // 0x10
		::RPG::GameCore::PingPongPatrolType PatrolType; // 0x14
		::System::Single MoveSpeed; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYPATROLCMPTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PingPongEnemyPatrolCmptConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PingPongEnemyPatrolCmptConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYPATROLCMPTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PingPongEnemyPatrolCmptConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PingPongEnemyPatrolCmptConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYPATROLCMPTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
