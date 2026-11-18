#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SsrQuality.h"

namespace MoleMole::Config { class ConfigEntityScreenSpaceReflectionEffects; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_AAOGMJFNGIB_OFFSET UNITYSDK_OFFSET(0x142E1EB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_AFPCLLAALBH_OFFSET UNITYSDK_OFFSET(0x142E4B10)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_AJIPNBANCOC_OFFSET UNITYSDK_OFFSET(0x142E1C60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_ALJEEEAPCBH_OFFSET UNITYSDK_OFFSET(0x142E2C80)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_BAHGDCGIEKL_OFFSET UNITYSDK_OFFSET(0x142E2830)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_IEFBPLNILIE_OFFSET UNITYSDK_OFFSET(0x142E1C50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_NNEGPFCPCAB_OFFSET UNITYSDK_OFFSET(0x142E1810)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_ONPGLGIFOJJ_OFFSET UNITYSDK_OFFSET(0x142E6190)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_PEDOJDBBGPC_OFFSET UNITYSDK_OFFSET(0x142E5770)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x142E6BB0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessScreenSpaceReflection_TypeDefinitionIndex = 78201;

	class ESPostProcessScreenSpaceReflection
	{
	public:
		::MoleMole::Config::ConfigEntityScreenSpaceReflectionEffects* m_stAsset; // 0xB0
		::System::Boolean _VolDefault_enabled; // 0xB8
		::System::Byte _padding0[0x3];
		::System::Single _VolDefault_intensity; // 0xBC
		::System::Single _VolDefault_depthBufferThickness; // 0xC0
		::System::Single _VolDefault_screenFadeDistance; // 0xC4
		::UnityEngine::NAPRenderPipeline0::SsrQuality _VolDefault_quality; // 0xC8
		::System::Boolean _VolDefault_overrideGlobalPlanarReflectionConfig; // 0xCC
		::System::Byte _padding1[0x3];
		::System::Single _VolDefault_planarReflectionBlurAmount; // 0xD0
		::System::Boolean _VolPreVal_enabled_overrideState; // 0xD4
		::System::Boolean _VolPreVal_enabled; // 0xD5
		::System::Boolean _VolPreVal_intensity_overrideState; // 0xD6
		::System::Byte _padding2[0x1];
		::System::Single _VolPreVal_intensity; // 0xD8
		::System::Boolean _VolPreVal_depthBufferThickness_overrideState; // 0xDC
		::System::Byte _padding3[0x3];
		::System::Single _VolPreVal_depthBufferThickness; // 0xE0
		::System::Boolean _VolPreVal_screenFadeDistance_overrideState; // 0xE4
		::System::Byte _padding4[0x3];
		::System::Single _VolPreVal_screenFadeDistance; // 0xE8
		::System::Boolean _VolPreVal_quality_overrideState; // 0xEC
		::System::Byte _padding5[0x3];
		::UnityEngine::NAPRenderPipeline0::SsrQuality _VolPreVal_quality; // 0xF0
		::System::Boolean _VolPreVal_overrideGlobalPlanarReflectionConfig_overrideState; // 0xF4
		::System::Boolean _VolPreVal_overrideGlobalPlanarReflectionConfig; // 0xF5
		::System::Boolean _VolPreVal_planarReflectionBlurAmount_overrideState; // 0xF6
		::System::Byte _padding6[0x1];
		::System::Single _VolPreVal_planarReflectionBlurAmount; // 0xF8
		::System::Boolean _TimelineCurveFirstVal_enabled; // 0xFC
		::System::Boolean _TimelineCurveLastVal_enabled; // 0xFD
		::System::Byte _padding7[0x2];
		::System::Single _TimelineCurveFirstVal_intensity; // 0x100
		::System::Single _TimelineCurveLastVal_intensity; // 0x104
		::System::Single _TimelineCurveFirstVal_depthBufferThickness; // 0x108
		::System::Single _TimelineCurveLastVal_depthBufferThickness; // 0x10C
		::System::Single _TimelineCurveFirstVal_screenFadeDistance; // 0x110
		::System::Single _TimelineCurveLastVal_screenFadeDistance; // 0x114
		::System::Boolean _TimelineCurveFirstVal_overrideGlobalPlanarReflectionConfig; // 0x118
		::System::Boolean _TimelineCurveLastVal_overrideGlobalPlanarReflectionConfig; // 0x119
		::System::Byte _padding8[0x2];
		::System::Single _TimelineCurveFirstVal_planarReflectionBlurAmount; // 0x11C
		::System::Single _TimelineCurveLastVal_planarReflectionBlurAmount; // 0x120
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_enabled_FieldHandleType; // 0x124
		::System::Boolean ESPP_enabled_UseIt; // 0x128
		::System::Byte _padding9[0x7];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_enabled; // 0x130
		::System::Boolean ESPP_enabled_EnableFade; // 0x138
		::System::Boolean ESPP_enabled_EnableOverrideDefaultValue; // 0x139
		::System::Boolean ESPP_enabled_OverrideDefaultValue; // 0x13A
		::System::Byte _padding10[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_intensity_FieldHandleType; // 0x13C
		::System::Boolean ESPP_intensity_UseIt; // 0x140
		::System::Byte _padding11[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_intensity; // 0x148
		::System::Boolean ESPP_intensity_EnableFade; // 0x150
		::System::Boolean ESPP_intensity_EnableOverrideDefaultValue; // 0x151
		::System::Byte _padding12[0x2];
		::System::Single ESPP_intensity_OverrideDefaultValue; // 0x154
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_depthBufferThickness_FieldHandleType; // 0x158
		::System::Boolean ESPP_depthBufferThickness_UseIt; // 0x15C
		::System::Byte _padding13[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_depthBufferThickness; // 0x160
		::System::Boolean ESPP_depthBufferThickness_EnableFade; // 0x168
		::System::Boolean ESPP_depthBufferThickness_EnableOverrideDefaultValue; // 0x169
		::System::Byte _padding14[0x2];
		::System::Single ESPP_depthBufferThickness_OverrideDefaultValue; // 0x16C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_screenFadeDistance_FieldHandleType; // 0x170
		::System::Boolean ESPP_screenFadeDistance_UseIt; // 0x174
		::System::Byte _padding15[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_screenFadeDistance; // 0x178
		::System::Boolean ESPP_screenFadeDistance_EnableFade; // 0x180
		::System::Boolean ESPP_screenFadeDistance_EnableOverrideDefaultValue; // 0x181
		::System::Byte _padding16[0x2];
		::System::Single ESPP_screenFadeDistance_OverrideDefaultValue; // 0x184
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_quality_FieldHandleType; // 0x188
		::UnityEngine::NAPRenderPipeline0::SsrQuality ESPP_quality; // 0x18C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_overrideGlobalPlanarReflectionConfig_FieldHandleType; // 0x190
		::System::Boolean ESPP_overrideGlobalPlanarReflectionConfig_UseIt; // 0x194
		::System::Byte _padding17[0x3];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_overrideGlobalPlanarReflectionConfig; // 0x198
		::System::Boolean ESPP_overrideGlobalPlanarReflectionConfig_EnableFade; // 0x1A0
		::System::Boolean ESPP_overrideGlobalPlanarReflectionConfig_EnableOverrideDefaultValue; // 0x1A1
		::System::Boolean ESPP_overrideGlobalPlanarReflectionConfig_OverrideDefaultValue; // 0x1A2
		::System::Byte _padding18[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_planarReflectionBlurAmount_FieldHandleType; // 0x1A4
		::System::Boolean ESPP_planarReflectionBlurAmount_UseIt; // 0x1A8
		::System::Byte _padding19[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_planarReflectionBlurAmount; // 0x1B0
		::System::Boolean ESPP_planarReflectionBlurAmount_EnableFade; // 0x1B8
		::System::Boolean ESPP_planarReflectionBlurAmount_EnableOverrideDefaultValue; // 0x1B9
		::System::Byte _padding20[0x2];
		::System::Single ESPP_planarReflectionBlurAmount_OverrideDefaultValue; // 0x1BC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION__CTOR_OFFSET))(this);
		}

		::System::Void NNEGPFCPCAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_NNEGPFCPCAB_OFFSET))(this);
		}

		::System::Void IEFBPLNILIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_IEFBPLNILIE_OFFSET))(this);
		}

		::System::Void AJIPNBANCOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_AJIPNBANCOC_OFFSET))(this);
		}

		::System::Void AAOGMJFNGIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_AAOGMJFNGIB_OFFSET))(this);
		}

		::System::Void BAHGDCGIEKL(::System::Single PBKKBBHOCLC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_BAHGDCGIEKL_OFFSET))(this, PBKKBBHOCLC);
		}

		::System::Void ALJEEEAPCBH(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_ALJEEEAPCBH_OFFSET))(this, HIIOCANBKAM);
		}

		::System::Void AFPCLLAALBH(::System::Single FDLDIDFMCIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_AFPCLLAALBH_OFFSET))(this, FDLDIDFMCIG);
		}

		::System::Void PEDOJDBBGPC(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_PEDOJDBBGPC_OFFSET))(this, AHAFNGEDPLI);
		}

		::System::Void ONPGLGIFOJJ(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEREFLECTION_ONPGLGIFOJJ_OFFSET))(this, AHAFNGEDPLI);
		}
	};
}
