#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MazeCharacterTeleportConfig; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_MAZECHARACTERTELEPORTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D864310)
#define RPG_GAMECORE_MAZECHARACTERTELEPORTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D864120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeCharacterTeleportConfig_TypeDefinitionIndex = 17633;

	class MazeCharacterTeleportConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTeleport; // 0x10
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTeleportInMapNoSwitchIn; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTeleportInMapNoSwitchInWhite; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTeleportCrossMap; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZECHARACTERTELEPORTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MazeCharacterTeleportConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MazeCharacterTeleportConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZECHARACTERTELEPORTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
