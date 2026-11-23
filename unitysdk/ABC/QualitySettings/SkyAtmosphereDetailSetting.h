#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F3A7E850877D3BCF/B647C0399A3AF931.h"
#include "unitysdk/System/Object.h"

#define ABC_QUALITYSETTINGS_SKYATMOSPHEREDETAILSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x2095350)

namespace ABC::QualitySettings
{
	inline static constexpr unsigned int SkyAtmosphereDetailSetting_TypeDefinitionIndex = 6965;

	class SkyAtmosphereDetailSetting : public ::System::Object
	{
	public:
		::F3A7E850877D3BCF::B647C0399A3AF931 SkyAtmosphereQuality; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_QUALITYSETTINGS_SKYATMOSPHEREDETAILSETTING__CTOR_OFFSET))(this);
		}
	};
}
