#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_PPFILTERPARAMETER_JIHKKHMEKLO_OFFSET UNITYSDK_OFFSET(0xF401CF0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_PPFILTERPARAMETER_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x105E90)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int PPFilterParameter_TypeDefinitionIndex = 49629;

	struct alignas(8) PPFilterParameter
	{
		::System::Single Duration; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* AssetPath; // 0x18
		::System::Boolean IsActive; // 0x20
		/*
		static ::RPGTools::Timeline::PostProcessing::PPFilterParameter JIHKKHMEKLO(::System::Boolean a1)
		{
			return ((::RPGTools::Timeline::PostProcessing::PPFilterParameter(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_PPFILTERPARAMETER_JIHKKHMEKLO_OFFSET))(a1);
		}
		*/

		::System::Void KHGIKBFDLFB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_PPFILTERPARAMETER_KHGIKBFDLFB_OFFSET))(this, a1);
		}

	};
}
