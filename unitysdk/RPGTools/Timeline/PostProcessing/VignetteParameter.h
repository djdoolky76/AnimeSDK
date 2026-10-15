#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTEPARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0xF93C0)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int VignetteParameter_TypeDefinitionIndex = 48629;

	struct alignas(4) VignetteParameter
	{
		::System::Boolean VignetteOverrideState; // 0x10
		::System::Byte _padding0[0x3];
		::UnityEngine::Color Color; // 0x14
		::UnityEngine::Vector2 Center; // 0x24
		::System::Single Intensity; // 0x2C
		::System::Single Smoothness; // 0x30
		::System::Boolean Rounded; // 0x34
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_VIGNETTEPARAMETER_CTOR_OFFSET))(this, a1);
		}

	};
}
