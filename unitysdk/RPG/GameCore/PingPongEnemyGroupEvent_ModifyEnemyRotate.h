#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PingPongEnemyGroupEventBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PingPongEnemyGroupEvent_ModifyEnemyRotate; }

#define RPG_GAMECORE_PINGPONGENEMYGROUPEVENT_MODIFYENEMYROTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8E8640)
#define RPG_GAMECORE_PINGPONGENEMYGROUPEVENT_MODIFYENEMYROTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8E8650)
#define RPG_GAMECORE_PINGPONGENEMYGROUPEVENT_MODIFYENEMYROTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8E8BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongEnemyGroupEvent_ModifyEnemyRotate_TypeDefinitionIndex = 17000;

	class PingPongEnemyGroupEvent_ModifyEnemyRotate : public ::RPG::GameCore::PingPongEnemyGroupEventBase
	{
	public:
		::System::Boolean IsSelfRotate; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single RotateSpeed; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYGROUPEVENT_MODIFYENEMYROTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PingPongEnemyGroupEvent_ModifyEnemyRotate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PingPongEnemyGroupEvent_ModifyEnemyRotate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYGROUPEVENT_MODIFYENEMYROTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PingPongEnemyGroupEvent_ModifyEnemyRotate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PingPongEnemyGroupEvent_ModifyEnemyRotate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYGROUPEVENT_MODIFYENEMYROTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
