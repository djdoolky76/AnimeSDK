#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/PostLight_RenderLayerMask.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace MoleMole::Config { class ConfigEntityScreenSpacePlanarReflectionEffects; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_AAOGMJFNGIB_OFFSET UNITYSDK_OFFSET(0x1464AE70)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_AFPCLLAALBH_OFFSET UNITYSDK_OFFSET(0x1464F3D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_AJIPNBANCOC_OFFSET UNITYSDK_OFFSET(0x1464AB40)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_ALJEEEAPCBH_OFFSET UNITYSDK_OFFSET(0x1464C350)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_BAHGDCGIEKL_OFFSET UNITYSDK_OFFSET(0x1464BCF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_IEFBPLNILIE_OFFSET UNITYSDK_OFFSET(0x1464AB30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_NNEGPFCPCAB_OFFSET UNITYSDK_OFFSET(0x1464A590)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_ONPGLGIFOJJ_OFFSET UNITYSDK_OFFSET(0x146513E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_PEDOJDBBGPC_OFFSET UNITYSDK_OFFSET(0x14650630)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x14652190)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessScreenSpacePlanarReflection_TypeDefinitionIndex = 62405;

	class ESPostProcessScreenSpacePlanarReflection
	{
	public:
		::MoleMole::Config::ConfigEntityScreenSpacePlanarReflectionEffects* m_stAsset; // 0xB0
		::System::Boolean _VolDefault_mirrorReflectionOverride; // 0xB8
		::System::Byte _padding0[0x3];
		::System::Single _VolDefault_planarReflectionBlurAmount; // 0xBC
		::System::Single _VolDefault_planarReflectionLodSteps; // 0xC0
		::System::Single _VolDefault_planarReflectionMinSmoothness; // 0xC4
		::System::Single _VolDefault_planarReflectionSmoothnessFadeStart; // 0xC8
		::UnityEngine::LayerMask _VolDefault_planarReflectionCameraDisabledLayerMask; // 0xCC
		::UnityEngine::LayerMask _VolDefault_planarReflectionCameraDisabledLayerMaskForSpecialSceneAndDevice; // 0xD0
		::UnityEngine::Rendering::Universal::Internal::PostLight_RenderLayerMask _VolDefault_planarReflectionCameraDisabledRenderLayerMask; // 0xD4
		::System::Boolean _VolDefault_Enabled; // 0xD8
		::System::Byte _padding1[0x3];
		::System::Single _VolDefault_FadeDistance; // 0xDC
		::System::Single _VolDefault_StretchScale; // 0xE0
		::System::Single _VolDefault_ScreenStretchThreshold; // 0xE4
		::System::Boolean _VolPreVal_mirrorReflectionOverride_overrideState; // 0xE8
		::System::Boolean _VolPreVal_mirrorReflectionOverride; // 0xE9
		::System::Boolean _VolPreVal_planarReflectionBlurAmount_overrideState; // 0xEA
		::System::Byte _padding2[0x1];
		::System::Single _VolPreVal_planarReflectionBlurAmount; // 0xEC
		::System::Boolean _VolPreVal_planarReflectionLodSteps_overrideState; // 0xF0
		::System::Byte _padding3[0x3];
		::System::Single _VolPreVal_planarReflectionLodSteps; // 0xF4
		::System::Boolean _VolPreVal_planarReflectionMinSmoothness_overrideState; // 0xF8
		::System::Byte _padding4[0x3];
		::System::Single _VolPreVal_planarReflectionMinSmoothness; // 0xFC
		::System::Boolean _VolPreVal_planarReflectionSmoothnessFadeStart_overrideState; // 0x100
		::System::Byte _padding5[0x3];
		::System::Single _VolPreVal_planarReflectionSmoothnessFadeStart; // 0x104
		::System::Boolean _VolPreVal_planarReflectionCameraDisabledLayerMask_overrideState; // 0x108
		::System::Byte _padding6[0x3];
		::UnityEngine::LayerMask _VolPreVal_planarReflectionCameraDisabledLayerMask; // 0x10C
		::System::Boolean _VolPreVal_planarReflectionCameraDisabledLayerMaskForSpecialSceneAndDevice_overrideState; // 0x110
		::System::Byte _padding7[0x3];
		::UnityEngine::LayerMask _VolPreVal_planarReflectionCameraDisabledLayerMaskForSpecialSceneAndDevice; // 0x114
		::System::Boolean _VolPreVal_planarReflectionCameraDisabledRenderLayerMask_overrideState; // 0x118
		::System::Byte _padding8[0x3];
		::UnityEngine::Rendering::Universal::Internal::PostLight_RenderLayerMask _VolPreVal_planarReflectionCameraDisabledRenderLayerMask; // 0x11C
		::System::Boolean _VolPreVal_Enabled_overrideState; // 0x120
		::System::Boolean _VolPreVal_Enabled; // 0x121
		::System::Boolean _VolPreVal_FadeDistance_overrideState; // 0x122
		::System::Byte _padding9[0x1];
		::System::Single _VolPreVal_FadeDistance; // 0x124
		::System::Boolean _VolPreVal_StretchScale_overrideState; // 0x128
		::System::Byte _padding10[0x3];
		::System::Single _VolPreVal_StretchScale; // 0x12C
		::System::Boolean _VolPreVal_ScreenStretchThreshold_overrideState; // 0x130
		::System::Byte _padding11[0x3];
		::System::Single _VolPreVal_ScreenStretchThreshold; // 0x134
		::System::Boolean _TimelineCurveFirstVal_mirrorReflectionOverride; // 0x138
		::System::Boolean _TimelineCurveLastVal_mirrorReflectionOverride; // 0x139
		::System::Byte _padding12[0x2];
		::System::Single _TimelineCurveFirstVal_planarReflectionBlurAmount; // 0x13C
		::System::Single _TimelineCurveLastVal_planarReflectionBlurAmount; // 0x140
		::System::Single _TimelineCurveFirstVal_planarReflectionLodSteps; // 0x144
		::System::Single _TimelineCurveLastVal_planarReflectionLodSteps; // 0x148
		::System::Single _TimelineCurveFirstVal_planarReflectionMinSmoothness; // 0x14C
		::System::Single _TimelineCurveLastVal_planarReflectionMinSmoothness; // 0x150
		::System::Single _TimelineCurveFirstVal_planarReflectionSmoothnessFadeStart; // 0x154
		::System::Single _TimelineCurveLastVal_planarReflectionSmoothnessFadeStart; // 0x158
		::System::Boolean _TimelineCurveFirstVal_Enabled; // 0x15C
		::System::Boolean _TimelineCurveLastVal_Enabled; // 0x15D
		::System::Byte _padding13[0x2];
		::System::Single _TimelineCurveFirstVal_FadeDistance; // 0x160
		::System::Single _TimelineCurveLastVal_FadeDistance; // 0x164
		::System::Single _TimelineCurveFirstVal_StretchScale; // 0x168
		::System::Single _TimelineCurveLastVal_StretchScale; // 0x16C
		::System::Single _TimelineCurveFirstVal_ScreenStretchThreshold; // 0x170
		::System::Single _TimelineCurveLastVal_ScreenStretchThreshold; // 0x174
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_mirrorReflectionOverride_FieldHandleType; // 0x178
		::System::Boolean ESPP_mirrorReflectionOverride_UseIt; // 0x17C
		::System::Byte _padding14[0x3];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_mirrorReflectionOverride; // 0x180
		::System::Boolean ESPP_mirrorReflectionOverride_EnableFade; // 0x188
		::System::Boolean ESPP_mirrorReflectionOverride_EnableOverrideDefaultValue; // 0x189
		::System::Boolean ESPP_mirrorReflectionOverride_OverrideDefaultValue; // 0x18A
		::System::Byte _padding15[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_planarReflectionBlurAmount_FieldHandleType; // 0x18C
		::System::Boolean ESPP_planarReflectionBlurAmount_UseIt; // 0x190
		::System::Byte _padding16[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_planarReflectionBlurAmount; // 0x198
		::System::Boolean ESPP_planarReflectionBlurAmount_EnableFade; // 0x1A0
		::System::Boolean ESPP_planarReflectionBlurAmount_EnableOverrideDefaultValue; // 0x1A1
		::System::Byte _padding17[0x2];
		::System::Single ESPP_planarReflectionBlurAmount_OverrideDefaultValue; // 0x1A4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_planarReflectionLodSteps_FieldHandleType; // 0x1A8
		::System::Boolean ESPP_planarReflectionLodSteps_UseIt; // 0x1AC
		::System::Byte _padding18[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_planarReflectionLodSteps; // 0x1B0
		::System::Boolean ESPP_planarReflectionLodSteps_EnableFade; // 0x1B8
		::System::Boolean ESPP_planarReflectionLodSteps_EnableOverrideDefaultValue; // 0x1B9
		::System::Byte _padding19[0x2];
		::System::Single ESPP_planarReflectionLodSteps_OverrideDefaultValue; // 0x1BC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_planarReflectionMinSmoothness_FieldHandleType; // 0x1C0
		::System::Boolean ESPP_planarReflectionMinSmoothness_UseIt; // 0x1C4
		::System::Byte _padding20[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_planarReflectionMinSmoothness; // 0x1C8
		::System::Boolean ESPP_planarReflectionMinSmoothness_EnableFade; // 0x1D0
		::System::Boolean ESPP_planarReflectionMinSmoothness_EnableOverrideDefaultValue; // 0x1D1
		::System::Byte _padding21[0x2];
		::System::Single ESPP_planarReflectionMinSmoothness_OverrideDefaultValue; // 0x1D4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_planarReflectionSmoothnessFadeStart_FieldHandleType; // 0x1D8
		::System::Boolean ESPP_planarReflectionSmoothnessFadeStart_UseIt; // 0x1DC
		::System::Byte _padding22[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_planarReflectionSmoothnessFadeStart; // 0x1E0
		::System::Boolean ESPP_planarReflectionSmoothnessFadeStart_EnableFade; // 0x1E8
		::System::Boolean ESPP_planarReflectionSmoothnessFadeStart_EnableOverrideDefaultValue; // 0x1E9
		::System::Byte _padding23[0x2];
		::System::Single ESPP_planarReflectionSmoothnessFadeStart_OverrideDefaultValue; // 0x1EC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_planarReflectionCameraDisabledLayerMask_FieldHandleType; // 0x1F0
		::UnityEngine::LayerMask ESPP_planarReflectionCameraDisabledLayerMask; // 0x1F4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_planarReflectionCameraDisabledLayerMaskForSpecialSceneAndDevice_FieldHandleType; // 0x1F8
		::UnityEngine::LayerMask ESPP_planarReflectionCameraDisabledLayerMaskForSpecialSceneAndDevice; // 0x1FC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_planarReflectionCameraDisabledRenderLayerMask_FieldHandleType; // 0x200
		::UnityEngine::Rendering::Universal::Internal::PostLight_RenderLayerMask ESPP_planarReflectionCameraDisabledRenderLayerMask; // 0x204
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_Enabled_FieldHandleType; // 0x208
		::System::Boolean ESPP_Enabled_UseIt; // 0x20C
		::System::Byte _padding24[0x3];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_Enabled; // 0x210
		::System::Boolean ESPP_Enabled_EnableFade; // 0x218
		::System::Boolean ESPP_Enabled_EnableOverrideDefaultValue; // 0x219
		::System::Boolean ESPP_Enabled_OverrideDefaultValue; // 0x21A
		::System::Byte _padding25[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_FadeDistance_FieldHandleType; // 0x21C
		::System::Boolean ESPP_FadeDistance_UseIt; // 0x220
		::System::Byte _padding26[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_FadeDistance; // 0x228
		::System::Boolean ESPP_FadeDistance_EnableFade; // 0x230
		::System::Boolean ESPP_FadeDistance_EnableOverrideDefaultValue; // 0x231
		::System::Byte _padding27[0x2];
		::System::Single ESPP_FadeDistance_OverrideDefaultValue; // 0x234
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_StretchScale_FieldHandleType; // 0x238
		::System::Boolean ESPP_StretchScale_UseIt; // 0x23C
		::System::Byte _padding28[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_StretchScale; // 0x240
		::System::Boolean ESPP_StretchScale_EnableFade; // 0x248
		::System::Boolean ESPP_StretchScale_EnableOverrideDefaultValue; // 0x249
		::System::Byte _padding29[0x2];
		::System::Single ESPP_StretchScale_OverrideDefaultValue; // 0x24C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_ScreenStretchThreshold_FieldHandleType; // 0x250
		::System::Boolean ESPP_ScreenStretchThreshold_UseIt; // 0x254
		::System::Byte _padding30[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_ScreenStretchThreshold; // 0x258
		::System::Boolean ESPP_ScreenStretchThreshold_EnableFade; // 0x260
		::System::Boolean ESPP_ScreenStretchThreshold_EnableOverrideDefaultValue; // 0x261
		::System::Byte _padding31[0x2];
		::System::Single ESPP_ScreenStretchThreshold_OverrideDefaultValue; // 0x264

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION__CTOR_OFFSET))(this);
		}

		::System::Void NNEGPFCPCAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_NNEGPFCPCAB_OFFSET))(this);
		}

		::System::Void IEFBPLNILIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_IEFBPLNILIE_OFFSET))(this);
		}

		::System::Void AJIPNBANCOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_AJIPNBANCOC_OFFSET))(this);
		}

		::System::Void AAOGMJFNGIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_AAOGMJFNGIB_OFFSET))(this);
		}

		::System::Void BAHGDCGIEKL(::System::Single PBKKBBHOCLC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_BAHGDCGIEKL_OFFSET))(this, PBKKBBHOCLC);
		}

		::System::Void ALJEEEAPCBH(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_ALJEEEAPCBH_OFFSET))(this, HIIOCANBKAM);
		}

		::System::Void AFPCLLAALBH(::System::Single FDLDIDFMCIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_AFPCLLAALBH_OFFSET))(this, FDLDIDFMCIG);
		}

		::System::Void PEDOJDBBGPC(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_PEDOJDBBGPC_OFFSET))(this, AHAFNGEDPLI);
		}

		::System::Void ONPGLGIFOJJ(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENSPACEPLANARREFLECTION_ONPGLGIFOJJ_OFFSET))(this, AHAFNGEDPLI);
		}
	};
}
