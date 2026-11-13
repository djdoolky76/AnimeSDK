#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerMazeMiniMapUI; }

#define RPG_GAMECORE_TRIGGERMAZEMINIMAPUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E331E50)
#define RPG_GAMECORE_TRIGGERMAZEMINIMAPUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E331E60)
#define RPG_GAMECORE_TRIGGERMAZEMINIMAPUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E331D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerMazeMiniMapUI_TypeDefinitionIndex = 22484;

	class TriggerMazeMiniMapUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMAZEMINIMAPUI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerMazeMiniMapUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerMazeMiniMapUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMAZEMINIMAPUI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerMazeMiniMapUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerMazeMiniMapUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMAZEMINIMAPUI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
