#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define RPG_CUSTOMRP_PPFILTERSTACK_VIGNETTEPARAMETER_CTOR_1_OFFSET UNITYSDK_OFFSET(0xF5320)
#define RPG_CUSTOMRP_PPFILTERSTACK_VIGNETTEPARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0xF52E0)

namespace RPG::CustomRP
{
	struct alignas(4) PPFilterStack_VignetteParameter
	{
		::System::Boolean VignetteOverrideState; // 0x10
		::System::Boolean ColorOverrideState; // 0x11
		::System::Byte _padding0[0x2];
		::UnityEngine::Color Color; // 0x14
		::System::Boolean CenterOverrideState; // 0x24
		::System::Byte _padding1[0x3];
		::UnityEngine::Vector2 Center; // 0x28
		::System::Boolean IntensityOverrideState; // 0x30
		::System::Byte _padding2[0x3];
		::System::Single Intensity; // 0x34
		::System::Boolean SmoothnessOverrideState; // 0x38
		::System::Byte _padding3[0x3];
		::System::Single Smoothness; // 0x3C
		::System::Boolean RoundedOverrideState; // 0x40
		::System::Boolean Rounded; // 0x41
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PPFILTERSTACK_VIGNETTEPARAMETER_CTOR_OFFSET))(this, a1);
		}

		/*
		::System::Void _ctor_1(::RPG::CustomRP::PPFilterStack_VignetteParameter a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::PPFilterStack_VignetteParameter, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PPFILTERSTACK_VIGNETTEPARAMETER_CTOR_1_OFFSET))(this, a1, a2);
		}
		*/

	};
}
