#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VCameraShotAnimMovementConfig; }

#define RPG_GAMECORE_VCAMERASHOTANIMMOVEMENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC7FB70)
#define RPG_GAMECORE_VCAMERASHOTANIMMOVEMENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC7C110)

namespace RPG::GameCore
{
	class VCameraShotAnimMovementConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean ExportToJson; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single AngleXY; // 0x14
		::System::Single DistanceXY; // 0x18
		::System::Single DistanceZ; // 0x1C
		::System::Single Damp; // 0x20
		::System::Single Duration; // 0x24
		::System::Single RecoveryDamp; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERASHOTANIMMOVEMENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VCameraShotAnimMovementConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VCameraShotAnimMovementConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERASHOTANIMMOVEMENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
