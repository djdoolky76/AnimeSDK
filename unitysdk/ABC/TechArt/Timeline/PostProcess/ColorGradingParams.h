#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define ABC_TECHART_TIMELINE_POSTPROCESS_COLORGRADINGPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x2899540)

namespace ABC::TechArt::Timeline::PostProcess
{
	inline static constexpr unsigned int ColorGradingParams_TypeDefinitionIndex = 16221;

	struct alignas(4) ColorGradingParams
	{
		::System::Boolean OverrideCcGlobalSaturationScale; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single CcGlobalSaturationScale; // 0x14
		::System::Boolean OverrideCcGlobalContrastScale; // 0x18
		::System::Byte _padding1[0x3];
		::System::Single CcGlobalContrastScale; // 0x1C

		::System::Void _ctor(::System::Boolean A267FE551C5A0512)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_COLORGRADINGPARAMS__CTOR_OFFSET))(this, A267FE551C5A0512);
		}
	};
}
