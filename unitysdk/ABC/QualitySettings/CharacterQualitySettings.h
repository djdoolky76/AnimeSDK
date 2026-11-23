#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F3A7E850877D3BCF/B647C0399A3AF931.h"
#include "unitysdk/System/Object.h"

#define ABC_QUALITYSETTINGS_CHARACTERQUALITYSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x2026CE0)

namespace ABC::QualitySettings
{
	inline static constexpr unsigned int CharacterQualitySettings_TypeDefinitionIndex = 8276;

	class CharacterQualitySettings : public ::System::Object
	{
	public:
		::System::Boolean hairEyeBlendEnabled; // 0x10
		::System::Boolean dynamicBoneEnabled; // 0x11
		::System::Byte _padding0[0x2];
		::F3A7E850877D3BCF::B647C0399A3AF931 lodQuality; // 0x14
		::System::Int32 MaxVATPedCount; // 0x18
		::System::Int32 MaxVATAwakeCount; // 0x1C
		::System::Single VATEnableDistance; // 0x20
		::System::Single VATDisableDistance; // 0x24
		::System::Single VATVisibleDistance; // 0x28
		::System::Single VATInvisibleDistance; // 0x2C
		::System::Single maxCharacterForwardEmissionDistance; // 0x30
		::System::Single VATOutlineDistanceThreshold; // 0x34
		::System::Single VATMotionVectorDistanceThreshold; // 0x38
		::System::Single VATShadowCasterDistanceThreshold; // 0x3C
		::System::Boolean useHairShadow; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_QUALITYSETTINGS_CHARACTERQUALITYSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
