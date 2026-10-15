#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TravelShipHideUI; }

#define RPG_GAMECORE_TRAVELSHIPHIDEUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC3C4D0)
#define RPG_GAMECORE_TRAVELSHIPHIDEUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC3C4E0)
#define RPG_GAMECORE_TRAVELSHIPHIDEUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC3C4A0)

namespace RPG::GameCore
{
	class TravelShipHideUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsHide; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPHIDEUI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TravelShipHideUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TravelShipHideUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPHIDEUI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TravelShipHideUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TravelShipHideUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPHIDEUI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
