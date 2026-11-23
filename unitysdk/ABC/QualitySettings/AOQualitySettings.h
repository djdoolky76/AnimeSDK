#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B88870E9FB4B8C1A/A27DC0C23F9B38CE.h"
#include "unitysdk/System/Object.h"

namespace ABC::QualitySettings { class GTAODetailSettings; }

#define ABC_QUALITYSETTINGS_AOQUALITYSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x2245130)

namespace ABC::QualitySettings
{
	inline static constexpr unsigned int AOQualitySettings_TypeDefinitionIndex = 6883;

	class AOQualitySettings : public ::System::Object
	{
	public:
		::B88870E9FB4B8C1A::A27DC0C23F9B38CE ssaoQuality; // 0x10
		::System::Byte _padding0[0x4];
		::ABC::QualitySettings::GTAODetailSettings* gtaoDetailSettings; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_QUALITYSETTINGS_AOQUALITYSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
