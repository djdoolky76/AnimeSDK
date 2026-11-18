#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DownSampleLevel.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SampleDistanceMode.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class ConfigEntityRadialBlurs; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector2KeyframeCurve; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_AAOGMJFNGIB_OFFSET UNITYSDK_OFFSET(0x142D57E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_AFPCLLAALBH_OFFSET UNITYSDK_OFFSET(0x142DC970)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_AJIPNBANCOC_OFFSET UNITYSDK_OFFSET(0x142D53D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_ALJEEEAPCBH_OFFSET UNITYSDK_OFFSET(0x142D7940)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_BAHGDCGIEKL_OFFSET UNITYSDK_OFFSET(0x142D7020)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_IEFBPLNILIE_OFFSET UNITYSDK_OFFSET(0x142D53C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_NNEGPFCPCAB_OFFSET UNITYSDK_OFFSET(0x142D4C40)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_ONPGLGIFOJJ_OFFSET UNITYSDK_OFFSET(0x142DFB70)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_PEDOJDBBGPC_OFFSET UNITYSDK_OFFSET(0x142DE6E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR__CTOR_OFFSET UNITYSDK_OFFSET(0x142E1000)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessRadialBlur_TypeDefinitionIndex = 72510;

	class ESPostProcessRadialBlur
	{
	public:
		::MoleMole::Config::ConfigEntityRadialBlurs* m_stAsset; // 0xB0
		::UnityEngine::Rendering::Universal::DownSampleLevel _DefaultDownSampleLevel; // 0xB8
		::UnityEngine::Rendering::Universal::SampleDistanceMode _DefaultSampleDistanceMode; // 0xBC
		::System::Single _DefaultRadius; // 0xC0
		::System::Single _DefaultThreshold; // 0xC4
		::UnityEngine::Vector2 _DefaultCircleRange; // 0xC8
		::System::Boolean _DefaultForceActiveOverlayDistortion; // 0xD0
		::System::Boolean _DefaultUseBloomMode; // 0xD1
		::System::Byte _padding0[0x2];
		::System::Single _DefaultGlareIntensity; // 0xD4
		::System::Single _DefaultGlareThreshold; // 0xD8
		::System::Single _DefaultGlareCenterFadeRange; // 0xDC
		::System::Single _DefaultGlareFadeShapeRatio; // 0xE0
		::UnityEngine::Rendering::Universal::DownSampleLevel _VolDefault_downSample; // 0xE4
		::UnityEngine::Rendering::Universal::SampleDistanceMode _VolDefault_sampleDistanceMode; // 0xE8
		::System::Int32 _VolDefault_sampleCount; // 0xEC
		::System::Single _VolDefault_radius; // 0xF0
		::UnityEngine::Vector2 _VolDefault_centerPosition; // 0xF4
		::System::Single _VolDefault_threshold; // 0xFC
		::System::Boolean _VolDefault_useCircleRange; // 0x100
		::System::Byte _padding1[0x3];
		::UnityEngine::Vector2 _VolDefault_circleRange; // 0x104
		::System::Boolean _VolDefault_forceActiveOverlayDistortion; // 0x10C
		::System::Boolean _VolDefault_useBloomMode; // 0x10D
		::System::Byte _padding2[0x2];
		::System::Single _VolDefault_glareIntensity; // 0x110
		::System::Single _VolDefault_glareThreshold; // 0x114
		::System::Single _VolDefault_glareCenterFadeRange; // 0x118
		::System::Single _VolDefault_glareFadeShapeRatio; // 0x11C
		::System::Boolean _VolDefault_canBeDisabledByGlobalConfig; // 0x120
		::System::Byte _padding3[0x3];
		::System::Single _VolDefault_noiseScale; // 0x124
		::System::Single _VolDefault_BloomModeRadiusAdd; // 0x128
		::System::Int32 _VolDefault_BloomModeSampleCountAdd; // 0x12C
		::System::Boolean _VolPreVal_downSample_overrideState; // 0x130
		::System::Byte _padding4[0x3];
		::UnityEngine::Rendering::Universal::DownSampleLevel _VolPreVal_downSample; // 0x134
		::System::Boolean _VolPreVal_sampleDistanceMode_overrideState; // 0x138
		::System::Byte _padding5[0x3];
		::UnityEngine::Rendering::Universal::SampleDistanceMode _VolPreVal_sampleDistanceMode; // 0x13C
		::System::Boolean _VolPreVal_sampleCount_overrideState; // 0x140
		::System::Byte _padding6[0x3];
		::System::Int32 _VolPreVal_sampleCount; // 0x144
		::System::Boolean _VolPreVal_radius_overrideState; // 0x148
		::System::Byte _padding7[0x3];
		::System::Single _VolPreVal_radius; // 0x14C
		::System::Boolean _VolPreVal_centerPosition_overrideState; // 0x150
		::System::Byte _padding8[0x3];
		::UnityEngine::Vector2 _VolPreVal_centerPosition; // 0x154
		::System::Boolean _VolPreVal_threshold_overrideState; // 0x15C
		::System::Byte _padding9[0x3];
		::System::Single _VolPreVal_threshold; // 0x160
		::System::Boolean _VolPreVal_useCircleRange_overrideState; // 0x164
		::System::Boolean _VolPreVal_useCircleRange; // 0x165
		::System::Boolean _VolPreVal_circleRange_overrideState; // 0x166
		::System::Byte _padding10[0x1];
		::UnityEngine::Vector2 _VolPreVal_circleRange; // 0x168
		::System::Boolean _VolPreVal_forceActiveOverlayDistortion_overrideState; // 0x170
		::System::Boolean _VolPreVal_forceActiveOverlayDistortion; // 0x171
		::System::Boolean _VolPreVal_useBloomMode_overrideState; // 0x172
		::System::Boolean _VolPreVal_useBloomMode; // 0x173
		::System::Boolean _VolPreVal_glareIntensity_overrideState; // 0x174
		::System::Byte _padding11[0x3];
		::System::Single _VolPreVal_glareIntensity; // 0x178
		::System::Boolean _VolPreVal_glareThreshold_overrideState; // 0x17C
		::System::Byte _padding12[0x3];
		::System::Single _VolPreVal_glareThreshold; // 0x180
		::System::Boolean _VolPreVal_glareCenterFadeRange_overrideState; // 0x184
		::System::Byte _padding13[0x3];
		::System::Single _VolPreVal_glareCenterFadeRange; // 0x188
		::System::Boolean _VolPreVal_glareFadeShapeRatio_overrideState; // 0x18C
		::System::Byte _padding14[0x3];
		::System::Single _VolPreVal_glareFadeShapeRatio; // 0x190
		::System::Boolean _VolPreVal_canBeDisabledByGlobalConfig_overrideState; // 0x194
		::System::Boolean _VolPreVal_canBeDisabledByGlobalConfig; // 0x195
		::System::Boolean _VolPreVal_noiseScale_overrideState; // 0x196
		::System::Byte _padding15[0x1];
		::System::Single _VolPreVal_noiseScale; // 0x198
		::System::Boolean _VolPreVal_BloomModeRadiusAdd_overrideState; // 0x19C
		::System::Byte _padding16[0x3];
		::System::Single _VolPreVal_BloomModeRadiusAdd; // 0x1A0
		::System::Boolean _VolPreVal_BloomModeSampleCountAdd_overrideState; // 0x1A4
		::System::Byte _padding17[0x3];
		::System::Int32 _VolPreVal_BloomModeSampleCountAdd; // 0x1A8
		::System::Single _TimelineCurveFirstVal_radius; // 0x1AC
		::System::Single _TimelineCurveLastVal_radius; // 0x1B0
		::UnityEngine::Vector2 _TimelineCurveFirstVal_centerPosition; // 0x1B4
		::UnityEngine::Vector2 _TimelineCurveLastVal_centerPosition; // 0x1BC
		::System::Single _TimelineCurveFirstVal_threshold; // 0x1C4
		::System::Single _TimelineCurveLastVal_threshold; // 0x1C8
		::System::Boolean _TimelineCurveFirstVal_useCircleRange; // 0x1CC
		::System::Boolean _TimelineCurveLastVal_useCircleRange; // 0x1CD
		::System::Byte _padding18[0x2];
		::UnityEngine::Vector2 _TimelineCurveFirstVal_circleRange; // 0x1D0
		::UnityEngine::Vector2 _TimelineCurveLastVal_circleRange; // 0x1D8
		::System::Boolean _TimelineCurveFirstVal_useBloomMode; // 0x1E0
		::System::Boolean _TimelineCurveLastVal_useBloomMode; // 0x1E1
		::System::Byte _padding19[0x2];
		::System::Single _TimelineCurveFirstVal_glareIntensity; // 0x1E4
		::System::Single _TimelineCurveLastVal_glareIntensity; // 0x1E8
		::System::Single _TimelineCurveFirstVal_glareThreshold; // 0x1EC
		::System::Single _TimelineCurveLastVal_glareThreshold; // 0x1F0
		::System::Single _TimelineCurveFirstVal_glareCenterFadeRange; // 0x1F4
		::System::Single _TimelineCurveLastVal_glareCenterFadeRange; // 0x1F8
		::System::Single _TimelineCurveFirstVal_glareFadeShapeRatio; // 0x1FC
		::System::Single _TimelineCurveLastVal_glareFadeShapeRatio; // 0x200
		::System::Single _TimelineCurveFirstVal_noiseScale; // 0x204
		::System::Single _TimelineCurveLastVal_noiseScale; // 0x208
		::System::Single _TimelineCurveFirstVal_BloomModeRadiusAdd; // 0x20C
		::System::Single _TimelineCurveLastVal_BloomModeRadiusAdd; // 0x210
		::System::Int32 _TimelineCurveFirstVal_BloomModeSampleCountAdd; // 0x214
		::System::Int32 _TimelineCurveLastVal_BloomModeSampleCountAdd; // 0x218
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_downSample_FieldHandleType; // 0x21C
		::UnityEngine::Rendering::Universal::DownSampleLevel ESPP_downSample; // 0x220
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sampleDistanceMode_FieldHandleType; // 0x224
		::UnityEngine::Rendering::Universal::SampleDistanceMode ESPP_sampleDistanceMode; // 0x228
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sampleCount_FieldHandleType; // 0x22C
		::System::Int32 ESPP_sampleCount; // 0x230
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_radius_FieldHandleType; // 0x234
		::System::Boolean ESPP_radius_UseIt; // 0x238
		::System::Byte _padding20[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_radius; // 0x240
		::System::Boolean ESPP_radius_EnableFade; // 0x248
		::System::Boolean ESPP_radius_EnableOverrideDefaultValue; // 0x249
		::System::Byte _padding21[0x2];
		::System::Single ESPP_radius_OverrideDefaultValue; // 0x24C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_centerPosition_FieldHandleType; // 0x250
		::System::Boolean ESPP_centerPosition_UseIt; // 0x254
		::System::Byte _padding22[0x3];
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_centerPosition; // 0x258
		::System::Boolean ESPP_centerPosition_EnableFade; // 0x260
		::System::Boolean ESPP_centerPosition_EnableOverrideDefaultValue; // 0x261
		::System::Byte _padding23[0x2];
		::UnityEngine::Vector2 ESPP_centerPosition_OverrideDefaultValue; // 0x264
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_threshold_FieldHandleType; // 0x26C
		::System::Boolean ESPP_threshold_UseIt; // 0x270
		::System::Byte _padding24[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_threshold; // 0x278
		::System::Boolean ESPP_threshold_EnableFade; // 0x280
		::System::Boolean ESPP_threshold_EnableOverrideDefaultValue; // 0x281
		::System::Byte _padding25[0x2];
		::System::Single ESPP_threshold_OverrideDefaultValue; // 0x284
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_useCircleRange_FieldHandleType; // 0x288
		::System::Boolean ESPP_useCircleRange_UseIt; // 0x28C
		::System::Byte _padding26[0x3];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_useCircleRange; // 0x290
		::System::Boolean ESPP_useCircleRange_EnableFade; // 0x298
		::System::Boolean ESPP_useCircleRange_EnableOverrideDefaultValue; // 0x299
		::System::Boolean ESPP_useCircleRange_OverrideDefaultValue; // 0x29A
		::System::Byte _padding27[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_circleRange_FieldHandleType; // 0x29C
		::System::Boolean ESPP_circleRange_UseIt; // 0x2A0
		::System::Byte _padding28[0x7];
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_circleRange; // 0x2A8
		::System::Boolean ESPP_circleRange_EnableFade; // 0x2B0
		::System::Boolean ESPP_circleRange_EnableOverrideDefaultValue; // 0x2B1
		::System::Byte _padding29[0x2];
		::UnityEngine::Vector2 ESPP_circleRange_OverrideDefaultValue; // 0x2B4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_forceActiveOverlayDistortion_FieldHandleType; // 0x2BC
		::System::Boolean ESPP_forceActiveOverlayDistortion; // 0x2C0
		::System::Byte _padding30[0x3];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_useBloomMode_FieldHandleType; // 0x2C4
		::System::Boolean ESPP_useBloomMode_UseIt; // 0x2C8
		::System::Byte _padding31[0x7];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_useBloomMode; // 0x2D0
		::System::Boolean ESPP_useBloomMode_EnableFade; // 0x2D8
		::System::Boolean ESPP_useBloomMode_EnableOverrideDefaultValue; // 0x2D9
		::System::Boolean ESPP_useBloomMode_OverrideDefaultValue; // 0x2DA
		::System::Byte _padding32[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_glareIntensity_FieldHandleType; // 0x2DC
		::System::Boolean ESPP_glareIntensity_UseIt; // 0x2E0
		::System::Byte _padding33[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_glareIntensity; // 0x2E8
		::System::Boolean ESPP_glareIntensity_EnableFade; // 0x2F0
		::System::Boolean ESPP_glareIntensity_EnableOverrideDefaultValue; // 0x2F1
		::System::Byte _padding34[0x2];
		::System::Single ESPP_glareIntensity_OverrideDefaultValue; // 0x2F4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_glareThreshold_FieldHandleType; // 0x2F8
		::System::Boolean ESPP_glareThreshold_UseIt; // 0x2FC
		::System::Byte _padding35[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_glareThreshold; // 0x300
		::System::Boolean ESPP_glareThreshold_EnableFade; // 0x308
		::System::Boolean ESPP_glareThreshold_EnableOverrideDefaultValue; // 0x309
		::System::Byte _padding36[0x2];
		::System::Single ESPP_glareThreshold_OverrideDefaultValue; // 0x30C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_glareCenterFadeRange_FieldHandleType; // 0x310
		::System::Boolean ESPP_glareCenterFadeRange_UseIt; // 0x314
		::System::Byte _padding37[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_glareCenterFadeRange; // 0x318
		::System::Boolean ESPP_glareCenterFadeRange_EnableFade; // 0x320
		::System::Boolean ESPP_glareCenterFadeRange_EnableOverrideDefaultValue; // 0x321
		::System::Byte _padding38[0x2];
		::System::Single ESPP_glareCenterFadeRange_OverrideDefaultValue; // 0x324
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_glareFadeShapeRatio_FieldHandleType; // 0x328
		::System::Boolean ESPP_glareFadeShapeRatio_UseIt; // 0x32C
		::System::Byte _padding39[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_glareFadeShapeRatio; // 0x330
		::System::Boolean ESPP_glareFadeShapeRatio_EnableFade; // 0x338
		::System::Boolean ESPP_glareFadeShapeRatio_EnableOverrideDefaultValue; // 0x339
		::System::Byte _padding40[0x2];
		::System::Single ESPP_glareFadeShapeRatio_OverrideDefaultValue; // 0x33C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_canBeDisabledByGlobalConfig_FieldHandleType; // 0x340
		::System::Boolean ESPP_canBeDisabledByGlobalConfig; // 0x344
		::System::Byte _padding41[0x3];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_noiseScale_FieldHandleType; // 0x348
		::System::Boolean ESPP_noiseScale_UseIt; // 0x34C
		::System::Byte _padding42[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_noiseScale; // 0x350
		::System::Boolean ESPP_noiseScale_EnableFade; // 0x358
		::System::Boolean ESPP_noiseScale_EnableOverrideDefaultValue; // 0x359
		::System::Byte _padding43[0x2];
		::System::Single ESPP_noiseScale_OverrideDefaultValue; // 0x35C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_BloomModeRadiusAdd_FieldHandleType; // 0x360
		::System::Boolean ESPP_BloomModeRadiusAdd_UseIt; // 0x364
		::System::Byte _padding44[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_BloomModeRadiusAdd; // 0x368
		::System::Boolean ESPP_BloomModeRadiusAdd_EnableFade; // 0x370
		::System::Boolean ESPP_BloomModeRadiusAdd_EnableOverrideDefaultValue; // 0x371
		::System::Byte _padding45[0x2];
		::System::Single ESPP_BloomModeRadiusAdd_OverrideDefaultValue; // 0x374
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_BloomModeSampleCountAdd_FieldHandleType; // 0x378
		::System::Boolean ESPP_BloomModeSampleCountAdd_UseIt; // 0x37C
		::System::Byte _padding46[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_BloomModeSampleCountAdd; // 0x380
		::System::Boolean ESPP_BloomModeSampleCountAdd_EnableFade; // 0x388
		::System::Boolean ESPP_BloomModeSampleCountAdd_EnableOverrideDefaultValue; // 0x389
		::System::Byte _padding47[0x2];
		::System::Int32 ESPP_BloomModeSampleCountAdd_OverrideDefaultValue; // 0x38C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR__CTOR_OFFSET))(this);
		}

		::System::Void NNEGPFCPCAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_NNEGPFCPCAB_OFFSET))(this);
		}

		::System::Void IEFBPLNILIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_IEFBPLNILIE_OFFSET))(this);
		}

		::System::Void AJIPNBANCOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_AJIPNBANCOC_OFFSET))(this);
		}

		::System::Void AAOGMJFNGIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_AAOGMJFNGIB_OFFSET))(this);
		}

		::System::Void BAHGDCGIEKL(::System::Single PBKKBBHOCLC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_BAHGDCGIEKL_OFFSET))(this, PBKKBBHOCLC);
		}

		::System::Void ALJEEEAPCBH(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_ALJEEEAPCBH_OFFSET))(this, HIIOCANBKAM);
		}

		::System::Void AFPCLLAALBH(::System::Single FDLDIDFMCIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_AFPCLLAALBH_OFFSET))(this, FDLDIDFMCIG);
		}

		::System::Void PEDOJDBBGPC(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_PEDOJDBBGPC_OFFSET))(this, AHAFNGEDPLI);
		}

		::System::Void ONPGLGIFOJJ(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_ONPGLGIFOJJ_OFFSET))(this, AHAFNGEDPLI);
		}
	};
}
