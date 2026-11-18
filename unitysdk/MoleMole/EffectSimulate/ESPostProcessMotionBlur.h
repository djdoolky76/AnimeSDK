#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MotionBlurDirection.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MotionBlurMode.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MotionBlurQuality.h"

namespace MoleMole::Config { class ConfigEntityMotionBlurEffects; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_AAOGMJFNGIB_OFFSET UNITYSDK_OFFSET(0xFFF84A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_AFPCLLAALBH_OFFSET UNITYSDK_OFFSET(0xFFFA300)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_AJIPNBANCOC_OFFSET UNITYSDK_OFFSET(0xFFF8280)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_ALJEEEAPCBH_OFFSET UNITYSDK_OFFSET(0xFFF8DE0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_BAHGDCGIEKL_OFFSET UNITYSDK_OFFSET(0xFFF8BB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_IEFBPLNILIE_OFFSET UNITYSDK_OFFSET(0xFFF8270)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_NNEGPFCPCAB_OFFSET UNITYSDK_OFFSET(0xFFF7FA0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_ONPGLGIFOJJ_OFFSET UNITYSDK_OFFSET(0xFFFB1C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_PEDOJDBBGPC_OFFSET UNITYSDK_OFFSET(0xFFFAC00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR__CTOR_OFFSET UNITYSDK_OFFSET(0xFFFB780)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessMotionBlur_TypeDefinitionIndex = 90223;

	class ESPostProcessMotionBlur
	{
	public:
		::MoleMole::Config::ConfigEntityMotionBlurEffects* m_stAsset; // 0xB0
		::System::Single _VolDefault_intensity; // 0xB8
		::UnityEngine::NAPRenderPipeline0::MotionBlurMode _VolDefault_mode; // 0xBC
		::UnityEngine::NAPRenderPipeline0::MotionBlurDirection _VolDefault_direction; // 0xC0
		::System::Single _VolDefault_motionVectorBlendRadius; // 0xC4
		::UnityEngine::NAPRenderPipeline0::MotionBlurQuality _VolDefault_quality; // 0xC8
		::System::Single _VolDefault_clamp; // 0xCC
		::System::Boolean _VolPreVal_intensity_overrideState; // 0xD0
		::System::Byte _padding0[0x3];
		::System::Single _VolPreVal_intensity; // 0xD4
		::System::Boolean _VolPreVal_mode_overrideState; // 0xD8
		::System::Byte _padding1[0x3];
		::UnityEngine::NAPRenderPipeline0::MotionBlurMode _VolPreVal_mode; // 0xDC
		::System::Boolean _VolPreVal_direction_overrideState; // 0xE0
		::System::Byte _padding2[0x3];
		::UnityEngine::NAPRenderPipeline0::MotionBlurDirection _VolPreVal_direction; // 0xE4
		::System::Boolean _VolPreVal_motionVectorBlendRadius_overrideState; // 0xE8
		::System::Byte _padding3[0x3];
		::System::Single _VolPreVal_motionVectorBlendRadius; // 0xEC
		::System::Boolean _VolPreVal_quality_overrideState; // 0xF0
		::System::Byte _padding4[0x3];
		::UnityEngine::NAPRenderPipeline0::MotionBlurQuality _VolPreVal_quality; // 0xF4
		::System::Boolean _VolPreVal_clamp_overrideState; // 0xF8
		::System::Byte _padding5[0x3];
		::System::Single _VolPreVal_clamp; // 0xFC
		::System::Single _TimelineCurveFirstVal_intensity; // 0x100
		::System::Single _TimelineCurveLastVal_intensity; // 0x104
		::System::Single _TimelineCurveFirstVal_motionVectorBlendRadius; // 0x108
		::System::Single _TimelineCurveLastVal_motionVectorBlendRadius; // 0x10C
		::System::Single _TimelineCurveFirstVal_clamp; // 0x110
		::System::Single _TimelineCurveLastVal_clamp; // 0x114
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_intensity_FieldHandleType; // 0x118
		::System::Boolean ESPP_intensity_UseIt; // 0x11C
		::System::Byte _padding6[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_intensity; // 0x120
		::System::Boolean ESPP_intensity_EnableFade; // 0x128
		::System::Boolean ESPP_intensity_EnableOverrideDefaultValue; // 0x129
		::System::Byte _padding7[0x2];
		::System::Single ESPP_intensity_OverrideDefaultValue; // 0x12C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_mode_FieldHandleType; // 0x130
		::UnityEngine::NAPRenderPipeline0::MotionBlurMode ESPP_mode; // 0x134
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_direction_FieldHandleType; // 0x138
		::UnityEngine::NAPRenderPipeline0::MotionBlurDirection ESPP_direction; // 0x13C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_motionVectorBlendRadius_FieldHandleType; // 0x140
		::System::Boolean ESPP_motionVectorBlendRadius_UseIt; // 0x144
		::System::Byte _padding8[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_motionVectorBlendRadius; // 0x148
		::System::Boolean ESPP_motionVectorBlendRadius_EnableFade; // 0x150
		::System::Boolean ESPP_motionVectorBlendRadius_EnableOverrideDefaultValue; // 0x151
		::System::Byte _padding9[0x2];
		::System::Single ESPP_motionVectorBlendRadius_OverrideDefaultValue; // 0x154
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_quality_FieldHandleType; // 0x158
		::UnityEngine::NAPRenderPipeline0::MotionBlurQuality ESPP_quality; // 0x15C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_clamp_FieldHandleType; // 0x160
		::System::Boolean ESPP_clamp_UseIt; // 0x164
		::System::Byte _padding10[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_clamp; // 0x168
		::System::Boolean ESPP_clamp_EnableFade; // 0x170
		::System::Boolean ESPP_clamp_EnableOverrideDefaultValue; // 0x171
		::System::Byte _padding11[0x2];
		::System::Single ESPP_clamp_OverrideDefaultValue; // 0x174

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR__CTOR_OFFSET))(this);
		}

		::System::Void NNEGPFCPCAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_NNEGPFCPCAB_OFFSET))(this);
		}

		::System::Void IEFBPLNILIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_IEFBPLNILIE_OFFSET))(this);
		}

		::System::Void AJIPNBANCOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_AJIPNBANCOC_OFFSET))(this);
		}

		::System::Void AAOGMJFNGIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_AAOGMJFNGIB_OFFSET))(this);
		}

		::System::Void BAHGDCGIEKL(::System::Single PBKKBBHOCLC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_BAHGDCGIEKL_OFFSET))(this, PBKKBBHOCLC);
		}

		::System::Void ALJEEEAPCBH(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_ALJEEEAPCBH_OFFSET))(this, HIIOCANBKAM);
		}

		::System::Void AFPCLLAALBH(::System::Single FDLDIDFMCIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_AFPCLLAALBH_OFFSET))(this, FDLDIDFMCIG);
		}

		::System::Void PEDOJDBBGPC(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_PEDOJDBBGPC_OFFSET))(this, AHAFNGEDPLI);
		}

		::System::Void ONPGLGIFOJJ(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSMOTIONBLUR_ONPGLGIFOJJ_OFFSET))(this, AHAFNGEDPLI);
		}
	};
}
