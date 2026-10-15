#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelAnchorParameter.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelAnchorCameraParameter; }

#define RPG_GAMECORE_LEVELANCHORCAMERAPARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A49F0)
#define RPG_GAMECORE_LEVELANCHORCAMERAPARAMETER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7A4A00)
#define RPG_GAMECORE_LEVELANCHORCAMERAPARAMETER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7A49C0)

namespace RPG::GameCore
{
	class LevelAnchorCameraParameter : public ::RPG::GameCore::LevelAnchorParameter
	{
	public:
		::System::Single fov; // 0x10
		::System::Boolean AimIsComposer; // 0x14
		::System::Byte _padding0[0x3];
		::RPG::MVector3 AimTrackedObjectOffset; // 0x18
		::System::Single AimHorizontalDamping; // 0x24
		::System::Single AimVerticalDamping; // 0x28
		::System::Single AimScreenX; // 0x2C
		::System::Single AimScreenY; // 0x30
		::System::Single AimDeadZoneWidth; // 0x34
		::System::Single AimDeadZoneHeight; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELANCHORCAMERAPARAMETER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelAnchorCameraParameter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelAnchorCameraParameter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELANCHORCAMERAPARAMETER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelAnchorCameraParameter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelAnchorCameraParameter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELANCHORCAMERAPARAMETER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
