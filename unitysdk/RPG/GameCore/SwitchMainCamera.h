#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MainCameraType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwitchMainCamera; }

#define RPG_GAMECORE_SWITCHMAINCAMERA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB42F90)
#define RPG_GAMECORE_SWITCHMAINCAMERA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB42FB0)
#define RPG_GAMECORE_SWITCHMAINCAMERA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB42F40)

namespace RPG::GameCore
{
	class SwitchMainCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::MainCameraType CameraType; // 0x18
		::System::Boolean ModifyCameraParam; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Single FieldOfView; // 0x20
		::System::Single NearClipPlane; // 0x24
		::System::Single FarClipPlane; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMAINCAMERA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchMainCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchMainCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMAINCAMERA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchMainCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchMainCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMAINCAMERA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
