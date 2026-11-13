#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameSandboxNavigationConfig; }

#define RPG_GAMECORE_LITTLEGAMESANDBOXNAVIGATIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F267A60)
#define RPG_GAMECORE_LITTLEGAMESANDBOXNAVIGATIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F2678E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameSandboxNavigationConfig_TypeDefinitionIndex = 19104;

	class LittleGameSandboxNavigationConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean HideAdventureWaypoint; // 0x10
		::System::Boolean IgnoreWaypointLock; // 0x11
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESANDBOXNAVIGATIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameSandboxNavigationConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameSandboxNavigationConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESANDBOXNAVIGATIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
