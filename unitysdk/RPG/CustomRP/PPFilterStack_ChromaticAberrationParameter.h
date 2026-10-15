#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"

#define RPG_CUSTOMRP_PPFILTERSTACK_CHROMATICABERRATIONPARAMETER_CTOR_1_OFFSET UNITYSDK_OFFSET(0xF4290)
#define RPG_CUSTOMRP_PPFILTERSTACK_CHROMATICABERRATIONPARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0xF4250)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int PPFilterStack_ChromaticAberrationParameter_TypeDefinitionIndex = 51858;

	struct alignas(4) PPFilterStack_ChromaticAberrationParameter
	{
		::System::Boolean ChromaticAberrationOverrideState; // 0x10
		::System::Boolean FilterAOverrideState; // 0x11
		::System::Byte _padding0[0x2];
		::UnityEngine::Color FilterA; // 0x14
		::System::Boolean FilterBOverrideState; // 0x24
		::System::Byte _padding1[0x3];
		::UnityEngine::Color FilterB; // 0x28
		::System::Boolean FilterCOverrideState; // 0x38
		::System::Byte _padding2[0x3];
		::UnityEngine::Color FilterC; // 0x3C
		::System::Boolean IntensityOverrideState; // 0x4C
		::System::Byte _padding3[0x3];
		::System::Single Intensity; // 0x50
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PPFILTERSTACK_CHROMATICABERRATIONPARAMETER_CTOR_OFFSET))(this, a1);
		}

		/*
		::System::Void _ctor_1(::RPG::CustomRP::PPFilterStack_ChromaticAberrationParameter a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::PPFilterStack_ChromaticAberrationParameter, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PPFILTERSTACK_CHROMATICABERRATIONPARAMETER_CTOR_1_OFFSET))(this, a1, a2);
		}
		*/

	};
}
