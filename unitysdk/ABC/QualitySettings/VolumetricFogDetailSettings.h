#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B88870E9FB4B8C1A/A10FAFC3F46ACA76.h"
#include "unitysdk/System/Object.h"

#define ABC_QUALITYSETTINGS_VOLUMETRICFOGDETAILSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x2243D00)

namespace ABC::QualitySettings
{
	inline static constexpr unsigned int VolumetricFogDetailSettings_TypeDefinitionIndex = 9145;

	class VolumetricFogDetailSettings : public ::System::Object
	{
	public:
		::System::Boolean enableVolumetricFog; // 0x10
		::System::Boolean withGI; // 0x11
		::System::Boolean withLocalLight; // 0x12
		::System::Boolean localLightShadow; // 0x13
		::System::Int32 tileSize; // 0x14
		::System::Int32 maxSliceCount; // 0x18
		::System::Int32 maxLocalVolumeCount; // 0x1C
		::B88870E9FB4B8C1A::A10FAFC3F46ACA76 filterMode; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_QUALITYSETTINGS_VOLUMETRICFOGDETAILSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
