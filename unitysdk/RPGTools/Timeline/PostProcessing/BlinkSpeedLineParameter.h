#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"

#define RPGTOOLS_TIMELINE_POSTPROCESSING_BLINKSPEEDLINEPARAMETER_JIHKKHMEKLO_OFFSET UNITYSDK_OFFSET(0xE91A3C0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_BLINKSPEEDLINEPARAMETER_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xF8350)

namespace RPGTools::Timeline::PostProcessing
{
	struct alignas(4) BlinkSpeedLineParameter
	{
		::System::Single Duration; // 0x10
		::System::Single Offset; // 0x14
		::UnityEngine::Color Color; // 0x18
		::System::Single Dist; // 0x28
		::System::Single Radii; // 0x2C
		::System::Single Chick; // 0x30
		::System::Single Aspect; // 0x34
		::System::Single DownScale; // 0x38
		::System::Single SmoothRange; // 0x3C
		::System::Single Rotation; // 0x40
		::System::Single DistortStrength; // 0x44
		::System::Single DistortFreq; // 0x48
		::System::Single BlinkSpeedlineSpeed; // 0x4C
		::System::Single BlinkSpeedlineRange; // 0x50
		::System::Single BlinkSpeedlineLength; // 0x54
		::System::Single BlinkSpeedlineWidth; // 0x58
		::System::Boolean IsActive; // 0x5C
		/*
		static ::RPGTools::Timeline::PostProcessing::BlinkSpeedLineParameter JIHKKHMEKLO(::System::Boolean a1)
		{
			return ((::RPGTools::Timeline::PostProcessing::BlinkSpeedLineParameter(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_BLINKSPEEDLINEPARAMETER_JIHKKHMEKLO_OFFSET))(a1);
		}
		*/

		::System::Void KHGIKBFDLFB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_BLINKSPEEDLINEPARAMETER_KHGIKBFDLFB_OFFSET))(this, a1);
		}

	};
}
