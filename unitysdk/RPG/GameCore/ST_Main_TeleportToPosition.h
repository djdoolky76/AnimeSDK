#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
#include "unitysdk/RPG/GameCore/ST_PositionType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Main_TeleportToPosition; }

#define RPG_GAMECORE_ST_MAIN_TELEPORTTOPOSITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA819C0)
#define RPG_GAMECORE_ST_MAIN_TELEPORTTOPOSITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA819D0)
#define RPG_GAMECORE_ST_MAIN_TELEPORTTOPOSITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA81990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_TeleportToPosition_TypeDefinitionIndex = 20101;

	class ST_Main_TeleportToPosition : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::ST_PositionType PositionType; // 0x18
		::System::UInt32 PointID; // 0x1C
		::System::Boolean UseFlashEffectStyle; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_TELEPORTTOPOSITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_TeleportToPosition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_TeleportToPosition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_TELEPORTTOPOSITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_TeleportToPosition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_TeleportToPosition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_TELEPORTTOPOSITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
