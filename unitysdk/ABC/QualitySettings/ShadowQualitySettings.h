#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B88870E9FB4B8C1A/EA66985EDBCB8465.h"
#include "unitysdk/B88870E9FB4B8C1A/EEEFCE0321D10542.h"
#include "unitysdk/B88870E9FB4B8C1A/FBB3DFCE2278DED8.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace ABC::QualitySettings { class VirtualShadowQualitySettings; }

#define ABC_QUALITYSETTINGS_SHADOWQUALITYSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC0EF0)

namespace ABC::QualitySettings
{
	inline static constexpr unsigned int ShadowQualitySettings_TypeDefinitionIndex = 6743;

	class ShadowQualitySettings : public ::System::Object
	{
	public:
		::System::Single shadowDistance; // 0x10
		::UnityEngine::Vector3 cascadeSplitRatio; // 0x14
		::System::Single cascadeLastBorder; // 0x20
		::B88870E9FB4B8C1A::FBB3DFCE2278DED8 shadowResolution; // 0x24
		::System::Boolean useContactShadow; // 0x28
		::System::Boolean usePCSS; // 0x29
		::System::Boolean usePcssPenumbraColorRamp; // 0x2A
		::System::Byte _padding0[0x1];
		::B88870E9FB4B8C1A::EEEFCE0321D10542 pcfQuality; // 0x2C
		::System::Boolean useHalfResScreenSpaceShadow; // 0x30
		::System::Boolean useSubsurfaceShadow; // 0x31
		::System::Boolean useCSMBlend; // 0x32
		::System::Byte _padding1[0x1];
		::B88870E9FB4B8C1A::EA66985EDBCB8465 localLightShadowPoolMethod; // 0x34
		::B88870E9FB4B8C1A::FBB3DFCE2278DED8 pointLightShadowMaxResolution; // 0x38
		::B88870E9FB4B8C1A::FBB3DFCE2278DED8 spotLightShadowMaxResolution; // 0x3C
		::B88870E9FB4B8C1A::FBB3DFCE2278DED8 posmResolution; // 0x40
		::System::Int32 maxPOSMCount; // 0x44
		::System::Int32 maxSelfShadowCount; // 0x48
		::System::Byte _padding2[0x4];
		::ABC::QualitySettings::VirtualShadowQualitySettings* virtualShadowQualitySettings; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_QUALITYSETTINGS_SHADOWQUALITYSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
