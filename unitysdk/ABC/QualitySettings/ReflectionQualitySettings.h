#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ABC_QUALITYSETTINGS_REFLECTIONQUALITYSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE84E0)

namespace ABC::QualitySettings
{
	inline static constexpr unsigned int ReflectionQualitySettings_TypeDefinitionIndex = 8156;

	class ReflectionQualitySettings : public ::System::Object
	{
	public:
		::System::Boolean ssrEnabled; // 0x10
		::System::Boolean ssprEnabled; // 0x11
		::System::Boolean halfResSSPREnabled; // 0x12
		::System::Boolean halfResReflectionProbeRT; // 0x13
		::System::Boolean waterSSREnabled; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_QUALITYSETTINGS_REFLECTIONQUALITYSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
