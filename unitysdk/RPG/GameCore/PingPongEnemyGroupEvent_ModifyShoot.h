#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PingPongEnemyGroupEventBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PingPongEnemyGroupEvent_ModifyShoot; }

#define RPG_GAMECORE_PINGPONGENEMYGROUPEVENT_MODIFYSHOOT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D916100)
#define RPG_GAMECORE_PINGPONGENEMYGROUPEVENT_MODIFYSHOOT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D916110)
#define RPG_GAMECORE_PINGPONGENEMYGROUPEVENT_MODIFYSHOOT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9165E0)

namespace RPG::GameCore
{
	class PingPongEnemyGroupEvent_ModifyShoot : public ::RPG::GameCore::PingPongEnemyGroupEventBase
	{
	public:
		::System::UInt32 ShootID; // 0x10
		::System::Single ShootInterval; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYGROUPEVENT_MODIFYSHOOT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PingPongEnemyGroupEvent_ModifyShoot* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PingPongEnemyGroupEvent_ModifyShoot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYGROUPEVENT_MODIFYSHOOT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PingPongEnemyGroupEvent_ModifyShoot* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PingPongEnemyGroupEvent_ModifyShoot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYGROUPEVENT_MODIFYSHOOT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
