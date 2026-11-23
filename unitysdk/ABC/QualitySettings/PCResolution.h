#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ABC_QUALITYSETTINGS_PCRESOLUTION_COMPARETO_OFFSET UNITYSDK_OFFSET(0x21A5E00)
#define ABC_QUALITYSETTINGS_PCRESOLUTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ABC::QualitySettings
{
	inline static constexpr unsigned int PCResolution_TypeDefinitionIndex = 8836;

	class PCResolution : public ::System::Object
	{
	public:
		::System::Int32 width; // 0x10
		::System::Int32 height; // 0x14
		::System::Boolean isFullScreen; // 0x18

		::System::Int32 CompareTo(::ABC::QualitySettings::PCResolution* BEEE7A5A60941632)
		{
			return ((::System::Int32(*)(::PVOID, ::ABC::QualitySettings::PCResolution*))((::PBYTE)hIl2Cpp + ABC_QUALITYSETTINGS_PCRESOLUTION_COMPARETO_OFFSET))(this, BEEE7A5A60941632);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_QUALITYSETTINGS_PCRESOLUTION__CTOR_OFFSET))(this);
		}
	};
}
