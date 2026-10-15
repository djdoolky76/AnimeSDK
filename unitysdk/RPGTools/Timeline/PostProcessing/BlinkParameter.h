#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"

#define RPGTOOLS_TIMELINE_POSTPROCESSING_BLINKPARAMETER_JIHKKHMEKLO_OFFSET UNITYSDK_OFFSET(0xE91A2C0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_BLINKPARAMETER_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xF8270)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int BlinkParameter_TypeDefinitionIndex = 48541;

	struct alignas(4) BlinkParameter
	{
		::System::Single Duration; // 0x10
		::UnityEngine::Color Color; // 0x14
		::System::Single Dist; // 0x24
		::System::Single Radii; // 0x28
		::System::Single Chick; // 0x2C
		::System::Single Aspect; // 0x30
		::System::Single DownScale; // 0x34
		::System::Single SmoothRange; // 0x38
		::System::Single Offset; // 0x3C
		::System::Single Rotation; // 0x40
		::System::Boolean IsActive; // 0x44
		/*
		static ::RPGTools::Timeline::PostProcessing::BlinkParameter JIHKKHMEKLO(::System::Boolean a1)
		{
			return ((::RPGTools::Timeline::PostProcessing::BlinkParameter(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_BLINKPARAMETER_JIHKKHMEKLO_OFFSET))(a1);
		}
		*/

		::System::Void KHGIKBFDLFB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_BLINKPARAMETER_KHGIKBFDLFB_OFFSET))(this, a1);
		}

	};
}
