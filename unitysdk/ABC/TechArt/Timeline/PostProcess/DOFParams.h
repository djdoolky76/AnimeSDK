#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B88870E9FB4B8C1A/F7C63FD12203AD82.h"
#include "unitysdk/System/ValueType.h"

#define ABC_TECHART_TIMELINE_POSTPROCESS_DOFPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x2856B50)

namespace ABC::TechArt::Timeline::PostProcess
{
	inline static constexpr unsigned int DOFParams_TypeDefinitionIndex = 15988;

	struct alignas(4) DOFParams
	{
		::System::Boolean OverrideFocalDistance; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single FocalDistance; // 0x14
		::System::Boolean OverridePhyFStop; // 0x18
		::System::Byte _padding1[0x3];
		::System::Single PhyFStop; // 0x1C
		::System::Boolean OverridePhySensorWidthMM; // 0x20
		::System::Byte _padding2[0x3];
		::System::Single PhySensorWidthMM; // 0x24
		::System::Boolean OverridePhyFocalRange; // 0x28
		::System::Byte _padding3[0x3];
		::System::Single PhyFocalRange; // 0x2C
		::B88870E9FB4B8C1A::F7C63FD12203AD82 DebugState; // 0x30

		::System::Void _ctor(::System::Boolean A267FE551C5A0512)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_DOFPARAMS__CTOR_OFFSET))(this, A267FE551C5A0512);
		}
	};
}
