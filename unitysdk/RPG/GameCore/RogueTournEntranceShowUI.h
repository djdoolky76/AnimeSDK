#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournEntranceShowUI; }

#define RPG_GAMECORE_ROGUETOURNENTRANCESHOWUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA38B30)
#define RPG_GAMECORE_ROGUETOURNENTRANCESHOWUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA38B40)
#define RPG_GAMECORE_ROGUETOURNENTRANCESHOWUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA38A70)

namespace RPG::GameCore
{
	class RogueTournEntranceShowUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNENTRANCESHOWUI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournEntranceShowUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournEntranceShowUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNENTRANCESHOWUI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournEntranceShowUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournEntranceShowUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNENTRANCESHOWUI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
