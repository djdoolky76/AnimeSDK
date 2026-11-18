#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { template <typename T> class ConfigCameraCurve_1; }

#define MOLEMOLE_CONFIG_CONFIGUICAMERASTRETCH__CTOR_OFFSET UNITYSDK_OFFSET(0x11EA2970)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUICameraStretch_TypeDefinitionIndex = 43307;

	class ConfigUICameraStretch : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigCameraCurve_1<::System::Single>* targetCameraNoiseGainCurve; // 0x10
		::MoleMole::Config::ConfigCameraCurve_1<::System::Single>* cameraRotateZAngleCurve; // 0x18
		::MoleMole::Config::ConfigCameraCurve_1<::System::Single>* targetCameraFovCurve; // 0x20
		::MoleMole::Config::ConfigCameraCurve_1<::UnityEngine::Vector3>* targetPosOffsetCurve; // 0x28
		::MoleMole::Config::ConfigCameraCurve_1<::UnityEngine::Vector3>* aimPositionOffsetCurve; // 0x30
		::System::Single backwardDuration; // 0x38
		::System::Boolean IgnoreTargetPos; // 0x3C
		::System::Byte _padding0[0x3];
		::System::Single disToTargetRatio; // 0x40
		::System::Single forwardDuration; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUICAMERASTRETCH__CTOR_OFFSET))(this);
		}
	};
}
