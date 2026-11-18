#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SphereCameraConfig_LOMLDGKMEIB.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define MOLEMOLE_SPHERECAMERACONFIG_GET_OVERRIDEFOCUSPOINTHEIGHTVALUE_OFFSET UNITYSDK_OFFSET(0x10D5D940)
#define MOLEMOLE_SPHERECAMERACONFIG_SET_OVERRIDEFOCUSPOINTHEIGHTVALUE_OFFSET UNITYSDK_OFFSET(0x10D5D950)
#define MOLEMOLE_SPHERECAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x10D5D9B0)

namespace MoleMole
{
	inline static constexpr unsigned int SphereCameraConfig_TypeDefinitionIndex = 76854;

	class SphereCameraConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* SpecialTag; // 0x18
		::System::Int32 SpecialId; // 0x20
		::System::Boolean OverrideFocusPoint; // 0x24
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 FocusLocalPosition; // 0x28
		::System::Boolean OverrideFocusPointHeight; // 0x34
		::System::Byte _padding1[0x3];
		::System::Single Fov; // 0x38
		::System::Single Yaw; // 0x3C
		::System::Boolean LockYaw; // 0x40
		::System::Boolean LockPitch; // 0x41
		::System::Byte _padding2[0x2];
		::MoleMole::SphereCameraConfig_LOMLDGKMEIB RadiusEditMode; // 0x44
		::System::Single Radius; // 0x48
		::System::Single MaxRadius; // 0x4C
		::System::Single MinRadius; // 0x50
		::System::Single DebugRadius; // 0x54
		::MoleMole::SphereCameraConfig_LOMLDGKMEIB PitchEditMode; // 0x58
		::System::Single Pitch; // 0x5C
		::System::Single MaxPitch; // 0x60
		::System::Single MinPitch; // 0x64
		::System::Boolean EnableOverrideMaxMinPitch; // 0x68
		::System::Byte _padding3[0x3];
		::System::Single DebugPitch; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPHERECAMERACONFIG__CTOR_OFFSET))(this);
		}

		::System::Single get_OverrideFocusPointHeightValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPHERECAMERACONFIG_GET_OVERRIDEFOCUSPOINTHEIGHTVALUE_OFFSET))(this);
		}

		::System::Void set_OverrideFocusPointHeightValue(::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SPHERECAMERACONFIG_SET_OVERRIDEFOCUSPOINTHEIGHTVALUE_OFFSET))(this, EGEGIMGMJHN);
		}
	};
}
