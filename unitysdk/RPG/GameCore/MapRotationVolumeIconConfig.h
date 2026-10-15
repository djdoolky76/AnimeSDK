#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MapRotationVolumeIconConfig; }

#define RPG_GAMECORE_MAPROTATIONVOLUMEICONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D802FC0)
#define RPG_GAMECORE_MAPROTATIONVOLUMEICONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D802E60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapRotationVolumeIconConfig_TypeDefinitionIndex = 17035;

	class MapRotationVolumeIconConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 VolumePropID; // 0x10
		::System::Boolean IsDeployed; // 0x14
		::System::Byte _padding0[0x3];
		::System::UInt32 MinimapIconID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONVOLUMEICONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MapRotationVolumeIconConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MapRotationVolumeIconConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONVOLUMEICONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
