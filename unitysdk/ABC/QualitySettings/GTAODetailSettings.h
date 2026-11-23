#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ABC_QUALITYSETTINGS_GTAODETAILSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1F442F0)

namespace ABC::QualitySettings
{
	inline static constexpr unsigned int GTAODetailSettings_TypeDefinitionIndex = 7685;

	class GTAODetailSettings : public ::System::Object
	{
	public:
		::System::Boolean enableGTAO; // 0x10
		::System::Boolean quadRes; // 0x11
		::System::Byte _padding0[0x2];
		::System::Int32 stepCount; // 0x14
		::System::Int32 maxPixelRadius; // 0x18
		::System::Int32 directionCount; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_QUALITYSETTINGS_GTAODETAILSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
