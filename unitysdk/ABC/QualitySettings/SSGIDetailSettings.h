#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ABC_QUALITYSETTINGS_SSGIDETAILSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1EAA380)

namespace ABC::QualitySettings
{
	inline static constexpr unsigned int SSGIDetailSettings_TypeDefinitionIndex = 6736;

	class SSGIDetailSettings : public ::System::Object
	{
	public:
		::System::Boolean enableSSGI; // 0x10
		::System::Boolean quadRes; // 0x11
		::System::Byte _padding0[0x2];
		::System::Int32 ssgiSampleCount; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_QUALITYSETTINGS_SSGIDETAILSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
