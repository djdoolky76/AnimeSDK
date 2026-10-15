#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/MotionBlurMethod.h"
#include "unitysdk/RPG/CustomRP/MotionBlurQuality.h"

namespace RPGTools::Timeline::PostProcessing
{
	struct alignas(4) MotionBlurParameter
	{
		::System::Boolean MotionBlurMethodOverrideState; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::CustomRP::MotionBlurMethod BlurMethod; // 0x14
		::RPG::CustomRP::MotionBlurQuality BlurQuality; // 0x18
		::System::Single MotiongBlurAmount; // 0x1C
		::System::Int32 MotionBlurMax; // 0x20
	};
}
