#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LocationExtraConfig; }

#define RPG_GAMECORE_LOCATIONEXTRACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7EF990)
#define RPG_GAMECORE_LOCATIONEXTRACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7EF7F0)

namespace RPG::GameCore
{
	class LocationExtraConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single LocalZOffsetFixed; // 0x10
		::System::Single CentralXOffset; // 0x14
		::System::Single YOffset; // 0x18
		::System::Single YawOffset; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCATIONEXTRACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LocationExtraConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LocationExtraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCATIONEXTRACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
