#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowCameraShake_ParamType.h"
#include "unitysdk/MoleMole/Config/ConfigHollowCameraShake_ShakeAtom.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERASHAKE__CTOR_OFFSET UNITYSDK_OFFSET(0x19B188D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowCameraShake_TypeDefinitionIndex = 76642;

	class ConfigHollowCameraShake : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom AmplitudeAtomY; // 0x10
		::UnityEngine::AnimationCurve* shakeFadeCurve; // 0x30
		::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom AmplitudeAtomAngleZ; // 0x38
		::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom AmplitudeAtomAngleX; // 0x58
		::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom AmplitudeAtomX; // 0x78
		::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom AmplitudeAtomZ; // 0x98
		::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom AmplitudeAtomAngleY; // 0xB8
		::System::Int32 frequency; // 0xD8
		::System::Single shakeDirXY; // 0xDC
		::System::Single delayTime; // 0xE0
		::System::Single shakeOffsetAngleDirXY; // 0xE4
		::MoleMole::Config::ConfigHollowCameraShake_ParamType paramType; // 0xE8
		::System::Single shakeDuration; // 0xEC
		::System::Single shakeAmplituedePowerDirZ; // 0xF0
		::System::Int32 AudioID; // 0xF4
		::System::Single shakeAmplitudePowerDirY; // 0xF8
		::System::Single shakeAmplitudePowerDirX; // 0xFC
		::System::Boolean isEnableShakeFade; // 0x100
		::System::Byte _padding0[0x3];
		::System::Single shakeAmplitudeOffsetXYZ; // 0x104

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERASHAKE__CTOR_OFFSET))(this);
		}
	};
}
