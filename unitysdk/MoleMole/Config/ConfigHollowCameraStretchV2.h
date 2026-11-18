#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/HollowCameraTypeZ.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class AnimCurveParam; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERASTRETCHV2_DISTOTARGET_OFFSET UNITYSDK_OFFSET(0x1A7645A0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERASTRETCHV2__CTOR_OFFSET UNITYSDK_OFFSET(0x1A764620)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowCameraStretchV2_TypeDefinitionIndex = 78985;

	class ConfigHollowCameraStretchV2 : public ::System::Object
	{
	public:
		::MoleMole::Config::AnimCurveParam* BackwardRotCurveZ; // 0x10
		::MoleMole::Config::AnimCurveParam* ForwardRotCurveY; // 0x18
		::MoleMole::Config::AnimCurveParam* BackwardFovCurve; // 0x20
		::MoleMole::Config::AnimCurveParam* BackwardRotCurveX; // 0x28
		::MoleMole::Config::AnimCurveParam* ForwardFovCurve; // 0x30
		::MoleMole::Config::AnimCurveParam* ForwardRotCurveZ; // 0x38
		::MoleMole::Config::AnimCurveParam* BackwardDistortionCurve; // 0x40
		::MoleMole::Config::AnimCurveParam* ForwardDistortionCurve; // 0x48
		::MoleMole::Config::AnimCurveParam* BackwardRotCurveY; // 0x50
		::MoleMole::Config::AnimCurveParam* ForwardPosCurveZ; // 0x58
		::MoleMole::Config::AnimCurveParam* ForwardPosCurveY; // 0x60
		::MoleMole::Config::AnimCurveParam* BackwardPosCurveX; // 0x68
		::MoleMole::Config::AnimCurveParam* ForwardPosCurveX; // 0x70
		::System::String* ForwardSoundActionKey; // 0x78
		::MoleMole::Config::AnimCurveParam* BackwardPosCurveZ; // 0x80
		::MoleMole::Config::AnimCurveParam* ForwardRotCurveX; // 0x88
		::System::String* BackwardSoundActionKey; // 0x90
		::MoleMole::Config::AnimCurveParam* BackwardPosCurveY; // 0x98
		::System::Int32 BackwardSoundID; // 0xA0
		::System::Single TargetFov; // 0xA4
		::MoleMole::Config::HollowCameraTypeZ ConfigHollowCameraTypeZ; // 0xA8
		::UnityEngine::Vector3 TargetRotDelta; // 0xAC
		::System::Boolean IsBackwardPosCurveSameXY; // 0xB8
		::System::Boolean IsForwardPosCurveSameXY; // 0xB9
		::System::Boolean IsBackwardRotCurveSameXYZ; // 0xBA
		::System::Boolean IsForwardBackwardPosSameXY; // 0xBB
		::System::Single TargetDistortionIntensity; // 0xBC
		::System::Single GroupFramingSize; // 0xC0
		::System::Single ConfigDisToTarget; // 0xC4
		::System::Int32 ForwardSoundID; // 0xC8
		::UnityEngine::Vector2 ScreenCenter; // 0xCC
		::System::Boolean IsForwardRotCurveSameXYZ; // 0xD4
		::System::Boolean IsForwardBackwardSameDistortionCurve; // 0xD5
		::System::Boolean IsForwardBackwardSameZ; // 0xD6
		::System::Boolean IsForwardBackwardRotSame; // 0xD7
		::System::Boolean IsForwardBackwardSameFovCurve; // 0xD8
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector2 PosOffsetXY; // 0xDC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERASTRETCHV2__CTOR_OFFSET))(this);
		}

		::System::Single DisToTarget(::System::Single baseZ, ::System::Single curBaseZ)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERASTRETCHV2_DISTOTARGET_OFFSET))(this, baseZ, curBaseZ);
		}
	};
}
