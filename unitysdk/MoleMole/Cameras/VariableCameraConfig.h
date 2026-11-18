#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class CameraTrackBlending; }

#define MOLEMOLE_CAMERAS_VARIABLECAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19274010)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int VariableCameraConfig_TypeDefinitionIndex = 42480;

	class VariableCameraConfig : public ::System::Object
	{
	public:
		::MoleMole::Cameras::CameraTrackBlending* blendIn; // 0x10
		::MoleMole::Cameras::CameraTrackBlending* blendOut; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VARIABLECAMERACONFIG__CTOR_OFFSET))(this);
		}
	};
}
