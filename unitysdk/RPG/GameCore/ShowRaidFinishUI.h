#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowRaidFinishUI; }

#define RPG_GAMECORE_SHOWRAIDFINISHUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE2F00)
#define RPG_GAMECORE_SHOWRAIDFINISHUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAE2F10)
#define RPG_GAMECORE_SHOWRAIDFINISHUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE2ED0)

namespace RPG::GameCore
{
	class ShowRaidFinishUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 CountDown; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWRAIDFINISHUI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowRaidFinishUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowRaidFinishUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWRAIDFINISHUI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowRaidFinishUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowRaidFinishUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWRAIDFINISHUI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
