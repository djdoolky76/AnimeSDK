#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowRubbingUI; }

#define RPG_GAMECORE_SHOWRUBBINGUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE3E30)
#define RPG_GAMECORE_SHOWRUBBINGUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAE3E40)
#define RPG_GAMECORE_SHOWRUBBINGUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE3D70)

namespace RPG::GameCore
{
	class ShowRubbingUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWRUBBINGUI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowRubbingUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowRubbingUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWRUBBINGUI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowRubbingUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowRubbingUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWRUBBINGUI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
