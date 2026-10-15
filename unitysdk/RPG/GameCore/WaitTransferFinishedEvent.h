#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitTransferFinishedEvent; }

#define RPG_GAMECORE_WAITTRANSFERFINISHEDEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA3B40)
#define RPG_GAMECORE_WAITTRANSFERFINISHEDEVENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCA3B50)
#define RPG_GAMECORE_WAITTRANSFERFINISHEDEVENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCA3A80)

namespace RPG::GameCore
{
	class WaitTransferFinishedEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTRANSFERFINISHEDEVENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitTransferFinishedEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitTransferFinishedEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTRANSFERFINISHEDEVENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitTransferFinishedEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitTransferFinishedEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTRANSFERFINISHEDEVENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
