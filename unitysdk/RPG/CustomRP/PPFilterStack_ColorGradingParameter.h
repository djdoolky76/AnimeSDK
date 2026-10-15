#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/ColorGradingGradual.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define RPG_CUSTOMRP_PPFILTERSTACK_COLORGRADINGPARAMETER_CTOR_1_OFFSET UNITYSDK_OFFSET(0xF49B0)
#define RPG_CUSTOMRP_PPFILTERSTACK_COLORGRADINGPARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0xF49A0)

namespace RPG::CustomRP
{
	struct alignas(4) PPFilterStack_ColorGradingParameter
	{
		::System::Boolean ColorGradingMethodEnable; // 0x10
		::System::Boolean ColorCorrectionShadowMaxOverrideState; // 0x11
		::System::Byte _padding0[0x2];
		::System::Single ColorCorrectionShadowMax; // 0x14
		::System::Boolean LevelHighlightToneOverrideState; // 0x18
		::System::Byte _padding1[0x3];
		::System::Single LevelHighlightTone; // 0x1C
		::System::Boolean ColorCorrectionHighlightMinOverrideState; // 0x20
		::System::Byte _padding2[0x3];
		::System::Single ColorCorrectionHighlightMin; // 0x24
		::System::Boolean LevelShadowToneOverrideState; // 0x28
		::System::Byte _padding3[0x3];
		::System::Single LevelShadowTone; // 0x2C
		::System::Boolean LevelColorOverrideState; // 0x30
		::System::Byte _padding4[0x3];
		::UnityEngine::Color LevelColor; // 0x34
		::System::Boolean ColorSaturationGlobalOverrideState; // 0x44
		::System::Byte _padding5[0x3];
		::UnityEngine::Vector4 ColorSaturationGlobalColor; // 0x48
		::System::Single ColorSaturationGlobalValue; // 0x58
		::System::Boolean ColorContrastGlobalOverrideState; // 0x5C
		::System::Byte _padding6[0x3];
		::UnityEngine::Vector4 ColorContrastGlobalColor; // 0x60
		::System::Single ColorContrastGlobalValue; // 0x70
		::System::Boolean ColorGainGlobalOverrideState; // 0x74
		::System::Byte _padding7[0x3];
		::UnityEngine::Vector4 ColorGainGlobalColor; // 0x78
		::System::Single ColorGainGlobalValue; // 0x88
		::System::Boolean ColorSaturationShadowOverrideState; // 0x8C
		::System::Byte _padding8[0x3];
		::UnityEngine::Vector4 ColorSaturationShadowColor; // 0x90
		::System::Single ColorSaturationShadowValue; // 0xA0
		::System::Boolean ColorContrastShadowOverrideState; // 0xA4
		::System::Byte _padding9[0x3];
		::UnityEngine::Vector4 ColorContrastShadowColor; // 0xA8
		::System::Single ColorContrastShadowValue; // 0xB8
		::System::Boolean ColorGainShadowOverrideState; // 0xBC
		::System::Byte _padding10[0x3];
		::UnityEngine::Vector4 ColorGainShadowColor; // 0xC0
		::System::Single ColorGainShadowValue; // 0xD0
		::System::Boolean ColorSaturationMidtoneOverrideState; // 0xD4
		::System::Byte _padding11[0x3];
		::UnityEngine::Vector4 ColorSaturationMidtoneColor; // 0xD8
		::System::Single ColorSaturationMidtoneValue; // 0xE8
		::System::Boolean ColorContrastMidtoneOverrideState; // 0xEC
		::System::Byte _padding12[0x3];
		::UnityEngine::Vector4 ColorContrastMidtoneColor; // 0xF0
		::System::Single ColorContrastMidtoneValue; // 0x100
		::System::Boolean ColorGainMidtoneOverrideState; // 0x104
		::System::Byte _padding13[0x3];
		::UnityEngine::Vector4 ColorGainMidtoneColor; // 0x108
		::System::Single ColorGainMidtoneValue; // 0x118
		::System::Boolean ColorSaturationHighlightOverrideState; // 0x11C
		::System::Byte _padding14[0x3];
		::UnityEngine::Vector4 ColorSaturationHighlightColor; // 0x120
		::System::Single ColorSaturationHighlightValue; // 0x130
		::System::Boolean ColorContrastHighlightOverrideState; // 0x134
		::System::Byte _padding15[0x3];
		::UnityEngine::Vector4 ColorContrastHighlightColor; // 0x138
		::System::Single ColorContrastHighlightValue; // 0x148
		::System::Boolean ColorGainHighlightOverrideState; // 0x14C
		::System::Byte _padding16[0x3];
		::UnityEngine::Vector4 ColorGainHighlightColor; // 0x150
		::System::Single ColorGainHighlightValue; // 0x160
		::System::Boolean ColorGradingGradualParamOverrideState; // 0x164
		::System::Byte _padding17[0x3];
		::RPG::CustomRP::ColorGradingGradual ColorGradingGradualParam; // 0x168
		::System::Boolean CenterXOverrideState; // 0x16C
		::System::Byte _padding18[0x3];
		::System::Single CenterX; // 0x170
		::System::Boolean CenterYOverrideState; // 0x174
		::System::Byte _padding19[0x3];
		::System::Single CenterY; // 0x178
		::System::Boolean StartRadiusOverrideState; // 0x17C
		::System::Byte _padding20[0x3];
		::System::Single StartRadius; // 0x180
		::System::Boolean BlendRadiusOverrideState; // 0x184
		::System::Byte _padding21[0x3];
		::System::Single BlendRadius; // 0x188
		::System::Boolean AngleOverrideState; // 0x18C
		::System::Byte _padding22[0x3];
		::System::Single Angle; // 0x190
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PPFILTERSTACK_COLORGRADINGPARAMETER_CTOR_OFFSET))(this, a1);
		}

		/*
		::System::Void _ctor_1(::RPG::CustomRP::PPFilterStack_ColorGradingParameter a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::PPFilterStack_ColorGradingParameter, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PPFILTERSTACK_COLORGRADINGPARAMETER_CTOR_1_OFFSET))(this, a1, a2);
		}
		*/

	};
}
