#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerMazeMapUI; }

#define RPG_GAMECORE_TRIGGERMAZEMAPUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC54F30)
#define RPG_GAMECORE_TRIGGERMAZEMAPUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC54F40)
#define RPG_GAMECORE_TRIGGERMAZEMAPUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC54E70)

namespace RPG::GameCore
{
	class TriggerMazeMapUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMAZEMAPUI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerMazeMapUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerMazeMapUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMAZEMAPUI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerMazeMapUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerMazeMapUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMAZEMAPUI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
