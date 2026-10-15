#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingFesVCameraConfig; }

#define RPG_GAMECORE_CHENLINGFESVCAMERACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D590FA0)
#define RPG_GAMECORE_CHENLINGFESVCAMERACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D58DFC0)

namespace RPG::GameCore
{
	class ChenLingFesVCameraConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 CameraCenterFollowOffset; // 0x10
		::RPG::MVector3 CameraCenterLookAtOffset; // 0x1C
		::System::Single CameraFOV; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESVCAMERACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingFesVCameraConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingFesVCameraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESVCAMERACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
