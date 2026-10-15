#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDLCADVRoomHideDestruct; }

#define RPG_GAMECORE_ROGUEDLCADVROOMHIDEDESTRUCT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9863B0)
#define RPG_GAMECORE_ROGUEDLCADVROOMHIDEDESTRUCT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9863C0)
#define RPG_GAMECORE_ROGUEDLCADVROOMHIDEDESTRUCT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D986380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCADVRoomHideDestruct_TypeDefinitionIndex = 22279;

	class RogueDLCADVRoomHideDestruct : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GroupID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCADVROOMHIDEDESTRUCT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDLCADVRoomHideDestruct* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDLCADVRoomHideDestruct*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCADVROOMHIDEDESTRUCT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDLCADVRoomHideDestruct* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDLCADVRoomHideDestruct*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCADVROOMHIDEDESTRUCT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
