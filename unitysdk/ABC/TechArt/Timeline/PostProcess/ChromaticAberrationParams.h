#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"

#define ABC_TECHART_TIMELINE_POSTPROCESS_CHROMATICABERRATIONPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x2854DC0)

namespace ABC::TechArt::Timeline::PostProcess
{
	inline static constexpr unsigned int ChromaticAberrationParams_TypeDefinitionIndex = 16042;

	struct alignas(4) ChromaticAberrationParams
	{
		::System::Boolean OverrideFilterA; // 0x10
		::System::Byte _padding0[0x3];
		::UnityEngine::E46B881AA2636190 FilterA; // 0x14
		::System::Boolean OverrideFilterB; // 0x24
		::System::Byte _padding1[0x3];
		::UnityEngine::E46B881AA2636190 FilterB; // 0x28
		::System::Boolean OverrideFilterC; // 0x38
		::System::Byte _padding2[0x3];
		::UnityEngine::E46B881AA2636190 FilterC; // 0x3C
		::System::Boolean CombineWithRadialBlur; // 0x4C
		::System::Boolean OverrideIntensity; // 0x4D
		::System::Byte _padding3[0x2];
		::System::Single Intensity; // 0x50

		::System::Void _ctor(::System::Boolean A267FE551C5A0512)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_CHROMATICABERRATIONPARAMS__CTOR_OFFSET))(this, A267FE551C5A0512);
		}
	};
}
