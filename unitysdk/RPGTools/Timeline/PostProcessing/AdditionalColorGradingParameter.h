#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/ColorGradingGradual.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_ADDITIONALCOLORGRADINGPARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0xF8170)

namespace RPGTools::Timeline::PostProcessing
{
	struct alignas(8) AdditionalColorGradingParameter
	{
		::System::Boolean ColorGradingMethodEnable; // 0x10
		::System::Byte _padding0[0x7];
		::UnityEngine::Texture2D* CustomLUT; // 0x18
		::System::Single CustomLUTIntensity; // 0x20
		::System::Boolean GradualNoiseTexOverrideState; // 0x24
		::System::Byte _padding1[0x3];
		::UnityEngine::Texture* GradualNoiseTex; // 0x28
		::System::Boolean GradualNoiseIntensityOverrideState; // 0x30
		::System::Byte _padding2[0x3];
		::System::Single GradualNoiseIntensity; // 0x34
		::System::Boolean GradualNoiseScaleOverrideState; // 0x38
		::System::Byte _padding3[0x3];
		::UnityEngine::Vector2 GradualNoiseScale; // 0x3C
		::System::Boolean GradualNoiseOffsetOverrideState; // 0x44
		::System::Byte _padding4[0x3];
		::UnityEngine::Vector2 GradualNoiseOffset; // 0x48
		::System::Boolean ColorGradingGradualParamOverrideState; // 0x50
		::System::Byte _padding5[0x3];
		::RPG::CustomRP::ColorGradingGradual ColorGradingGradualParam; // 0x54
		::System::Boolean CenterXOverrideState; // 0x58
		::System::Byte _padding6[0x3];
		::System::Single CenterX; // 0x5C
		::System::Boolean CenterYOverrideState; // 0x60
		::System::Byte _padding7[0x3];
		::System::Single CenterY; // 0x64
		::System::Boolean StartRadiusOverrideState; // 0x68
		::System::Byte _padding8[0x3];
		::System::Single StartRadius; // 0x6C
		::System::Boolean RoundnessOverrideState; // 0x70
		::System::Byte _padding9[0x3];
		::System::Single Roundness; // 0x74
		::System::Boolean BlendRadiusOverrideState; // 0x78
		::System::Byte _padding10[0x3];
		::System::Single BlendRadius; // 0x7C
		::System::Boolean AngleOverrideState; // 0x80
		::System::Byte _padding11[0x3];
		::System::Single Angle; // 0x84
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_ADDITIONALCOLORGRADINGPARAMETER_CTOR_OFFSET))(this, a1);
		}

	};
}
