#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TryShowFateEntranceUI; }

#define RPG_GAMECORE_TRYSHOWFATEENTRANCEUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC611D0)
#define RPG_GAMECORE_TRYSHOWFATEENTRANCEUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC611E0)
#define RPG_GAMECORE_TRYSHOWFATEENTRANCEUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC61110)

namespace RPG::GameCore
{
	class TryShowFateEntranceUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRYSHOWFATEENTRANCEUI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TryShowFateEntranceUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TryShowFateEntranceUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRYSHOWFATEENTRANCEUI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TryShowFateEntranceUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TryShowFateEntranceUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRYSHOWFATEENTRANCEUI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
