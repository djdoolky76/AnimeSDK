#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/E8984F4E44AE20E5.h"

#define ABC_TECHART_TIMELINE_POSTPROCESS_BLOOMPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x2886530)

namespace ABC::TechArt::Timeline::PostProcess
{
	inline static constexpr unsigned int BloomParams_TypeDefinitionIndex = 16180;

	struct alignas(4) BloomParams
	{
		::System::Boolean OverrideThreshold; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single Threshold; // 0x14
		::System::Boolean OverrideThresholdCut; // 0x18
		::System::Byte _padding1[0x3];
		::System::Single ThresholdCut; // 0x1C
		::System::Boolean OverrideIntensity; // 0x20
		::System::Byte _padding2[0x3];
		::System::Single Intensity; // 0x24
		::System::Boolean OverrideScalar; // 0x28
		::System::Byte _padding3[0x3];
		::System::Single Scalar; // 0x2C
		::System::Boolean OverrideHK4EBlurComposeWeights; // 0x30
		::System::Byte _padding4[0x3];
		::UnityEngine::E8984F4E44AE20E5 HK4EBlurComposeWeights; // 0x34
		::System::Boolean OverrideHK4EBlurLevelHeights; // 0x44
		::System::Byte _padding5[0x3];
		::UnityEngine::E8984F4E44AE20E5 HK4EBlurLevelHeights; // 0x48

		::System::Void _ctor(::System::Boolean A267FE551C5A0512)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_BLOOMPARAMS__CTOR_OFFSET))(this, A267FE551C5A0512);
		}
	};
}
