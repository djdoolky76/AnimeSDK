#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F3A7E850877D3BCF/B647C0399A3AF931.h"
#include "unitysdk/System/Object.h"

#define ABC_QUALITYSETTINGS_INTERACTDETAILSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x2281EB0)

namespace ABC::QualitySettings
{
	inline static constexpr unsigned int InteractDetailSettings_TypeDefinitionIndex = 6992;

	class InteractDetailSettings : public ::System::Object
	{
	public:
		::F3A7E850877D3BCF::B647C0399A3AF931 WaterInteractQuality; // 0x10
		::F3A7E850877D3BCF::B647C0399A3AF931 FoliageInteractQuality; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_QUALITYSETTINGS_INTERACTDETAILSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
