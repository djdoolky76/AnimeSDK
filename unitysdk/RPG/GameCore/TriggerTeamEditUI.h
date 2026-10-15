#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerTeamEditUI; }

#define RPG_GAMECORE_TRIGGERTEAMEDITUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC5EEB0)
#define RPG_GAMECORE_TRIGGERTEAMEDITUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC5EEC0)
#define RPG_GAMECORE_TRIGGERTEAMEDITUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC5EDF0)

namespace RPG::GameCore
{
	class TriggerTeamEditUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERTEAMEDITUI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerTeamEditUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerTeamEditUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERTEAMEDITUI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerTeamEditUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerTeamEditUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERTEAMEDITUI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
