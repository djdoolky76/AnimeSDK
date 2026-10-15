#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/GaussianBlurGradual.h"

#define RPGTOOLS_TIMELINE_POSTPROCESSING_GAUSSIANBLURPARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0xF8D60)

namespace RPGTools::Timeline::PostProcessing
{
	struct alignas(4) GaussianBlurParameter
	{
		::System::Boolean overrideState; // 0x10
		::System::Boolean GaussianBlurLightenEnable; // 0x11
		::System::Byte _padding0[0x2];
		::System::Single GaussianBlurLightenIntensity; // 0x14
		::System::Single BlurScale; // 0x18
		::RPG::CustomRP::GaussianBlurGradual GaussianBlurGradualParam; // 0x1C
		::System::Single CenterX; // 0x20
		::System::Single CenterY; // 0x24
		::System::Single StartRadius; // 0x28
		::System::Single BlendRadius; // 0x2C
		::System::Single Angle; // 0x30
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_GAUSSIANBLURPARAMETER_CTOR_OFFSET))(this, a1);
		}

	};
}
