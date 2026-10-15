#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MapRotationChargerIconConfig; }

#define RPG_GAMECORE_MAPROTATIONCHARGERICONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D82F100)
#define RPG_GAMECORE_MAPROTATIONCHARGERICONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D82EFA0)

namespace RPG::GameCore
{
	class MapRotationChargerIconConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ChargerPropID; // 0x10
		::System::Boolean IsFull; // 0x14
		::System::Byte _padding0[0x3];
		::System::UInt32 MinimapIconID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONCHARGERICONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MapRotationChargerIconConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MapRotationChargerIconConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONCHARGERICONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
