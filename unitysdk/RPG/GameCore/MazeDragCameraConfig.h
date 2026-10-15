#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MazeDragCameraConfig; }

#define RPG_GAMECORE_MAZEDRAGCAMERACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D865600)
#define RPG_GAMECORE_MAZEDRAGCAMERACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D865050)

namespace RPG::GameCore
{
	class MazeDragCameraConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single CameraMoveRange; // 0x10
		::System::Single CameraRotateMaxAngle; // 0x14
		::System::Single CameraDragFactor; // 0x18
		::System::Single RecoverDampTime; // 0x1C
		::System::Single CameraSpringArmDefaultLength; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEDRAGCAMERACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MazeDragCameraConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MazeDragCameraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEDRAGCAMERACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
