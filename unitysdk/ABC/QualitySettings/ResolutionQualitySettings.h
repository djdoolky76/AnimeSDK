#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B88870E9FB4B8C1A/BDC388F9405C0783.h"
#include "unitysdk/System/Object.h"

#define ABC_QUALITYSETTINGS_RESOLUTIONQUALITYSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ABC::QualitySettings
{
	inline static constexpr unsigned int ResolutionQualitySettings_TypeDefinitionIndex = 7040;

	class ResolutionQualitySettings : public ::System::Object
	{
	public:
		::B88870E9FB4B8C1A::BDC388F9405C0783 superResolutionMethod; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_QUALITYSETTINGS_RESOLUTIONQUALITYSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
