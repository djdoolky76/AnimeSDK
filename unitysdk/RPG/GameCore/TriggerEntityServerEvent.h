#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerEntityServerEvent; }

#define RPG_GAMECORE_TRIGGERENTITYSERVEREVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC52810)
#define RPG_GAMECORE_TRIGGERENTITYSERVEREVENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC52820)
#define RPG_GAMECORE_TRIGGERENTITYSERVEREVENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC527E0)

namespace RPG::GameCore
{
	class TriggerEntityServerEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERENTITYSERVEREVENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerEntityServerEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerEntityServerEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERENTITYSERVEREVENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerEntityServerEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerEntityServerEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERENTITYSERVEREVENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
