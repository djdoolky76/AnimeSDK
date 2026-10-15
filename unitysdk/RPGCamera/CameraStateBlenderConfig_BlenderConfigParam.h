#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EasingFunction_Ease.h"
#include "unitysdk/RPGCamera/CameraStateBlenderConfig_BlendType.h"
#include "unitysdk/RPGCamera/CameraStateBlenderConfig_PoleType.h"
#include "unitysdk/System/Object.h"

#define RPGCAMERA_CAMERASTATEBLENDERCONFIG_BLENDERCONFIGPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0xB07BF50)

namespace RPGCamera
{
	class CameraStateBlenderConfig_BlenderConfigParam : public ::System::Object
	{
	public:
		::RPGCamera::CameraStateBlenderConfig_BlendType blendType; // 0x10
		::EasingFunction_Ease easeType; // 0x14
		::RPGCamera::CameraStateBlenderConfig_PoleType poleType; // 0x18
		::System::Single duration; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDERCONFIG_BLENDERCONFIGPARAM_CTOR_OFFSET))(this);
		}

	};
}
