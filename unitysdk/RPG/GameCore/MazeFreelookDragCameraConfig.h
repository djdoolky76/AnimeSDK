#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MazeFreelookDragCameraConfig; }

#define RPG_GAMECORE_MAZEFREELOOKDRAGCAMERACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8678C0)
#define RPG_GAMECORE_MAZEFREELOOKDRAGCAMERACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D865240)

namespace RPG::GameCore
{
	class MazeFreelookDragCameraConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single CameraXAxisDeadZone; // 0x10
		::System::Single CameraXAxisSoftZone; // 0x14
		::System::Single CameraYAxisDeadZone; // 0x18
		::System::Single CameraYAxisSoftZone; // 0x1C
		::System::Single CameraDragFactorX; // 0x20
		::System::Single CameraDragFactorY; // 0x24
		::System::Single RecoverDampTime; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEFREELOOKDRAGCAMERACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MazeFreelookDragCameraConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MazeFreelookDragCameraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEFREELOOKDRAGCAMERACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
