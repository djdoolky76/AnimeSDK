#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/ColorGradingGradual.h"
#include "unitysdk/UnityEngine/Color.h"

#define RPGTOOLS_TIMELINE_POSTPROCESSING_COLORGRADINGPARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0xF8A10)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int ColorGradingParameter_TypeDefinitionIndex = 48557;

	struct alignas(4) ColorGradingParameter
	{
		::System::Boolean ColorGradingMethodEnable; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single LevelHighlightTone; // 0x14
		::System::Single LevelShadowTone; // 0x18
		::UnityEngine::Color LevelColor; // 0x1C
		::System::Boolean ColorSaturationGlobalOverrideState; // 0x2C
		::System::Byte _padding1[0x3];
		::UnityEngine::Color ColorSaturationGlobalColor; // 0x30
		::System::Single ColorSaturationGlobalValue; // 0x40
		::System::Boolean ColorContrastGlobalOverrideState; // 0x44
		::System::Byte _padding2[0x3];
		::UnityEngine::Color ColorContrastGlobalColor; // 0x48
		::System::Single ColorContrastGlobalValue; // 0x58
		::System::Boolean ColorGainGlobalOverrideState; // 0x5C
		::System::Byte _padding3[0x3];
		::UnityEngine::Color ColorGainGlobalColor; // 0x60
		::System::Single ColorGainGlobalValue; // 0x70
		::System::Boolean ColorSaturationShadowOverrideState; // 0x74
		::System::Byte _padding4[0x3];
		::UnityEngine::Color ColorSaturationShadowColor; // 0x78
		::System::Single ColorSaturationShadowValue; // 0x88
		::System::Boolean ColorContrastShadowOverrideState; // 0x8C
		::System::Byte _padding5[0x3];
		::UnityEngine::Color ColorContrastShadowColor; // 0x90
		::System::Single ColorContrastShadowValue; // 0xA0
		::System::Boolean ColorGainShadowOverrideState; // 0xA4
		::System::Byte _padding6[0x3];
		::UnityEngine::Color ColorGainShadowColor; // 0xA8
		::System::Single ColorGainShadowValue; // 0xB8
		::System::Boolean ColorSaturationMidtoneOverrideState; // 0xBC
		::System::Byte _padding7[0x3];
		::UnityEngine::Color ColorSaturationMidtoneColor; // 0xC0
		::System::Single ColorSaturationMidtoneValue; // 0xD0
		::System::Boolean ColorContrastMidtoneOverrideState; // 0xD4
		::System::Byte _padding8[0x3];
		::UnityEngine::Color ColorContrastMidtoneColor; // 0xD8
		::System::Single ColorContrastMidtoneValue; // 0xE8
		::System::Boolean ColorGainMidtoneOverrideState; // 0xEC
		::System::Byte _padding9[0x3];
		::UnityEngine::Color ColorGainMidtoneColor; // 0xF0
		::System::Single ColorGainMidtoneValue; // 0x100
		::System::Boolean ColorSaturationHighlightOverrideState; // 0x104
		::System::Byte _padding10[0x3];
		::UnityEngine::Color ColorSaturationHighlightColor; // 0x108
		::System::Single ColorSaturationHighlightValue; // 0x118
		::System::Boolean ColorContrastHighlightOverrideState; // 0x11C
		::System::Byte _padding11[0x3];
		::UnityEngine::Color ColorContrastHighlightColor; // 0x120
		::System::Single ColorContrastHighlightValue; // 0x130
		::System::Boolean ColorGainHighlightOverrideState; // 0x134
		::System::Byte _padding12[0x3];
		::UnityEngine::Color ColorGainHighlightColor; // 0x138
		::System::Single ColorGainHighlightValue; // 0x148
		::System::Boolean ColorGradingGradualParamOverrideState; // 0x14C
		::System::Byte _padding13[0x3];
		::RPG::CustomRP::ColorGradingGradual ColorGradingGradualParam; // 0x150
		::System::Boolean CenterXOverrideState; // 0x154
		::System::Byte _padding14[0x3];
		::System::Single CenterX; // 0x158
		::System::Boolean CenterYOverrideState; // 0x15C
		::System::Byte _padding15[0x3];
		::System::Single CenterY; // 0x160
		::System::Boolean StartRadiusOverrideState; // 0x164
		::System::Byte _padding16[0x3];
		::System::Single StartRadius; // 0x168
		::System::Boolean BlendRadiusOverrideState; // 0x16C
		::System::Byte _padding17[0x3];
		::System::Single BlendRadius; // 0x170
		::System::Boolean AngleOverrideState; // 0x174
		::System::Byte _padding18[0x3];
		::System::Single Angle; // 0x178
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_COLORGRADINGPARAMETER_CTOR_OFFSET))(this, a1);
		}

	};
}
