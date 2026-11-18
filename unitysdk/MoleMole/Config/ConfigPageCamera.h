#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigPageCameraBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ConfigCameraNoise; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGPAGECAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1653DB60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPageCamera_TypeDefinitionIndex = 38977;

	class ConfigPageCamera : public ::MoleMole::Config::ConfigPageCameraBase
	{
	public:
		::UnityEngine::AnimationCurve* initCameraFovCurveSpecial; // 0x10
		::UnityEngine::AnimationCurve* initToSpecialCameraFovCurve; // 0x18
		::UnityEngine::AnimationCurve* initToSpecialTranslationCurve; // 0x20
		::MoleMole::Config::ConfigCameraNoise* cameraNoiseProfile; // 0x28
		::System::String* stretchCameraKey; // 0x30
		::UnityEngine::AnimationCurve* noiseBlendSpeedCurve; // 0x38
		::UnityEngine::AnimationCurve* initCameraFovCurve; // 0x40
		::UnityEngine::AnimationCurve* initTranslationCurveSpecial; // 0x48
		::UnityEngine::AnimationCurve* initTranslationCurve; // 0x50
		::System::Single noiseBlendDuration; // 0x58
		::System::Single initDuration; // 0x5C
		::UnityEngine::Vector3 bornAimPosition; // 0x60
		::System::Single initCameraFovSpecial; // 0x6C
		::System::Single initDurationSpecial; // 0x70
		::UnityEngine::Vector3 initPosition; // 0x74
		::System::Single initCameraFov; // 0x80
		::System::Single initToSpecialDuration; // 0x84
		::System::Boolean applySpecialCameraPosition; // 0x88
		::System::Boolean applyAimPosition; // 0x89
		::System::Boolean applySpecialCameraTranslation; // 0x8A
		::System::Byte _padding0[0x1];
		::UnityEngine::Vector3 bornPositionSpecial; // 0x8C
		::UnityEngine::Vector3 bornPosition; // 0x98
		::UnityEngine::Vector3 initPositionSpecial; // 0xA4
		::System::Single bornCameraFov; // 0xB0
		::System::Boolean applySpecialCameraAimPosition; // 0xB4
		::System::Boolean applySpecialCameraFov; // 0xB5
		::System::Byte _padding1[0x2];
		::System::Single bornCameraFovSpecial; // 0xB8
		::UnityEngine::Vector3 initAimPositionSpecial; // 0xBC
		::UnityEngine::Vector3 initAimPosition; // 0xC8
		::UnityEngine::Vector3 bornAimPositionSpecial; // 0xD4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPAGECAMERA__CTOR_OFFSET))(this);
		}
	};
}
