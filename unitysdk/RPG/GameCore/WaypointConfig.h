#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaypointConfig; }

#define RPG_GAMECORE_WAYPOINTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EEB88E0)
#define RPG_GAMECORE_WAYPOINTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EEB8820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaypointConfig_TypeDefinitionIndex = 17659;

	class WaypointConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 AnchorID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAYPOINTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaypointConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaypointConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAYPOINTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
