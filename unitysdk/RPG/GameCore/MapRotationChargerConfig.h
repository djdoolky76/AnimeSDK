#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MapRotationChargerConfig; }

#define RPG_GAMECORE_MAPROTATIONCHARGERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D801590)
#define RPG_GAMECORE_MAPROTATIONCHARGERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D801420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapRotationChargerConfig_TypeDefinitionIndex = 17024;

	class MapRotationChargerConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 InstanceID; // 0x14
		::System::UInt32 Energy; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONCHARGERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MapRotationChargerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MapRotationChargerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONCHARGERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
