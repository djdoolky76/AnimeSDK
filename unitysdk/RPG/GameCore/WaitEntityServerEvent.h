#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitEntityServerEvent; }

#define RPG_GAMECORE_WAITENTITYSERVEREVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC974E0)
#define RPG_GAMECORE_WAITENTITYSERVEREVENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC974F0)
#define RPG_GAMECORE_WAITENTITYSERVEREVENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC974A0)

namespace RPG::GameCore
{
	class WaitEntityServerEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITENTITYSERVEREVENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitEntityServerEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitEntityServerEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITENTITYSERVEREVENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitEntityServerEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitEntityServerEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITENTITYSERVEREVENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
