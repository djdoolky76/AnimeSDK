#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PingPongEnemyGroupEventBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PingPongEnemyGroupEvent_ModifyUnit; }
namespace System { class String; }

#define RPG_GAMECORE_PINGPONGENEMYGROUPEVENT_MODIFYUNIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D916200)
#define RPG_GAMECORE_PINGPONGENEMYGROUPEVENT_MODIFYUNIT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D916210)
#define RPG_GAMECORE_PINGPONGENEMYGROUPEVENT_MODIFYUNIT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D916630)

namespace RPG::GameCore
{
	class PingPongEnemyGroupEvent_ModifyUnit : public ::RPG::GameCore::PingPongEnemyGroupEventBase
	{
	public:
		::Il2CppArray<::System::String*>* UnitNameList; // 0x10
		::System::Boolean IsCore; // 0x18
		::System::Boolean IsBreakable; // 0x19
		::System::Boolean CanShoot; // 0x1A
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYGROUPEVENT_MODIFYUNIT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PingPongEnemyGroupEvent_ModifyUnit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PingPongEnemyGroupEvent_ModifyUnit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYGROUPEVENT_MODIFYUNIT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PingPongEnemyGroupEvent_ModifyUnit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PingPongEnemyGroupEvent_ModifyUnit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYGROUPEVENT_MODIFYUNIT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
