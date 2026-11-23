#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B88870E9FB4B8C1A/F1423450A5C611AD.h"
#include "unitysdk/F3A7E850877D3BCF/B647C0399A3AF931.h"
#include "unitysdk/System/Object.h"

#define ABC_QUALITYSETTINGS_ABCQUALITYSETTINGSMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x2294BD0)

namespace ABC::QualitySettings
{
	inline static constexpr unsigned int ABCQualitySettingsModel_TypeDefinitionIndex = 7048;

	class ABCQualitySettingsModel : public ::System::Object
	{
	public:
		::System::Int32 fps; // 0x10
		::System::Boolean vSyncEnabled; // 0x14
		::System::Byte _padding0[0x3];
		::System::Single renderScale; // 0x18
		::F3A7E850877D3BCF::B647C0399A3AF931 resolutionQuality; // 0x1C
		::F3A7E850877D3BCF::B647C0399A3AF931 shadowQuality; // 0x20
		::F3A7E850877D3BCF::B647C0399A3AF931 lightingQuality; // 0x24
		::F3A7E850877D3BCF::B647C0399A3AF931 characterQuality; // 0x28
		::F3A7E850877D3BCF::B647C0399A3AF931 envQuality; // 0x2C
		::F3A7E850877D3BCF::B647C0399A3AF931 reflectionQuality; // 0x30
		::F3A7E850877D3BCF::B647C0399A3AF931 vfxQuality; // 0x34
		::F3A7E850877D3BCF::B647C0399A3AF931 bloomQuality; // 0x38
		::F3A7E850877D3BCF::B647C0399A3AF931 postProcessQuality; // 0x3C
		::F3A7E850877D3BCF::B647C0399A3AF931 aaQuality; // 0x40
		::B88870E9FB4B8C1A::F1423450A5C611AD dlssMode; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_QUALITYSETTINGS_ABCQUALITYSETTINGSMODEL__CTOR_OFFSET))(this);
		}
	};
}
