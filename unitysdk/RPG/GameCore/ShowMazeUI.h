#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowMazeUI; }

#define RPG_GAMECORE_SHOWMAZEUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE1800)
#define RPG_GAMECORE_SHOWMAZEUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAE1810)
#define RPG_GAMECORE_SHOWMAZEUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE17D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowMazeUI_TypeDefinitionIndex = 20620;

	class ShowMazeUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsShow; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMAZEUI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowMazeUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowMazeUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMAZEUI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowMazeUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowMazeUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMAZEUI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
