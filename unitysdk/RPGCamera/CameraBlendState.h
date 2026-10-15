#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGCamera/BaseCameraState.h"

#define RPGCAMERA_CAMERABLENDSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0xB07A560)

namespace RPGCamera
{
	class CameraBlendState : public ::RPGCamera::BaseCameraState
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERABLENDSTATE_CTOR_OFFSET))(this);
		}

	};
}
