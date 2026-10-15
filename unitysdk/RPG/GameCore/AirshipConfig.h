#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AirshipConfig; }
namespace System { class String; }

#define RPG_GAMECORE_AIRSHIPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3DF360)
#define RPG_GAMECORE_AIRSHIPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3DEF80)

namespace RPG::GameCore
{
	class AirshipConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* PrefabPath; // 0x10
		::System::Single CapsuleRadius; // 0x18
		::System::Single CapsuleHeight; // 0x1C
		::System::Single MaxSpeed; // 0x20
		::System::Single MaxAcceleration; // 0x24
		::System::Single MaxDeceleration; // 0x28
		::System::Single MaxBrakeSpeed; // 0x2C
		::RPG::MVector2 VerticalTiltRange; // 0x30
		::RPG::MVector2 HorizontalTiltRange; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIRSHIPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AirshipConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AirshipConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIRSHIPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
