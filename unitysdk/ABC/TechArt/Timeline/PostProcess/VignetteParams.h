#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ABC_TECHART_TIMELINE_POSTPROCESS_VIGNETTEPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x2867950)

namespace ABC::TechArt::Timeline::PostProcess
{
	inline static constexpr unsigned int VignetteParams_TypeDefinitionIndex = 16047;

	struct alignas(4) VignetteParams
	{
		::System::Boolean OverrideColor; // 0x10
		::System::Byte _padding0[0x3];
		::UnityEngine::E46B881AA2636190 Color; // 0x14
		::System::Boolean OverrideCenter; // 0x24
		::System::Byte _padding1[0x3];
		::UnityEngine::Vector3 Center; // 0x28
		::System::Boolean OverrideIntensity; // 0x34
		::System::Byte _padding2[0x3];
		::System::Single Intensity; // 0x38
		::System::Boolean OverrideSmoothness; // 0x3C
		::System::Byte _padding3[0x3];
		::System::Single Smoothness; // 0x40
		::System::Boolean Rounded; // 0x44

		::System::Void _ctor(::System::Boolean A267FE551C5A0512)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_VIGNETTEPARAMS__CTOR_OFFSET))(this, A267FE551C5A0512);
		}
	};
}
