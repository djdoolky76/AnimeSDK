#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"

namespace MoleMole::Config { class ConfigEntityScreenSpaceAmbientOcclusionEffects; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEAMBIENTOCCLUSION_AAOGMJFNGIB_OFFSET UNITYSDK_OFFSET(0x1A79DF60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEAMBIENTOCCLUSION_AFPCLLAALBH_OFFSET UNITYSDK_OFFSET(0x1A7A4D60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEAMBIENTOCCLUSION_AJIPNBANCOC_OFFSET UNITYSDK_OFFSET(0x1A79DBD0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEAMBIENTOCCLUSION_ALJEEEAPCBH_OFFSET UNITYSDK_OFFSET(0x1A7A00A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEAMBIENTOCCLUSION_BAHGDCGIEKL_OFFSET UNITYSDK_OFFSET(0x1A79F610)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEAMBIENTOCCLUSION_IEFBPLNILIE_OFFSET UNITYSDK_OFFSET(0x1A79DBC0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEAMBIENTOCCLUSION_NNEGPFCPCAB_OFFSET UNITYSDK_OFFSET(0x1A79D350)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEAMBIENTOCCLUSION_ONPGLGIFOJJ_OFFSET UNITYSDK_OFFSET(0x1A7A8380)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEAMBIENTOCCLUSION_PEDOJDBBGPC_OFFSET UNITYSDK_OFFSET(0x1A7A69D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEAMBIENTOCCLUSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7A9D30)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessScreenSpaceAmbientOcclusion_TypeDefinitionIndex = 44667;

	class ESPostProcessScreenSpaceAmbientOcclusion
	{
	public:
		::MoleMole::Config::ConfigEntityScreenSpaceAmbientOcclusionEffects* m_stAsset; // 0xB0
		::System::Single _VolDefault_Intensity; // 0xB8
		::System::Single _VolDefault_DirectLightingStrength; // 0xBC
		::System::Single _VolDefault_Radius; // 0xC0
		::System::Boolean _VolDefault_FullResolution; // 0xC4
		::System::Boolean _VolDefault_TemporalAccumulation; // 0xC5
		::System::Byte _padding0[0x2];
		::System::Single _VolDefault_GhostingReduction; // 0xC8
		::System::Single _VolDefault_BlurSharpness; // 0xCC
		::System::Int32 _VolDefault_SampleCount; // 0xD0
		::System::Boolean _VolDefault_Denoise; // 0xD4
		::System::Byte _padding1[0x3];
		::System::Single _VolDefault_DenoiserRadius; // 0xD8
		::System::Int32 _VolDefault_StepCount; // 0xDC
		::System::Boolean _VolDefault_BilateralUpsample; // 0xE0
		::System::Byte _padding2[0x3];
		::System::Int32 _VolDefault_MaximumRadiusInPixels; // 0xE4
		::System::Int32 _VolDefault_DirectionCount; // 0xE8
		::System::Boolean _VolDefault_DebugMode; // 0xEC
		::System::Boolean _VolPreVal_Intensity_overrideState; // 0xED
		::System::Byte _padding3[0x2];
		::System::Single _VolPreVal_Intensity; // 0xF0
		::System::Boolean _VolPreVal_DirectLightingStrength_overrideState; // 0xF4
		::System::Byte _padding4[0x3];
		::System::Single _VolPreVal_DirectLightingStrength; // 0xF8
		::System::Boolean _VolPreVal_Radius_overrideState; // 0xFC
		::System::Byte _padding5[0x3];
		::System::Single _VolPreVal_Radius; // 0x100
		::System::Boolean _VolPreVal_FullResolution_overrideState; // 0x104
		::System::Boolean _VolPreVal_FullResolution; // 0x105
		::System::Boolean _VolPreVal_TemporalAccumulation_overrideState; // 0x106
		::System::Boolean _VolPreVal_TemporalAccumulation; // 0x107
		::System::Boolean _VolPreVal_GhostingReduction_overrideState; // 0x108
		::System::Byte _padding6[0x3];
		::System::Single _VolPreVal_GhostingReduction; // 0x10C
		::System::Boolean _VolPreVal_BlurSharpness_overrideState; // 0x110
		::System::Byte _padding7[0x3];
		::System::Single _VolPreVal_BlurSharpness; // 0x114
		::System::Boolean _VolPreVal_SampleCount_overrideState; // 0x118
		::System::Byte _padding8[0x3];
		::System::Int32 _VolPreVal_SampleCount; // 0x11C
		::System::Boolean _VolPreVal_Denoise_overrideState; // 0x120
		::System::Boolean _VolPreVal_Denoise; // 0x121
		::System::Boolean _VolPreVal_DenoiserRadius_overrideState; // 0x122
		::System::Byte _padding9[0x1];
		::System::Single _VolPreVal_DenoiserRadius; // 0x124
		::System::Boolean _VolPreVal_StepCount_overrideState; // 0x128
		::System::Byte _padding10[0x3];
		::System::Int32 _VolPreVal_StepCount; // 0x12C
		::System::Boolean _VolPreVal_BilateralUpsample_overrideState; // 0x130
		::System::Boolean _VolPreVal_BilateralUpsample; // 0x131
		::System::Boolean _VolPreVal_MaximumRadiusInPixels_overrideState; // 0x132
		::System::Byte _padding11[0x1];
		::System::Int32 _VolPreVal_MaximumRadiusInPixels; // 0x134
		::System::Boolean _VolPreVal_DirectionCount_overrideState; // 0x138
		::System::Byte _padding12[0x3];
		::System::Int32 _VolPreVal_DirectionCount; // 0x13C
		::System::Boolean _VolPreVal_DebugMode_overrideState; // 0x140
		::System::Boolean _VolPreVal_DebugMode; // 0x141
		::System::Byte _padding13[0x2];
		::System::Single _TimelineCurveFirstVal_Intensity; // 0x144
		::System::Single _TimelineCurveLastVal_Intensity; // 0x148
		::System::Single _TimelineCurveFirstVal_DirectLightingStrength; // 0x14C
		::System::Single _TimelineCurveLastVal_DirectLightingStrength; // 0x150
		::System::Single _TimelineCurveFirstVal_Radius; // 0x154
		::System::Single _TimelineCurveLastVal_Radius; // 0x158
		::System::Boolean _TimelineCurveFirstVal_FullResolution; // 0x15C
		::System::Boolean _TimelineCurveLastVal_FullResolution; // 0x15D
		::System::Boolean _TimelineCurveFirstVal_TemporalAccumulation; // 0x15E
		::System::Boolean _TimelineCurveLastVal_TemporalAccumulation; // 0x15F
		::System::Single _TimelineCurveFirstVal_GhostingReduction; // 0x160
		::System::Single _TimelineCurveLastVal_GhostingReduction; // 0x164
		::System::Single _TimelineCurveFirstVal_BlurSharpness; // 0x168
		::System::Single _TimelineCurveLastVal_BlurSharpness; // 0x16C
		::System::Int32 _TimelineCurveFirstVal_SampleCount; // 0x170
		::System::Int32 _TimelineCurveLastVal_SampleCount; // 0x174
		::System::Boolean _TimelineCurveFirstVal_Denoise; // 0x178
		::System::Boolean _TimelineCurveLastVal_Denoise; // 0x179
		::System::Byte _padding14[0x2];
		::System::Single _TimelineCurveFirstVal_DenoiserRadius; // 0x17C
		::System::Single _TimelineCurveLastVal_DenoiserRadius; // 0x180
		::System::Int32 _TimelineCurveFirstVal_StepCount; // 0x184
		::System::Int32 _TimelineCurveLastVal_StepCount; // 0x188
		::System::Boolean _TimelineCurveFirstVal_BilateralUpsample; // 0x18C
		::System::Boolean _TimelineCurveLastVal_BilateralUpsample; // 0x18D
		::System::Byte _padding15[0x2];
		::System::Int32 _TimelineCurveFirstVal_MaximumRadiusInPixels; // 0x190
		::System::Int32 _TimelineCurveLastVal_MaximumRadiusInPixels; // 0x194
		::System::Int32 _TimelineCurveFirstVal_DirectionCount; // 0x198
		::System::Int32 _TimelineCurveLastVal_DirectionCount; // 0x19C
		::System::Boolean _TimelineCurveFirstVal_DebugMode; // 0x1A0
		::System::Boolean _TimelineCurveLastVal_DebugMode; // 0x1A1
		::System::Byte _padding16[0x2];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_Intensity_FieldHandleType; // 0x1A4
		::System::Boolean ESPP_Intensity_UseIt; // 0x1A8
		::System::Byte _padding17[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_Intensity; // 0x1B0
		::System::Boolean ESPP_Intensity_EnableFade; // 0x1B8
		::System::Boolean ESPP_Intensity_EnableOverrideDefaultValue; // 0x1B9
		::System::Byte _padding18[0x2];
		::System::Single ESPP_Intensity_OverrideDefaultValue; // 0x1BC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_DirectLightingStrength_FieldHandleType; // 0x1C0
		::System::Boolean ESPP_DirectLightingStrength_UseIt; // 0x1C4
		::System::Byte _padding19[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_DirectLightingStrength; // 0x1C8
		::System::Boolean ESPP_DirectLightingStrength_EnableFade; // 0x1D0
		::System::Boolean ESPP_DirectLightingStrength_EnableOverrideDefaultValue; // 0x1D1
		::System::Byte _padding20[0x2];
		::System::Single ESPP_DirectLightingStrength_OverrideDefaultValue; // 0x1D4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_Radius_FieldHandleType; // 0x1D8
		::System::Boolean ESPP_Radius_UseIt; // 0x1DC
		::System::Byte _padding21[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_Radius; // 0x1E0
		::System::Boolean ESPP_Radius_EnableFade; // 0x1E8
		::System::Boolean ESPP_Radius_EnableOverrideDefaultValue; // 0x1E9
		::System::Byte _padding22[0x2];
		::System::Single ESPP_Radius_OverrideDefaultValue; // 0x1EC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_FullResolution_FieldHandleType; // 0x1F0
		::System::Boolean ESPP_FullResolution_UseIt; // 0x1F4
		::System::Byte _padding23[0x3];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_FullResolution; // 0x1F8
		::System::Boolean ESPP_FullResolution_EnableFade; // 0x200
		::System::Boolean ESPP_FullResolution_EnableOverrideDefaultValue; // 0x201
		::System::Boolean ESPP_FullResolution_OverrideDefaultValue; // 0x202
		::System::Byte _padding24[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_TemporalAccumulation_FieldHandleType; // 0x204
		::System::Boolean ESPP_TemporalAccumulation_UseIt; // 0x208
		::System::Byte _padding25[0x7];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_TemporalAccumulation; // 0x210
		::System::Boolean ESPP_TemporalAccumulation_EnableFade; // 0x218
		::System::Boolean ESPP_TemporalAccumulation_EnableOverrideDefaultValue; // 0x219
		::System::Boolean ESPP_TemporalAccumulation_OverrideDefaultValue; // 0x21A
		::System::Byte _padding26[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_GhostingReduction_FieldHandleType; // 0x21C
		::System::Boolean ESPP_GhostingReduction_UseIt; // 0x220
		::System::Byte _padding27[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_GhostingReduction; // 0x228
		::System::Boolean ESPP_GhostingReduction_EnableFade; // 0x230
		::System::Boolean ESPP_GhostingReduction_EnableOverrideDefaultValue; // 0x231
		::System::Byte _padding28[0x2];
		::System::Single ESPP_GhostingReduction_OverrideDefaultValue; // 0x234
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_BlurSharpness_FieldHandleType; // 0x238
		::System::Boolean ESPP_BlurSharpness_UseIt; // 0x23C
		::System::Byte _padding29[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_BlurSharpness; // 0x240
		::System::Boolean ESPP_BlurSharpness_EnableFade; // 0x248
		::System::Boolean ESPP_BlurSharpness_EnableOverrideDefaultValue; // 0x249
		::System::Byte _padding30[0x2];
		::System::Single ESPP_BlurSharpness_OverrideDefaultValue; // 0x24C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_SampleCount_FieldHandleType; // 0x250
		::System::Boolean ESPP_SampleCount_UseIt; // 0x254
		::System::Byte _padding31[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_SampleCount; // 0x258
		::System::Boolean ESPP_SampleCount_EnableFade; // 0x260
		::System::Boolean ESPP_SampleCount_EnableOverrideDefaultValue; // 0x261
		::System::Byte _padding32[0x2];
		::System::Int32 ESPP_SampleCount_OverrideDefaultValue; // 0x264
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_Denoise_FieldHandleType; // 0x268
		::System::Boolean ESPP_Denoise_UseIt; // 0x26C
		::System::Byte _padding33[0x3];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_Denoise; // 0x270
		::System::Boolean ESPP_Denoise_EnableFade; // 0x278
		::System::Boolean ESPP_Denoise_EnableOverrideDefaultValue; // 0x279
		::System::Boolean ESPP_Denoise_OverrideDefaultValue; // 0x27A
		::System::Byte _padding34[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_DenoiserRadius_FieldHandleType; // 0x27C
		::System::Boolean ESPP_DenoiserRadius_UseIt; // 0x280
		::System::Byte _padding35[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_DenoiserRadius; // 0x288
		::System::Boolean ESPP_DenoiserRadius_EnableFade; // 0x290
		::System::Boolean ESPP_DenoiserRadius_EnableOverrideDefaultValue; // 0x291
		::System::Byte _padding36[0x2];
		::System::Single ESPP_DenoiserRadius_OverrideDefaultValue; // 0x294
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_StepCount_FieldHandleType; // 0x298
		::System::Boolean ESPP_StepCount_UseIt; // 0x29C
		::System::Byte _padding37[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_StepCount; // 0x2A0
		::System::Boolean ESPP_StepCount_EnableFade; // 0x2A8
		::System::Boolean ESPP_StepCount_EnableOverrideDefaultValue; // 0x2A9
		::System::Byte _padding38[0x2];
		::System::Int32 ESPP_StepCount_OverrideDefaultValue; // 0x2AC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_BilateralUpsample_FieldHandleType; // 0x2B0
		::System::Boolean ESPP_BilateralUpsample_UseIt; // 0x2B4
		::System::Byte _padding39[0x3];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_BilateralUpsample; // 0x2B8
		::System::Boolean ESPP_BilateralUpsample_EnableFade; // 0x2C0
		::System::Boolean ESPP_BilateralUpsample_EnableOverrideDefaultValue; // 0x2C1
		::System::Boolean ESPP_BilateralUpsample_OverrideDefaultValue; // 0x2C2
		::System::Byte _padding40[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_MaximumRadiusInPixels_FieldHandleType; // 0x2C4
		::System::Boolean ESPP_MaximumRadiusInPixels_UseIt; // 0x2C8
		::System::Byte _padding41[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_MaximumRadiusInPixels; // 0x2D0
		::System::Boolean ESPP_MaximumRadiusInPixels_EnableFade; // 0x2D8
		::System::Boolean ESPP_MaximumRadiusInPixels_EnableOverrideDefaultValue; // 0x2D9
		::System::Byte _padding42[0x2];
		::System::Int32 ESPP_MaximumRadiusInPixels_OverrideDefaultValue; // 0x2DC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_DirectionCount_FieldHandleType; // 0x2E0
		::System::Boolean ESPP_DirectionCount_UseIt; // 0x2E4
		::System::Byte _padding43[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_DirectionCount; // 0x2E8
		::System::Boolean ESPP_DirectionCount_EnableFade; // 0x2F0
		::System::Boolean ESPP_DirectionCount_EnableOverrideDefaultValue; // 0x2F1
		::System::Byte _padding44[0x2];
		::System::Int32 ESPP_DirectionCount_OverrideDefaultValue; // 0x2F4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_DebugMode_FieldHandleType; // 0x2F8
		::System::Boolean ESPP_DebugMode_UseIt; // 0x2FC
		::System::Byte _padding45[0x3];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_DebugMode; // 0x300
		::System::Boolean ESPP_DebugMode_EnableFade; // 0x308
		::System::Boolean ESPP_DebugMode_EnableOverrideDefaultValue; // 0x309
		::System::Boolean ESPP_DebugMode_OverrideDefaultValue; // 0x30A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEAMBIENTOCCLUSION__CTOR_OFFSET))(this);
		}

		::System::Void NNEGPFCPCAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEAMBIENTOCCLUSION_NNEGPFCPCAB_OFFSET))(this);
		}

		::System::Void IEFBPLNILIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEAMBIENTOCCLUSION_IEFBPLNILIE_OFFSET))(this);
		}

		::System::Void AJIPNBANCOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEAMBIENTOCCLUSION_AJIPNBANCOC_OFFSET))(this);
		}

		::System::Void AAOGMJFNGIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEAMBIENTOCCLUSION_AAOGMJFNGIB_OFFSET))(this);
		}

		::System::Void BAHGDCGIEKL(::System::Single PBKKBBHOCLC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEAMBIENTOCCLUSION_BAHGDCGIEKL_OFFSET))(this, PBKKBBHOCLC);
		}

		::System::Void ALJEEEAPCBH(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEAMBIENTOCCLUSION_ALJEEEAPCBH_OFFSET))(this, HIIOCANBKAM);
		}

		::System::Void AFPCLLAALBH(::System::Single FDLDIDFMCIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEAMBIENTOCCLUSION_AFPCLLAALBH_OFFSET))(this, FDLDIDFMCIG);
		}

		::System::Void PEDOJDBBGPC(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEAMBIENTOCCLUSION_PEDOJDBBGPC_OFFSET))(this, AHAFNGEDPLI);
		}

		::System::Void ONPGLGIFOJJ(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEAMBIENTOCCLUSION_ONPGLGIFOJJ_OFFSET))(this, AHAFNGEDPLI);
		}
	};
}
