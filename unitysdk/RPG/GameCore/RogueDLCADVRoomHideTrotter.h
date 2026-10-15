#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDLCADVRoomHideTrotter; }

#define RPG_GAMECORE_ROGUEDLCADVROOMHIDETROTTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9B3E50)
#define RPG_GAMECORE_ROGUEDLCADVROOMHIDETROTTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9B3E60)
#define RPG_GAMECORE_ROGUEDLCADVROOMHIDETROTTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9B3E20)

namespace RPG::GameCore
{
	class RogueDLCADVRoomHideTrotter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GroupID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCADVROOMHIDETROTTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDLCADVRoomHideTrotter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDLCADVRoomHideTrotter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCADVROOMHIDETROTTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDLCADVRoomHideTrotter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDLCADVRoomHideTrotter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCADVROOMHIDETROTTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
