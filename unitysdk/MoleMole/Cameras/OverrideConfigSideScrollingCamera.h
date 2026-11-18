#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_CAMERAS_OVERRIDECONFIGSIDESCROLLINGCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0xFFBFE10)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int OverrideConfigSideScrollingCamera_TypeDefinitionIndex = 72279;

	class OverrideConfigSideScrollingCamera : public ::System::Object
	{
	public:
		::System::Boolean EnableOverrideFov; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single OverrideFov; // 0x14
		::System::Boolean EnableOverrideRadius; // 0x18
		::System::Byte _padding1[0x3];
		::System::Single OverrideRadius; // 0x1C
		::System::Boolean EnableOverridePitchAngle; // 0x20
		::System::Byte _padding2[0x3];
		::System::Single OverridePitchAngle; // 0x24
		::System::Boolean EnableOverrideLookAtWorldPosOffset; // 0x28
		::System::Byte _padding3[0x3];
		::UnityEngine::Vector3 OverrideLookAtWorldPosOffset; // 0x2C

		::System::Void _ctor(::System::Boolean IAIKBEGKIAJ, ::System::Single NEBAIPMHMED, ::System::Boolean CEFOFAMBNKF, ::System::Single FDDJGOBDIIC, ::System::Boolean MACGJEBHEBD, ::System::Single EOACFFAJNEM, ::System::Boolean MHIPEBHLHHG, ::UnityEngine::Vector3 NOIFNGJNKOG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::Single, ::System::Boolean, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERRIDECONFIGSIDESCROLLINGCAMERA__CTOR_OFFSET))(this, IAIKBEGKIAJ, NEBAIPMHMED, CEFOFAMBNKF, FDDJGOBDIIC, MACGJEBHEBD, EOACFFAJNEM, MHIPEBHLHHG, NOIFNGJNKOG);
		}
	};
}
