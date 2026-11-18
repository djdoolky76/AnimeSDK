#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"

namespace MoleMole::Config { class ConfigEntityFXComicDotEffects; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOMICDOT_AAOGMJFNGIB_OFFSET UNITYSDK_OFFSET(0x1B8CCA50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOMICDOT_AFPCLLAALBH_OFFSET UNITYSDK_OFFSET(0x1B8D0BD0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOMICDOT_AJIPNBANCOC_OFFSET UNITYSDK_OFFSET(0x1B8CC730)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOMICDOT_ALJEEEAPCBH_OFFSET UNITYSDK_OFFSET(0x1B8CDF00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOMICDOT_BAHGDCGIEKL_OFFSET UNITYSDK_OFFSET(0x1B8CD7F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOMICDOT_IEFBPLNILIE_OFFSET UNITYSDK_OFFSET(0x1B8CC720)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOMICDOT_NNEGPFCPCAB_OFFSET UNITYSDK_OFFSET(0x1B8CC110)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOMICDOT_ONPGLGIFOJJ_OFFSET UNITYSDK_OFFSET(0x1B8D2D50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOMICDOT_PEDOJDBBGPC_OFFSET UNITYSDK_OFFSET(0x1B8D1D80)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOMICDOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8D3D20)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessFXComicDot_TypeDefinitionIndex = 73575;

	class ESPostProcessFXComicDot
	{
	public:
		::MoleMole::Config::ConfigEntityFXComicDotEffects* m_stAsset; // 0xB0
		::System::Boolean _VolDefault_pixelationOn; // 0xB8
		::System::Byte _padding0[0x3];
		::System::Single _VolDefault_pixelSize; // 0xBC
		::System::Boolean _VolDefault_outlineOn; // 0xC0
		::System::Byte _padding1[0x3];
		::System::Single _VolDefault_outlineOpacity; // 0xC4
		::System::Single _VolDefault_outlineDiffOffset; // 0xC8
		::System::Single _VolDefault_outlineDepthThreshold; // 0xCC
		::System::Single _VolDefault_outlineNormalDiffThreshold; // 0xD0
		::System::Single _VolDefault_outlineNormalThreshold; // 0xD4
		::System::Single _VolDefault_outlineNormalThresholdScale; // 0xD8
		::System::Boolean _VolDefault_outlineInUberShader; // 0xDC
		::System::Boolean _VolPreVal_pixelationOn_overrideState; // 0xDD
		::System::Boolean _VolPreVal_pixelationOn; // 0xDE
		::System::Boolean _VolPreVal_pixelSize_overrideState; // 0xDF
		::System::Single _VolPreVal_pixelSize; // 0xE0
		::System::Boolean _VolPreVal_outlineOn_overrideState; // 0xE4
		::System::Boolean _VolPreVal_outlineOn; // 0xE5
		::System::Boolean _VolPreVal_outlineOpacity_overrideState; // 0xE6
		::System::Byte _padding2[0x1];
		::System::Single _VolPreVal_outlineOpacity; // 0xE8
		::System::Boolean _VolPreVal_outlineDiffOffset_overrideState; // 0xEC
		::System::Byte _padding3[0x3];
		::System::Single _VolPreVal_outlineDiffOffset; // 0xF0
		::System::Boolean _VolPreVal_outlineDepthThreshold_overrideState; // 0xF4
		::System::Byte _padding4[0x3];
		::System::Single _VolPreVal_outlineDepthThreshold; // 0xF8
		::System::Boolean _VolPreVal_outlineNormalDiffThreshold_overrideState; // 0xFC
		::System::Byte _padding5[0x3];
		::System::Single _VolPreVal_outlineNormalDiffThreshold; // 0x100
		::System::Boolean _VolPreVal_outlineNormalThreshold_overrideState; // 0x104
		::System::Byte _padding6[0x3];
		::System::Single _VolPreVal_outlineNormalThreshold; // 0x108
		::System::Boolean _VolPreVal_outlineNormalThresholdScale_overrideState; // 0x10C
		::System::Byte _padding7[0x3];
		::System::Single _VolPreVal_outlineNormalThresholdScale; // 0x110
		::System::Boolean _VolPreVal_outlineInUberShader_overrideState; // 0x114
		::System::Boolean _VolPreVal_outlineInUberShader; // 0x115
		::System::Boolean _TimelineCurveFirstVal_pixelationOn; // 0x116
		::System::Boolean _TimelineCurveLastVal_pixelationOn; // 0x117
		::System::Single _TimelineCurveFirstVal_pixelSize; // 0x118
		::System::Single _TimelineCurveLastVal_pixelSize; // 0x11C
		::System::Boolean _TimelineCurveFirstVal_outlineOn; // 0x120
		::System::Boolean _TimelineCurveLastVal_outlineOn; // 0x121
		::System::Byte _padding8[0x2];
		::System::Single _TimelineCurveFirstVal_outlineOpacity; // 0x124
		::System::Single _TimelineCurveLastVal_outlineOpacity; // 0x128
		::System::Single _TimelineCurveFirstVal_outlineDiffOffset; // 0x12C
		::System::Single _TimelineCurveLastVal_outlineDiffOffset; // 0x130
		::System::Single _TimelineCurveFirstVal_outlineDepthThreshold; // 0x134
		::System::Single _TimelineCurveLastVal_outlineDepthThreshold; // 0x138
		::System::Single _TimelineCurveFirstVal_outlineNormalDiffThreshold; // 0x13C
		::System::Single _TimelineCurveLastVal_outlineNormalDiffThreshold; // 0x140
		::System::Single _TimelineCurveFirstVal_outlineNormalThreshold; // 0x144
		::System::Single _TimelineCurveLastVal_outlineNormalThreshold; // 0x148
		::System::Single _TimelineCurveFirstVal_outlineNormalThresholdScale; // 0x14C
		::System::Single _TimelineCurveLastVal_outlineNormalThresholdScale; // 0x150
		::System::Boolean _TimelineCurveFirstVal_outlineInUberShader; // 0x154
		::System::Boolean _TimelineCurveLastVal_outlineInUberShader; // 0x155
		::System::Byte _padding9[0x2];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_pixelationOn_FieldHandleType; // 0x158
		::System::Boolean ESPP_pixelationOn_UseIt; // 0x15C
		::System::Byte _padding10[0x3];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_pixelationOn; // 0x160
		::System::Boolean ESPP_pixelationOn_EnableFade; // 0x168
		::System::Boolean ESPP_pixelationOn_EnableOverrideDefaultValue; // 0x169
		::System::Boolean ESPP_pixelationOn_OverrideDefaultValue; // 0x16A
		::System::Byte _padding11[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_pixelSize_FieldHandleType; // 0x16C
		::System::Boolean ESPP_pixelSize_UseIt; // 0x170
		::System::Byte _padding12[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_pixelSize; // 0x178
		::System::Boolean ESPP_pixelSize_EnableFade; // 0x180
		::System::Boolean ESPP_pixelSize_EnableOverrideDefaultValue; // 0x181
		::System::Byte _padding13[0x2];
		::System::Single ESPP_pixelSize_OverrideDefaultValue; // 0x184
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineOn_FieldHandleType; // 0x188
		::System::Boolean ESPP_outlineOn_UseIt; // 0x18C
		::System::Byte _padding14[0x3];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_outlineOn; // 0x190
		::System::Boolean ESPP_outlineOn_EnableFade; // 0x198
		::System::Boolean ESPP_outlineOn_EnableOverrideDefaultValue; // 0x199
		::System::Boolean ESPP_outlineOn_OverrideDefaultValue; // 0x19A
		::System::Byte _padding15[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineOpacity_FieldHandleType; // 0x19C
		::System::Boolean ESPP_outlineOpacity_UseIt; // 0x1A0
		::System::Byte _padding16[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_outlineOpacity; // 0x1A8
		::System::Boolean ESPP_outlineOpacity_EnableFade; // 0x1B0
		::System::Boolean ESPP_outlineOpacity_EnableOverrideDefaultValue; // 0x1B1
		::System::Byte _padding17[0x2];
		::System::Single ESPP_outlineOpacity_OverrideDefaultValue; // 0x1B4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineDiffOffset_FieldHandleType; // 0x1B8
		::System::Boolean ESPP_outlineDiffOffset_UseIt; // 0x1BC
		::System::Byte _padding18[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_outlineDiffOffset; // 0x1C0
		::System::Boolean ESPP_outlineDiffOffset_EnableFade; // 0x1C8
		::System::Boolean ESPP_outlineDiffOffset_EnableOverrideDefaultValue; // 0x1C9
		::System::Byte _padding19[0x2];
		::System::Single ESPP_outlineDiffOffset_OverrideDefaultValue; // 0x1CC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineDepthThreshold_FieldHandleType; // 0x1D0
		::System::Boolean ESPP_outlineDepthThreshold_UseIt; // 0x1D4
		::System::Byte _padding20[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_outlineDepthThreshold; // 0x1D8
		::System::Boolean ESPP_outlineDepthThreshold_EnableFade; // 0x1E0
		::System::Boolean ESPP_outlineDepthThreshold_EnableOverrideDefaultValue; // 0x1E1
		::System::Byte _padding21[0x2];
		::System::Single ESPP_outlineDepthThreshold_OverrideDefaultValue; // 0x1E4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineNormalDiffThreshold_FieldHandleType; // 0x1E8
		::System::Boolean ESPP_outlineNormalDiffThreshold_UseIt; // 0x1EC
		::System::Byte _padding22[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_outlineNormalDiffThreshold; // 0x1F0
		::System::Boolean ESPP_outlineNormalDiffThreshold_EnableFade; // 0x1F8
		::System::Boolean ESPP_outlineNormalDiffThreshold_EnableOverrideDefaultValue; // 0x1F9
		::System::Byte _padding23[0x2];
		::System::Single ESPP_outlineNormalDiffThreshold_OverrideDefaultValue; // 0x1FC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineNormalThreshold_FieldHandleType; // 0x200
		::System::Boolean ESPP_outlineNormalThreshold_UseIt; // 0x204
		::System::Byte _padding24[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_outlineNormalThreshold; // 0x208
		::System::Boolean ESPP_outlineNormalThreshold_EnableFade; // 0x210
		::System::Boolean ESPP_outlineNormalThreshold_EnableOverrideDefaultValue; // 0x211
		::System::Byte _padding25[0x2];
		::System::Single ESPP_outlineNormalThreshold_OverrideDefaultValue; // 0x214
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineNormalThresholdScale_FieldHandleType; // 0x218
		::System::Boolean ESPP_outlineNormalThresholdScale_UseIt; // 0x21C
		::System::Byte _padding26[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_outlineNormalThresholdScale; // 0x220
		::System::Boolean ESPP_outlineNormalThresholdScale_EnableFade; // 0x228
		::System::Boolean ESPP_outlineNormalThresholdScale_EnableOverrideDefaultValue; // 0x229
		::System::Byte _padding27[0x2];
		::System::Single ESPP_outlineNormalThresholdScale_OverrideDefaultValue; // 0x22C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineInUberShader_FieldHandleType; // 0x230
		::System::Boolean ESPP_outlineInUberShader_UseIt; // 0x234
		::System::Byte _padding28[0x3];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_outlineInUberShader; // 0x238
		::System::Boolean ESPP_outlineInUberShader_EnableFade; // 0x240
		::System::Boolean ESPP_outlineInUberShader_EnableOverrideDefaultValue; // 0x241
		::System::Boolean ESPP_outlineInUberShader_OverrideDefaultValue; // 0x242

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOMICDOT__CTOR_OFFSET))(this);
		}

		::System::Void NNEGPFCPCAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOMICDOT_NNEGPFCPCAB_OFFSET))(this);
		}

		::System::Void IEFBPLNILIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOMICDOT_IEFBPLNILIE_OFFSET))(this);
		}

		::System::Void AJIPNBANCOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOMICDOT_AJIPNBANCOC_OFFSET))(this);
		}

		::System::Void AAOGMJFNGIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOMICDOT_AAOGMJFNGIB_OFFSET))(this);
		}

		::System::Void BAHGDCGIEKL(::System::Single PBKKBBHOCLC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOMICDOT_BAHGDCGIEKL_OFFSET))(this, PBKKBBHOCLC);
		}

		::System::Void ALJEEEAPCBH(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOMICDOT_ALJEEEAPCBH_OFFSET))(this, HIIOCANBKAM);
		}

		::System::Void AFPCLLAALBH(::System::Single FDLDIDFMCIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOMICDOT_AFPCLLAALBH_OFFSET))(this, FDLDIDFMCIG);
		}

		::System::Void PEDOJDBBGPC(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOMICDOT_PEDOJDBBGPC_OFFSET))(this, AHAFNGEDPLI);
		}

		::System::Void ONPGLGIFOJJ(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOMICDOT_ONPGLGIFOJJ_OFFSET))(this, AHAFNGEDPLI);
		}
	};
}
