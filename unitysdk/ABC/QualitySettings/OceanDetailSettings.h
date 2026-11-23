#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F3A7E850877D3BCF/B647C0399A3AF931.h"
#include "unitysdk/System/Object.h"

#define ABC_QUALITYSETTINGS_OCEANDETAILSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x2095350)

namespace ABC::QualitySettings
{
	inline static constexpr unsigned int OceanDetailSettings_TypeDefinitionIndex = 8561;

	class OceanDetailSettings : public ::System::Object
	{
	public:
		::F3A7E850877D3BCF::B647C0399A3AF931 oceanQuality; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_QUALITYSETTINGS_OCEANDETAILSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
