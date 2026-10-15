#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class Map3DIconConfig; }
namespace RPG::GameCore { class MapRotationChargerIconConfig; }
namespace RPG::GameCore { class MapRotationVolumeIconConfig; }

#define RPG_GAMECORE_MAP3DICONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7FBE80)
#define RPG_GAMECORE_MAP3DICONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7FBCF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int Map3DIconConfig_TypeDefinitionIndex = 17040;

	class Map3DIconConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MapRotationVolumeIconConfig*>* VolumeIconConfig; // 0x10
		::Il2CppArray<::RPG::GameCore::MapRotationChargerIconConfig*>* ChargerIconConfig; // 0x18
		::Il2CppArray<::System::UInt32>* IgnorePoseProps; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAP3DICONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Map3DIconConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Map3DIconConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAP3DICONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
