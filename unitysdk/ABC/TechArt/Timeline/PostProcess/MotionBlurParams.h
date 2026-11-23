#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define ABC_TECHART_TIMELINE_POSTPROCESS_MOTIONBLURPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x28E5F00)

namespace ABC::TechArt::Timeline::PostProcess
{
	inline static constexpr unsigned int MotionBlurParams_TypeDefinitionIndex = 16368;

	struct alignas(4) MotionBlurParams
	{
		::System::Boolean OverrideAmount; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single Amount; // 0x14
		::System::Boolean OverrideMaxScale; // 0x18
		::System::Byte _padding1[0x3];
		::System::Single MaxScale; // 0x1C

		::System::Void _ctor(::System::Boolean A267FE551C5A0512)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_MOTIONBLURPARAMS__CTOR_OFFSET))(this, A267FE551C5A0512);
		}
	};
}
