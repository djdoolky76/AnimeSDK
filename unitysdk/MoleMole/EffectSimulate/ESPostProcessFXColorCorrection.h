#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/FXColorCorrection_FxMaskLutMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/FXColorCorrection_FxScreenLightMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/FXColorCorrection_SaturationLutMaskMode.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Config { class ConfigEntityFXColorCorrections; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class ColorKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector2KeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector3KeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector4KeyframeCurve; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class WeatherConfigScriptableObject; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_AAOGMJFNGIB_OFFSET UNITYSDK_OFFSET(0x1B9501D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_AFPCLLAALBH_OFFSET UNITYSDK_OFFSET(0x1B9707B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_AJIPNBANCOC_OFFSET UNITYSDK_OFFSET(0x1B94F340)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_ALJEEEAPCBH_OFFSET UNITYSDK_OFFSET(0x1B959840)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_BAHGDCGIEKL_OFFSET UNITYSDK_OFFSET(0x1B956630)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_IEFBPLNILIE_OFFSET UNITYSDK_OFFSET(0x1B94F330)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_NNEGPFCPCAB_OFFSET UNITYSDK_OFFSET(0x1B94D380)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_ONPGLGIFOJJ_OFFSET UNITYSDK_OFFSET(0x12B23700)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_PEDOJDBBGPC_OFFSET UNITYSDK_OFFSET(0x1B978330)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x12B29570)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessFXColorCorrection_TypeDefinitionIndex = 49424;

	class ESPostProcessFXColorCorrection
	{
	public:
		::MoleMole::Config::ConfigEntityFXColorCorrections* m_stAsset; // 0xB0
		::System::Single _DefaultWeatherConfigWeight; // 0xB8
		::System::Single _DefaultPostExposure; // 0xBC
		::System::Single _DefaultContrast; // 0xC0
		::System::Single _DefaultSaturation; // 0xC4
		::System::Single _DefaultGamma; // 0xC8
		::System::Boolean _DefaultLutInvert; // 0xCC
		::System::Boolean _DefaultLutToneColors; // 0xCD
		::System::Byte _padding0[0x2];
		::UnityEngine::Color _DefaultLutToneA; // 0xD0
		::UnityEngine::Color _DefaultLutToneB; // 0xE0
		::System::Single _DefaultLutMiddlePoint; // 0xF0
		::System::Single _DefaultLutSoftness; // 0xF4
		::System::Single _DefaultDesaturate; // 0xF8
		::System::Boolean _DefaultInvert; // 0xFC
		::System::Boolean _DefaultToneColors; // 0xFD
		::System::Byte _padding1[0x2];
		::UnityEngine::Color _DefaultToneA; // 0x100
		::UnityEngine::Color _DefaultToneB; // 0x110
		::System::Single _DefaultMiddlePoint; // 0x120
		::System::Single _DefaultSoftness; // 0x124
		::System::Boolean _DefaultFxFogMaskPassOn; // 0x128
		::System::Byte _padding2[0x3];
		::System::Single _DefaultFxColorSaturation; // 0x12C
		::System::Boolean _VolDefault_enableCameraClip; // 0x130
		::System::Byte _padding3[0x3];
		::System::Single _VolDefault_cameraClipDistance; // 0x134
		::UnityEngine::Vector3 _VolDefault_cameraClipExtension; // 0x138
		::System::Single _VolDefault_cameraClipAlpha; // 0x144
		::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* _VolDefault_weatherConfig; // 0x148
		::System::Single _VolDefault_weatherConfigWeight; // 0x150
		::System::Boolean _VolDefault_fxLightShaftMaskOn; // 0x154
		::System::Byte _padding4[0x3];
		::UnityEngine::Rendering::Universal::FXColorCorrection_FxScreenLightMode _VolDefault_fxFxScreenLightMode; // 0x158
		::UnityEngine::Color _VolDefault_fxScreenLightColor; // 0x15C
		::System::Boolean _VolDefault_fxScreenLightMaskOn; // 0x16C
		::System::Byte _padding5[0x3];
		::System::Single _VolDefault_sceneSpecialPPSEffectIntensity; // 0x170
		::System::Boolean _VolDefault_sceneSpecialPPSOverrideWeatherGBufferSaturation; // 0x174
		::System::Byte _padding6[0x3];
		::System::Single _VolDefault_sceneSpecialPPSGBufferSaturation; // 0x178
		::System::Boolean _VolDefault_sceneSpecialPPSUseSaturationLut; // 0x17C
		::System::Byte _padding7[0x3];
		::UnityEngine::Texture* _VolDefault_sceneSpecialPPSSaturationLut; // 0x180
		::UnityEngine::Vector4 _VolDefault_sceneSpecialPPSSaturationRampGap; // 0x188
		::UnityEngine::Vector4 _VolDefault_sceneSpecialPPSSaturationRampValue; // 0x198
		::UnityEngine::Vector4 _VolDefault_sceneSpecialPPSSaturationRampGap2; // 0x1A8
		::UnityEngine::Vector4 _VolDefault_sceneSpecialPPSSaturationRampValue2; // 0x1B8
		::UnityEngine::Vector4 _VolDefault_sceneSpecialPPSSaturationRampGap3; // 0x1C8
		::UnityEngine::Vector4 _VolDefault_sceneSpecialPPSSaturationRampValue3; // 0x1D8
		::System::Boolean _VolDefault_applySaturationLutToUberPost; // 0x1E8
		::System::Byte _padding8[0x3];
		::System::Single _VolDefault_sceneSpecialPPSIgnoreRidus; // 0x1EC
		::System::Single _VolDefault_sceneSpecialPPSRadiusAlphaPow; // 0x1F0
		::UnityEngine::Color _VolDefault_sceneSpecialPPSEmissionColor; // 0x1F4
		::System::Single _VolDefault_sceneSpecialSkySaturation; // 0x204
		::System::Boolean _VolDefault_ForceUseMsaa; // 0x208
		::System::Byte _padding9[0x3];
		::System::Single _VolDefault_postExposure; // 0x20C
		::System::Single _VolDefault_contrast; // 0x210
		::System::Single _VolDefault_saturation; // 0x214
		::System::Single _VolDefault_gamma; // 0x218
		::System::Boolean _VolDefault_lutInvert; // 0x21C
		::System::Boolean _VolDefault_lutToneColors; // 0x21D
		::System::Byte _padding10[0x2];
		::UnityEngine::Color _VolDefault_lutToneA; // 0x220
		::UnityEngine::Color _VolDefault_lutToneB; // 0x230
		::System::Single _VolDefault_lutMiddlePoint; // 0x240
		::System::Single _VolDefault_lutSoftness; // 0x244
		::System::Single _VolDefault_desaturate; // 0x248
		::System::Boolean _VolDefault_invert; // 0x24C
		::System::Boolean _VolDefault_toneColors; // 0x24D
		::System::Byte _padding11[0x2];
		::UnityEngine::Color _VolDefault_toneA; // 0x250
		::UnityEngine::Color _VolDefault_toneB; // 0x260
		::System::Single _VolDefault_middlePoint; // 0x270
		::System::Single _VolDefault_softness; // 0x274
		::System::Boolean _VolDefault_fxFogMaskPassOn; // 0x278
		::System::Byte _padding12[0x3];
		::System::Single _VolDefault_fxColorSaturation; // 0x27C
		::System::Boolean _VolDefault_justControlParticleLight; // 0x280
		::System::Byte _padding13[0x3];
		::System::Single _VolDefault_localLightMultiplyIntensity; // 0x284
		::System::Single _VolDefault_localLightThreadHold; // 0x288
		::System::Single _VolDefault_indirectSpecularIntensity; // 0x28C
		::System::Boolean _VolDefault_enableLightShaft; // 0x290
		::System::Byte _padding14[0x3];
		::System::Single _VolDefault_lightShaftThreshold; // 0x294
		::System::Single _VolDefault_lightShaftIntensity; // 0x298
		::System::Boolean _VolDefault_lightShaftColorClamp; // 0x29C
		::System::Byte _padding15[0x3];
		::UnityEngine::Color _VolDefault_lightShaftColor; // 0x2A0
		::System::Single _VolDefault_lightShaftLength; // 0x2B0
		::System::Single _VolDefault_lightShaftFadeLength; // 0x2B4
		::System::Boolean _VolDefault_lightShaftBlur; // 0x2B8
		::System::Boolean _VolDefault_lightShaftUseCustomCenter; // 0x2B9
		::System::Byte _padding16[0x2];
		::UnityEngine::Vector2 _VolDefault_lightShaftCustomCenter; // 0x2BC
		::System::Boolean _VolDefault_overrideWeatherGIConfig; // 0x2C4
		::System::Byte _padding17[0x3];
		::UnityEngine::Color _VolDefault_skyColor; // 0x2C8
		::UnityEngine::Color _VolDefault_middleColor; // 0x2D8
		::UnityEngine::Color _VolDefault_groundColor; // 0x2E8
		::System::Boolean _VolDefault_useLutWithMask; // 0x2F8
		::System::Byte _padding18[0x7];
		::UnityEngine::Texture* _VolDefault_lutWithMaskTex; // 0x300
		::System::Single _VolDefault_lutWithMaskContribution; // 0x308
		::System::Boolean _VolDefault_lightShaftIgnoreSceneDepthMask; // 0x30C
		::System::Byte _padding19[0x3];
		::UnityEngine::Vector3 _VolDefault_cameraClipFxExtraExtension; // 0x310
		::System::Boolean _VolDefault_enableLocalLightControl; // 0x31C
		::System::Byte _padding20[0x3];
		::System::Single _VolDefault_localLightIntensityMultiplier; // 0x320
		::System::Single _VolDefault_localFogIntensity; // 0x324
		::UnityEngine::Rendering::Universal::FXColorCorrection_SaturationLutMaskMode _VolDefault_saturationLutMaskMode; // 0x328
		::System::Boolean _VolDefault_blackCanvasKeepWeatherValid; // 0x32C
		::System::Byte _padding21[0x3];
		::System::Single _VolDefault_toneColorOffset; // 0x330
		::System::Single _VolDefault_toneColorIntensity; // 0x334
		::UnityEngine::Rendering::Universal::FXColorCorrection_FxMaskLutMode _VolDefault_lutWithMaskMode; // 0x338
		::UnityEngine::Vector4 _VolDefault_clipPlaneForLut; // 0x33C
		::System::Single _VolDefault_clipPlaneLutExposureMulti; // 0x34C
		::System::Boolean _VolPreVal_enableCameraClip_overrideState; // 0x350
		::System::Boolean _VolPreVal_enableCameraClip; // 0x351
		::System::Boolean _VolPreVal_cameraClipDistance_overrideState; // 0x352
		::System::Byte _padding22[0x1];
		::System::Single _VolPreVal_cameraClipDistance; // 0x354
		::System::Boolean _VolPreVal_cameraClipExtension_overrideState; // 0x358
		::System::Byte _padding23[0x3];
		::UnityEngine::Vector3 _VolPreVal_cameraClipExtension; // 0x35C
		::System::Boolean _VolPreVal_cameraClipAlpha_overrideState; // 0x368
		::System::Byte _padding24[0x3];
		::System::Single _VolPreVal_cameraClipAlpha; // 0x36C
		::System::Boolean _VolPreVal_weatherConfig_overrideState; // 0x370
		::System::Byte _padding25[0x7];
		::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* _VolPreVal_weatherConfig; // 0x378
		::System::Boolean _VolPreVal_weatherConfigWeight_overrideState; // 0x380
		::System::Byte _padding26[0x3];
		::System::Single _VolPreVal_weatherConfigWeight; // 0x384
		::System::Boolean _VolPreVal_fxLightShaftMaskOn_overrideState; // 0x388
		::System::Boolean _VolPreVal_fxLightShaftMaskOn; // 0x389
		::System::Boolean _VolPreVal_fxFxScreenLightMode_overrideState; // 0x38A
		::System::Byte _padding27[0x1];
		::UnityEngine::Rendering::Universal::FXColorCorrection_FxScreenLightMode _VolPreVal_fxFxScreenLightMode; // 0x38C
		::System::Boolean _VolPreVal_fxScreenLightColor_overrideState; // 0x390
		::System::Byte _padding28[0x3];
		::UnityEngine::Color _VolPreVal_fxScreenLightColor; // 0x394
		::System::Boolean _VolPreVal_fxScreenLightMaskOn_overrideState; // 0x3A4
		::System::Boolean _VolPreVal_fxScreenLightMaskOn; // 0x3A5
		::System::Boolean _VolPreVal_sceneSpecialPPSEffectIntensity_overrideState; // 0x3A6
		::System::Byte _padding29[0x1];
		::System::Single _VolPreVal_sceneSpecialPPSEffectIntensity; // 0x3A8
		::System::Boolean _VolPreVal_sceneSpecialPPSOverrideWeatherGBufferSaturation_overrideState; // 0x3AC
		::System::Boolean _VolPreVal_sceneSpecialPPSOverrideWeatherGBufferSaturation; // 0x3AD
		::System::Boolean _VolPreVal_sceneSpecialPPSGBufferSaturation_overrideState; // 0x3AE
		::System::Byte _padding30[0x1];
		::System::Single _VolPreVal_sceneSpecialPPSGBufferSaturation; // 0x3B0
		::System::Boolean _VolPreVal_sceneSpecialPPSUseSaturationLut_overrideState; // 0x3B4
		::System::Boolean _VolPreVal_sceneSpecialPPSUseSaturationLut; // 0x3B5
		::System::Boolean _VolPreVal_sceneSpecialPPSSaturationLut_overrideState; // 0x3B6
		::System::Byte _padding31[0x1];
		::UnityEngine::Texture* _VolPreVal_sceneSpecialPPSSaturationLut; // 0x3B8
		::System::Boolean _VolPreVal_sceneSpecialPPSSaturationRampGap_overrideState; // 0x3C0
		::System::Byte _padding32[0x3];
		::UnityEngine::Vector4 _VolPreVal_sceneSpecialPPSSaturationRampGap; // 0x3C4
		::System::Boolean _VolPreVal_sceneSpecialPPSSaturationRampValue_overrideState; // 0x3D4
		::System::Byte _padding33[0x3];
		::UnityEngine::Vector4 _VolPreVal_sceneSpecialPPSSaturationRampValue; // 0x3D8
		::System::Boolean _VolPreVal_sceneSpecialPPSSaturationRampGap2_overrideState; // 0x3E8
		::System::Byte _padding34[0x3];
		::UnityEngine::Vector4 _VolPreVal_sceneSpecialPPSSaturationRampGap2; // 0x3EC
		::System::Boolean _VolPreVal_sceneSpecialPPSSaturationRampValue2_overrideState; // 0x3FC
		::System::Byte _padding35[0x3];
		::UnityEngine::Vector4 _VolPreVal_sceneSpecialPPSSaturationRampValue2; // 0x400
		::System::Boolean _VolPreVal_sceneSpecialPPSSaturationRampGap3_overrideState; // 0x410
		::System::Byte _padding36[0x3];
		::UnityEngine::Vector4 _VolPreVal_sceneSpecialPPSSaturationRampGap3; // 0x414
		::System::Boolean _VolPreVal_sceneSpecialPPSSaturationRampValue3_overrideState; // 0x424
		::System::Byte _padding37[0x3];
		::UnityEngine::Vector4 _VolPreVal_sceneSpecialPPSSaturationRampValue3; // 0x428
		::System::Boolean _VolPreVal_applySaturationLutToUberPost_overrideState; // 0x438
		::System::Boolean _VolPreVal_applySaturationLutToUberPost; // 0x439
		::System::Boolean _VolPreVal_sceneSpecialPPSIgnoreRidus_overrideState; // 0x43A
		::System::Byte _padding38[0x1];
		::System::Single _VolPreVal_sceneSpecialPPSIgnoreRidus; // 0x43C
		::System::Boolean _VolPreVal_sceneSpecialPPSRadiusAlphaPow_overrideState; // 0x440
		::System::Byte _padding39[0x3];
		::System::Single _VolPreVal_sceneSpecialPPSRadiusAlphaPow; // 0x444
		::System::Boolean _VolPreVal_sceneSpecialPPSEmissionColor_overrideState; // 0x448
		::System::Byte _padding40[0x3];
		::UnityEngine::Color _VolPreVal_sceneSpecialPPSEmissionColor; // 0x44C
		::System::Boolean _VolPreVal_sceneSpecialSkySaturation_overrideState; // 0x45C
		::System::Byte _padding41[0x3];
		::System::Single _VolPreVal_sceneSpecialSkySaturation; // 0x460
		::System::Boolean _VolPreVal_ForceUseMsaa_overrideState; // 0x464
		::System::Boolean _VolPreVal_ForceUseMsaa; // 0x465
		::System::Boolean _VolPreVal_postExposure_overrideState; // 0x466
		::System::Byte _padding42[0x1];
		::System::Single _VolPreVal_postExposure; // 0x468
		::System::Boolean _VolPreVal_contrast_overrideState; // 0x46C
		::System::Byte _padding43[0x3];
		::System::Single _VolPreVal_contrast; // 0x470
		::System::Boolean _VolPreVal_saturation_overrideState; // 0x474
		::System::Byte _padding44[0x3];
		::System::Single _VolPreVal_saturation; // 0x478
		::System::Boolean _VolPreVal_gamma_overrideState; // 0x47C
		::System::Byte _padding45[0x3];
		::System::Single _VolPreVal_gamma; // 0x480
		::System::Boolean _VolPreVal_lutInvert_overrideState; // 0x484
		::System::Boolean _VolPreVal_lutInvert; // 0x485
		::System::Boolean _VolPreVal_lutToneColors_overrideState; // 0x486
		::System::Boolean _VolPreVal_lutToneColors; // 0x487
		::System::Boolean _VolPreVal_lutToneA_overrideState; // 0x488
		::System::Byte _padding46[0x3];
		::UnityEngine::Color _VolPreVal_lutToneA; // 0x48C
		::System::Boolean _VolPreVal_lutToneB_overrideState; // 0x49C
		::System::Byte _padding47[0x3];
		::UnityEngine::Color _VolPreVal_lutToneB; // 0x4A0
		::System::Boolean _VolPreVal_lutMiddlePoint_overrideState; // 0x4B0
		::System::Byte _padding48[0x3];
		::System::Single _VolPreVal_lutMiddlePoint; // 0x4B4
		::System::Boolean _VolPreVal_lutSoftness_overrideState; // 0x4B8
		::System::Byte _padding49[0x3];
		::System::Single _VolPreVal_lutSoftness; // 0x4BC
		::System::Boolean _VolPreVal_desaturate_overrideState; // 0x4C0
		::System::Byte _padding50[0x3];
		::System::Single _VolPreVal_desaturate; // 0x4C4
		::System::Boolean _VolPreVal_invert_overrideState; // 0x4C8
		::System::Boolean _VolPreVal_invert; // 0x4C9
		::System::Boolean _VolPreVal_toneColors_overrideState; // 0x4CA
		::System::Boolean _VolPreVal_toneColors; // 0x4CB
		::System::Boolean _VolPreVal_toneA_overrideState; // 0x4CC
		::System::Byte _padding51[0x3];
		::UnityEngine::Color _VolPreVal_toneA; // 0x4D0
		::System::Boolean _VolPreVal_toneB_overrideState; // 0x4E0
		::System::Byte _padding52[0x3];
		::UnityEngine::Color _VolPreVal_toneB; // 0x4E4
		::System::Boolean _VolPreVal_middlePoint_overrideState; // 0x4F4
		::System::Byte _padding53[0x3];
		::System::Single _VolPreVal_middlePoint; // 0x4F8
		::System::Boolean _VolPreVal_softness_overrideState; // 0x4FC
		::System::Byte _padding54[0x3];
		::System::Single _VolPreVal_softness; // 0x500
		::System::Boolean _VolPreVal_fxFogMaskPassOn_overrideState; // 0x504
		::System::Boolean _VolPreVal_fxFogMaskPassOn; // 0x505
		::System::Boolean _VolPreVal_fxColorSaturation_overrideState; // 0x506
		::System::Byte _padding55[0x1];
		::System::Single _VolPreVal_fxColorSaturation; // 0x508
		::System::Boolean _VolPreVal_justControlParticleLight_overrideState; // 0x50C
		::System::Boolean _VolPreVal_justControlParticleLight; // 0x50D
		::System::Boolean _VolPreVal_localLightMultiplyIntensity_overrideState; // 0x50E
		::System::Byte _padding56[0x1];
		::System::Single _VolPreVal_localLightMultiplyIntensity; // 0x510
		::System::Boolean _VolPreVal_localLightThreadHold_overrideState; // 0x514
		::System::Byte _padding57[0x3];
		::System::Single _VolPreVal_localLightThreadHold; // 0x518
		::System::Boolean _VolPreVal_indirectSpecularIntensity_overrideState; // 0x51C
		::System::Byte _padding58[0x3];
		::System::Single _VolPreVal_indirectSpecularIntensity; // 0x520
		::System::Boolean _VolPreVal_enableLightShaft_overrideState; // 0x524
		::System::Boolean _VolPreVal_enableLightShaft; // 0x525
		::System::Boolean _VolPreVal_lightShaftThreshold_overrideState; // 0x526
		::System::Byte _padding59[0x1];
		::System::Single _VolPreVal_lightShaftThreshold; // 0x528
		::System::Boolean _VolPreVal_lightShaftIntensity_overrideState; // 0x52C
		::System::Byte _padding60[0x3];
		::System::Single _VolPreVal_lightShaftIntensity; // 0x530
		::System::Boolean _VolPreVal_lightShaftColorClamp_overrideState; // 0x534
		::System::Boolean _VolPreVal_lightShaftColorClamp; // 0x535
		::System::Boolean _VolPreVal_lightShaftColor_overrideState; // 0x536
		::System::Byte _padding61[0x1];
		::UnityEngine::Color _VolPreVal_lightShaftColor; // 0x538
		::System::Boolean _VolPreVal_lightShaftLength_overrideState; // 0x548
		::System::Byte _padding62[0x3];
		::System::Single _VolPreVal_lightShaftLength; // 0x54C
		::System::Boolean _VolPreVal_lightShaftFadeLength_overrideState; // 0x550
		::System::Byte _padding63[0x3];
		::System::Single _VolPreVal_lightShaftFadeLength; // 0x554
		::System::Boolean _VolPreVal_lightShaftBlur_overrideState; // 0x558
		::System::Boolean _VolPreVal_lightShaftBlur; // 0x559
		::System::Boolean _VolPreVal_lightShaftUseCustomCenter_overrideState; // 0x55A
		::System::Boolean _VolPreVal_lightShaftUseCustomCenter; // 0x55B
		::System::Boolean _VolPreVal_lightShaftCustomCenter_overrideState; // 0x55C
		::System::Byte _padding64[0x3];
		::UnityEngine::Vector2 _VolPreVal_lightShaftCustomCenter; // 0x560
		::System::Boolean _VolPreVal_overrideWeatherGIConfig_overrideState; // 0x568
		::System::Boolean _VolPreVal_overrideWeatherGIConfig; // 0x569
		::System::Boolean _VolPreVal_skyColor_overrideState; // 0x56A
		::System::Byte _padding65[0x1];
		::UnityEngine::Color _VolPreVal_skyColor; // 0x56C
		::System::Boolean _VolPreVal_middleColor_overrideState; // 0x57C
		::System::Byte _padding66[0x3];
		::UnityEngine::Color _VolPreVal_middleColor; // 0x580
		::System::Boolean _VolPreVal_groundColor_overrideState; // 0x590
		::System::Byte _padding67[0x3];
		::UnityEngine::Color _VolPreVal_groundColor; // 0x594
		::System::Boolean _VolPreVal_useLutWithMask_overrideState; // 0x5A4
		::System::Boolean _VolPreVal_useLutWithMask; // 0x5A5
		::System::Boolean _VolPreVal_lutWithMaskTex_overrideState; // 0x5A6
		::System::Byte _padding68[0x1];
		::UnityEngine::Texture* _VolPreVal_lutWithMaskTex; // 0x5A8
		::System::Boolean _VolPreVal_lutWithMaskContribution_overrideState; // 0x5B0
		::System::Byte _padding69[0x3];
		::System::Single _VolPreVal_lutWithMaskContribution; // 0x5B4
		::System::Boolean _VolPreVal_lightShaftIgnoreSceneDepthMask_overrideState; // 0x5B8
		::System::Boolean _VolPreVal_lightShaftIgnoreSceneDepthMask; // 0x5B9
		::System::Boolean _VolPreVal_cameraClipFxExtraExtension_overrideState; // 0x5BA
		::System::Byte _padding70[0x1];
		::UnityEngine::Vector3 _VolPreVal_cameraClipFxExtraExtension; // 0x5BC
		::System::Boolean _VolPreVal_enableLocalLightControl_overrideState; // 0x5C8
		::System::Boolean _VolPreVal_enableLocalLightControl; // 0x5C9
		::System::Boolean _VolPreVal_localLightIntensityMultiplier_overrideState; // 0x5CA
		::System::Byte _padding71[0x1];
		::System::Single _VolPreVal_localLightIntensityMultiplier; // 0x5CC
		::System::Boolean _VolPreVal_localFogIntensity_overrideState; // 0x5D0
		::System::Byte _padding72[0x3];
		::System::Single _VolPreVal_localFogIntensity; // 0x5D4
		::System::Boolean _VolPreVal_saturationLutMaskMode_overrideState; // 0x5D8
		::System::Byte _padding73[0x3];
		::UnityEngine::Rendering::Universal::FXColorCorrection_SaturationLutMaskMode _VolPreVal_saturationLutMaskMode; // 0x5DC
		::System::Boolean _VolPreVal_blackCanvasKeepWeatherValid_overrideState; // 0x5E0
		::System::Boolean _VolPreVal_blackCanvasKeepWeatherValid; // 0x5E1
		::System::Boolean _VolPreVal_toneColorOffset_overrideState; // 0x5E2
		::System::Byte _padding74[0x1];
		::System::Single _VolPreVal_toneColorOffset; // 0x5E4
		::System::Boolean _VolPreVal_toneColorIntensity_overrideState; // 0x5E8
		::System::Byte _padding75[0x3];
		::System::Single _VolPreVal_toneColorIntensity; // 0x5EC
		::System::Boolean _VolPreVal_lutWithMaskMode_overrideState; // 0x5F0
		::System::Byte _padding76[0x3];
		::UnityEngine::Rendering::Universal::FXColorCorrection_FxMaskLutMode _VolPreVal_lutWithMaskMode; // 0x5F4
		::System::Boolean _VolPreVal_clipPlaneForLut_overrideState; // 0x5F8
		::System::Byte _padding77[0x3];
		::UnityEngine::Vector4 _VolPreVal_clipPlaneForLut; // 0x5FC
		::System::Boolean _VolPreVal_clipPlaneLutExposureMulti_overrideState; // 0x60C
		::System::Byte _padding78[0x3];
		::System::Single _VolPreVal_clipPlaneLutExposureMulti; // 0x610
		::System::Single _TimelineCurveFirstVal_cameraClipDistance; // 0x614
		::System::Single _TimelineCurveLastVal_cameraClipDistance; // 0x618
		::UnityEngine::Vector3 _TimelineCurveFirstVal_cameraClipExtension; // 0x61C
		::UnityEngine::Vector3 _TimelineCurveLastVal_cameraClipExtension; // 0x628
		::System::Single _TimelineCurveFirstVal_cameraClipAlpha; // 0x634
		::System::Single _TimelineCurveLastVal_cameraClipAlpha; // 0x638
		::System::Single _TimelineCurveFirstVal_weatherConfigWeight; // 0x63C
		::System::Single _TimelineCurveLastVal_weatherConfigWeight; // 0x640
		::System::Boolean _TimelineCurveFirstVal_fxLightShaftMaskOn; // 0x644
		::System::Boolean _TimelineCurveLastVal_fxLightShaftMaskOn; // 0x645
		::System::Byte _padding79[0x2];
		::UnityEngine::Color _TimelineCurveFirstVal_fxScreenLightColor; // 0x648
		::UnityEngine::Color _TimelineCurveLastVal_fxScreenLightColor; // 0x658
		::System::Boolean _TimelineCurveFirstVal_fxScreenLightMaskOn; // 0x668
		::System::Boolean _TimelineCurveLastVal_fxScreenLightMaskOn; // 0x669
		::System::Byte _padding80[0x2];
		::System::Single _TimelineCurveFirstVal_sceneSpecialPPSEffectIntensity; // 0x66C
		::System::Single _TimelineCurveLastVal_sceneSpecialPPSEffectIntensity; // 0x670
		::System::Boolean _TimelineCurveFirstVal_sceneSpecialPPSOverrideWeatherGBufferSaturation; // 0x674
		::System::Boolean _TimelineCurveLastVal_sceneSpecialPPSOverrideWeatherGBufferSaturation; // 0x675
		::System::Byte _padding81[0x2];
		::System::Single _TimelineCurveFirstVal_sceneSpecialPPSGBufferSaturation; // 0x678
		::System::Single _TimelineCurveLastVal_sceneSpecialPPSGBufferSaturation; // 0x67C
		::System::Boolean _TimelineCurveFirstVal_sceneSpecialPPSUseSaturationLut; // 0x680
		::System::Boolean _TimelineCurveLastVal_sceneSpecialPPSUseSaturationLut; // 0x681
		::System::Byte _padding82[0x2];
		::UnityEngine::Vector4 _TimelineCurveFirstVal_sceneSpecialPPSSaturationRampGap; // 0x684
		::UnityEngine::Vector4 _TimelineCurveLastVal_sceneSpecialPPSSaturationRampGap; // 0x694
		::UnityEngine::Vector4 _TimelineCurveFirstVal_sceneSpecialPPSSaturationRampValue; // 0x6A4
		::UnityEngine::Vector4 _TimelineCurveLastVal_sceneSpecialPPSSaturationRampValue; // 0x6B4
		::UnityEngine::Vector4 _TimelineCurveFirstVal_sceneSpecialPPSSaturationRampGap2; // 0x6C4
		::UnityEngine::Vector4 _TimelineCurveLastVal_sceneSpecialPPSSaturationRampGap2; // 0x6D4
		::UnityEngine::Vector4 _TimelineCurveFirstVal_sceneSpecialPPSSaturationRampValue2; // 0x6E4
		::UnityEngine::Vector4 _TimelineCurveLastVal_sceneSpecialPPSSaturationRampValue2; // 0x6F4
		::UnityEngine::Vector4 _TimelineCurveFirstVal_sceneSpecialPPSSaturationRampGap3; // 0x704
		::UnityEngine::Vector4 _TimelineCurveLastVal_sceneSpecialPPSSaturationRampGap3; // 0x714
		::UnityEngine::Vector4 _TimelineCurveFirstVal_sceneSpecialPPSSaturationRampValue3; // 0x724
		::UnityEngine::Vector4 _TimelineCurveLastVal_sceneSpecialPPSSaturationRampValue3; // 0x734
		::System::Boolean _TimelineCurveFirstVal_applySaturationLutToUberPost; // 0x744
		::System::Boolean _TimelineCurveLastVal_applySaturationLutToUberPost; // 0x745
		::System::Byte _padding83[0x2];
		::UnityEngine::Color _TimelineCurveFirstVal_sceneSpecialPPSEmissionColor; // 0x748
		::UnityEngine::Color _TimelineCurveLastVal_sceneSpecialPPSEmissionColor; // 0x758
		::System::Boolean _TimelineCurveFirstVal_ForceUseMsaa; // 0x768
		::System::Boolean _TimelineCurveLastVal_ForceUseMsaa; // 0x769
		::System::Byte _padding84[0x2];
		::System::Single _TimelineCurveFirstVal_postExposure; // 0x76C
		::System::Single _TimelineCurveLastVal_postExposure; // 0x770
		::System::Single _TimelineCurveFirstVal_contrast; // 0x774
		::System::Single _TimelineCurveLastVal_contrast; // 0x778
		::System::Single _TimelineCurveFirstVal_saturation; // 0x77C
		::System::Single _TimelineCurveLastVal_saturation; // 0x780
		::System::Single _TimelineCurveFirstVal_gamma; // 0x784
		::System::Single _TimelineCurveLastVal_gamma; // 0x788
		::System::Boolean _TimelineCurveFirstVal_lutInvert; // 0x78C
		::System::Boolean _TimelineCurveLastVal_lutInvert; // 0x78D
		::System::Boolean _TimelineCurveFirstVal_lutToneColors; // 0x78E
		::System::Boolean _TimelineCurveLastVal_lutToneColors; // 0x78F
		::System::Single _TimelineCurveFirstVal_lutMiddlePoint; // 0x790
		::System::Single _TimelineCurveLastVal_lutMiddlePoint; // 0x794
		::System::Single _TimelineCurveFirstVal_lutSoftness; // 0x798
		::System::Single _TimelineCurveLastVal_lutSoftness; // 0x79C
		::System::Single _TimelineCurveFirstVal_desaturate; // 0x7A0
		::System::Single _TimelineCurveLastVal_desaturate; // 0x7A4
		::System::Boolean _TimelineCurveFirstVal_invert; // 0x7A8
		::System::Boolean _TimelineCurveLastVal_invert; // 0x7A9
		::System::Boolean _TimelineCurveFirstVal_toneColors; // 0x7AA
		::System::Boolean _TimelineCurveLastVal_toneColors; // 0x7AB
		::System::Single _TimelineCurveFirstVal_middlePoint; // 0x7AC
		::System::Single _TimelineCurveLastVal_middlePoint; // 0x7B0
		::System::Single _TimelineCurveFirstVal_softness; // 0x7B4
		::System::Single _TimelineCurveLastVal_softness; // 0x7B8
		::System::Boolean _TimelineCurveFirstVal_fxFogMaskPassOn; // 0x7BC
		::System::Boolean _TimelineCurveLastVal_fxFogMaskPassOn; // 0x7BD
		::System::Byte _padding85[0x2];
		::System::Single _TimelineCurveFirstVal_fxColorSaturation; // 0x7C0
		::System::Single _TimelineCurveLastVal_fxColorSaturation; // 0x7C4
		::System::Boolean _TimelineCurveFirstVal_justControlParticleLight; // 0x7C8
		::System::Boolean _TimelineCurveLastVal_justControlParticleLight; // 0x7C9
		::System::Byte _padding86[0x2];
		::System::Single _TimelineCurveFirstVal_localLightMultiplyIntensity; // 0x7CC
		::System::Single _TimelineCurveLastVal_localLightMultiplyIntensity; // 0x7D0
		::System::Single _TimelineCurveFirstVal_localLightThreadHold; // 0x7D4
		::System::Single _TimelineCurveLastVal_localLightThreadHold; // 0x7D8
		::System::Single _TimelineCurveFirstVal_indirectSpecularIntensity; // 0x7DC
		::System::Single _TimelineCurveLastVal_indirectSpecularIntensity; // 0x7E0
		::System::Boolean _TimelineCurveFirstVal_enableLightShaft; // 0x7E4
		::System::Boolean _TimelineCurveLastVal_enableLightShaft; // 0x7E5
		::System::Byte _padding87[0x2];
		::System::Single _TimelineCurveFirstVal_lightShaftThreshold; // 0x7E8
		::System::Single _TimelineCurveLastVal_lightShaftThreshold; // 0x7EC
		::System::Single _TimelineCurveFirstVal_lightShaftIntensity; // 0x7F0
		::System::Single _TimelineCurveLastVal_lightShaftIntensity; // 0x7F4
		::System::Boolean _TimelineCurveFirstVal_lightShaftColorClamp; // 0x7F8
		::System::Boolean _TimelineCurveLastVal_lightShaftColorClamp; // 0x7F9
		::System::Byte _padding88[0x2];
		::UnityEngine::Color _TimelineCurveFirstVal_lightShaftColor; // 0x7FC
		::UnityEngine::Color _TimelineCurveLastVal_lightShaftColor; // 0x80C
		::System::Single _TimelineCurveFirstVal_lightShaftLength; // 0x81C
		::System::Single _TimelineCurveLastVal_lightShaftLength; // 0x820
		::System::Single _TimelineCurveFirstVal_lightShaftFadeLength; // 0x824
		::System::Single _TimelineCurveLastVal_lightShaftFadeLength; // 0x828
		::System::Boolean _TimelineCurveFirstVal_lightShaftBlur; // 0x82C
		::System::Boolean _TimelineCurveLastVal_lightShaftBlur; // 0x82D
		::System::Boolean _TimelineCurveFirstVal_lightShaftUseCustomCenter; // 0x82E
		::System::Boolean _TimelineCurveLastVal_lightShaftUseCustomCenter; // 0x82F
		::UnityEngine::Vector2 _TimelineCurveFirstVal_lightShaftCustomCenter; // 0x830
		::UnityEngine::Vector2 _TimelineCurveLastVal_lightShaftCustomCenter; // 0x838
		::System::Boolean _TimelineCurveFirstVal_overrideWeatherGIConfig; // 0x840
		::System::Boolean _TimelineCurveLastVal_overrideWeatherGIConfig; // 0x841
		::System::Byte _padding89[0x2];
		::UnityEngine::Color _TimelineCurveFirstVal_skyColor; // 0x844
		::UnityEngine::Color _TimelineCurveLastVal_skyColor; // 0x854
		::UnityEngine::Color _TimelineCurveFirstVal_middleColor; // 0x864
		::UnityEngine::Color _TimelineCurveLastVal_middleColor; // 0x874
		::UnityEngine::Color _TimelineCurveFirstVal_groundColor; // 0x884
		::UnityEngine::Color _TimelineCurveLastVal_groundColor; // 0x894
		::System::Boolean _TimelineCurveFirstVal_useLutWithMask; // 0x8A4
		::System::Boolean _TimelineCurveLastVal_useLutWithMask; // 0x8A5
		::System::Byte _padding90[0x2];
		::System::Single _TimelineCurveFirstVal_lutWithMaskContribution; // 0x8A8
		::System::Single _TimelineCurveLastVal_lutWithMaskContribution; // 0x8AC
		::System::Boolean _TimelineCurveFirstVal_lightShaftIgnoreSceneDepthMask; // 0x8B0
		::System::Boolean _TimelineCurveLastVal_lightShaftIgnoreSceneDepthMask; // 0x8B1
		::System::Byte _padding91[0x2];
		::UnityEngine::Vector3 _TimelineCurveFirstVal_cameraClipFxExtraExtension; // 0x8B4
		::UnityEngine::Vector3 _TimelineCurveLastVal_cameraClipFxExtraExtension; // 0x8C0
		::System::Boolean _TimelineCurveFirstVal_enableLocalLightControl; // 0x8CC
		::System::Boolean _TimelineCurveLastVal_enableLocalLightControl; // 0x8CD
		::System::Byte _padding92[0x2];
		::System::Single _TimelineCurveFirstVal_localLightIntensityMultiplier; // 0x8D0
		::System::Single _TimelineCurveLastVal_localLightIntensityMultiplier; // 0x8D4
		::System::Single _TimelineCurveFirstVal_localFogIntensity; // 0x8D8
		::System::Single _TimelineCurveLastVal_localFogIntensity; // 0x8DC
		::System::Boolean _TimelineCurveFirstVal_blackCanvasKeepWeatherValid; // 0x8E0
		::System::Boolean _TimelineCurveLastVal_blackCanvasKeepWeatherValid; // 0x8E1
		::System::Byte _padding93[0x2];
		::System::Single _TimelineCurveFirstVal_toneColorOffset; // 0x8E4
		::System::Single _TimelineCurveLastVal_toneColorOffset; // 0x8E8
		::System::Single _TimelineCurveFirstVal_toneColorIntensity; // 0x8EC
		::System::Single _TimelineCurveLastVal_toneColorIntensity; // 0x8F0
		::UnityEngine::Vector4 _TimelineCurveFirstVal_clipPlaneForLut; // 0x8F4
		::UnityEngine::Vector4 _TimelineCurveLastVal_clipPlaneForLut; // 0x904
		::System::Single _TimelineCurveFirstVal_clipPlaneLutExposureMulti; // 0x914
		::System::Single _TimelineCurveLastVal_clipPlaneLutExposureMulti; // 0x918
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_enableCameraClip_FieldHandleType; // 0x91C
		::System::Boolean ESPP_enableCameraClip; // 0x920
		::System::Byte _padding94[0x3];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_cameraClipDistance_FieldHandleType; // 0x924
		::System::Boolean ESPP_cameraClipDistance_UseIt; // 0x928
		::System::Byte _padding95[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_cameraClipDistance; // 0x930
		::System::Boolean ESPP_cameraClipDistance_EnableFade; // 0x938
		::System::Boolean ESPP_cameraClipDistance_EnableOverrideDefaultValue; // 0x939
		::System::Byte _padding96[0x2];
		::System::Single ESPP_cameraClipDistance_OverrideDefaultValue; // 0x93C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_cameraClipExtension_FieldHandleType; // 0x940
		::System::Boolean ESPP_cameraClipExtension_UseIt; // 0x944
		::System::Byte _padding97[0x3];
		::MoleMole::EffectSimulate::Vector3KeyframeCurve* ESPP_cameraClipExtension; // 0x948
		::System::Boolean ESPP_cameraClipExtension_EnableFade; // 0x950
		::System::Boolean ESPP_cameraClipExtension_EnableOverrideDefaultValue; // 0x951
		::System::Byte _padding98[0x2];
		::UnityEngine::Vector3 ESPP_cameraClipExtension_OverrideDefaultValue; // 0x954
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_cameraClipAlpha_FieldHandleType; // 0x960
		::System::Boolean ESPP_cameraClipAlpha_UseIt; // 0x964
		::System::Byte _padding99[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_cameraClipAlpha; // 0x968
		::System::Boolean ESPP_cameraClipAlpha_EnableFade; // 0x970
		::System::Boolean ESPP_cameraClipAlpha_EnableOverrideDefaultValue; // 0x971
		::System::Byte _padding100[0x2];
		::System::Single ESPP_cameraClipAlpha_OverrideDefaultValue; // 0x974
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_weatherConfig_FieldHandleType; // 0x978
		::System::Byte _padding101[0x4];
		::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* ESPP_weatherConfig; // 0x980
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_weatherConfigWeight_FieldHandleType; // 0x988
		::System::Boolean ESPP_weatherConfigWeight_UseIt; // 0x98C
		::System::Byte _padding102[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_weatherConfigWeight; // 0x990
		::System::Boolean ESPP_weatherConfigWeight_EnableFade; // 0x998
		::System::Boolean ESPP_weatherConfigWeight_EnableOverrideDefaultValue; // 0x999
		::System::Byte _padding103[0x2];
		::System::Single ESPP_weatherConfigWeight_OverrideDefaultValue; // 0x99C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxLightShaftMaskOn_FieldHandleType; // 0x9A0
		::System::Boolean ESPP_fxLightShaftMaskOn_UseIt; // 0x9A4
		::System::Byte _padding104[0x3];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_fxLightShaftMaskOn; // 0x9A8
		::System::Boolean ESPP_fxLightShaftMaskOn_EnableFade; // 0x9B0
		::System::Boolean ESPP_fxLightShaftMaskOn_EnableOverrideDefaultValue; // 0x9B1
		::System::Boolean ESPP_fxLightShaftMaskOn_OverrideDefaultValue; // 0x9B2
		::System::Byte _padding105[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxFxScreenLightMode_FieldHandleType; // 0x9B4
		::UnityEngine::Rendering::Universal::FXColorCorrection_FxScreenLightMode ESPP_fxFxScreenLightMode; // 0x9B8
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxScreenLightColor_FieldHandleType; // 0x9BC
		::System::Boolean ESPP_fxScreenLightColor_UseIt; // 0x9C0
		::System::Byte _padding106[0x7];
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_fxScreenLightColor; // 0x9C8
		::System::Boolean ESPP_fxScreenLightColor_EnableFade; // 0x9D0
		::System::Boolean ESPP_fxScreenLightColor_EnableOverrideDefaultValue; // 0x9D1
		::System::Byte _padding107[0x2];
		::UnityEngine::Color ESPP_fxScreenLightColor_OverrideDefaultValue; // 0x9D4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxScreenLightMaskOn_FieldHandleType; // 0x9E4
		::System::Boolean ESPP_fxScreenLightMaskOn_UseIt; // 0x9E8
		::System::Byte _padding108[0x7];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_fxScreenLightMaskOn; // 0x9F0
		::System::Boolean ESPP_fxScreenLightMaskOn_EnableFade; // 0x9F8
		::System::Boolean ESPP_fxScreenLightMaskOn_EnableOverrideDefaultValue; // 0x9F9
		::System::Boolean ESPP_fxScreenLightMaskOn_OverrideDefaultValue; // 0x9FA
		::System::Byte _padding109[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSEffectIntensity_FieldHandleType; // 0x9FC
		::System::Boolean ESPP_sceneSpecialPPSEffectIntensity_UseIt; // 0xA00
		::System::Byte _padding110[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_sceneSpecialPPSEffectIntensity; // 0xA08
		::System::Boolean ESPP_sceneSpecialPPSEffectIntensity_EnableFade; // 0xA10
		::System::Boolean ESPP_sceneSpecialPPSEffectIntensity_EnableOverrideDefaultValue; // 0xA11
		::System::Byte _padding111[0x2];
		::System::Single ESPP_sceneSpecialPPSEffectIntensity_OverrideDefaultValue; // 0xA14
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSOverrideWeatherGBufferSaturation_FieldHandleType; // 0xA18
		::System::Boolean ESPP_sceneSpecialPPSOverrideWeatherGBufferSaturation_UseIt; // 0xA1C
		::System::Byte _padding112[0x3];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_sceneSpecialPPSOverrideWeatherGBufferSaturation; // 0xA20
		::System::Boolean ESPP_sceneSpecialPPSOverrideWeatherGBufferSaturation_EnableFade; // 0xA28
		::System::Boolean ESPP_sceneSpecialPPSOverrideWeatherGBufferSaturation_EnableOverrideDefaultValue; // 0xA29
		::System::Boolean ESPP_sceneSpecialPPSOverrideWeatherGBufferSaturation_OverrideDefaultValue; // 0xA2A
		::System::Byte _padding113[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSGBufferSaturation_FieldHandleType; // 0xA2C
		::System::Boolean ESPP_sceneSpecialPPSGBufferSaturation_UseIt; // 0xA30
		::System::Byte _padding114[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_sceneSpecialPPSGBufferSaturation; // 0xA38
		::System::Boolean ESPP_sceneSpecialPPSGBufferSaturation_EnableFade; // 0xA40
		::System::Boolean ESPP_sceneSpecialPPSGBufferSaturation_EnableOverrideDefaultValue; // 0xA41
		::System::Byte _padding115[0x2];
		::System::Single ESPP_sceneSpecialPPSGBufferSaturation_OverrideDefaultValue; // 0xA44
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSUseSaturationLut_FieldHandleType; // 0xA48
		::System::Boolean ESPP_sceneSpecialPPSUseSaturationLut_UseIt; // 0xA4C
		::System::Byte _padding116[0x3];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_sceneSpecialPPSUseSaturationLut; // 0xA50
		::System::Boolean ESPP_sceneSpecialPPSUseSaturationLut_EnableFade; // 0xA58
		::System::Boolean ESPP_sceneSpecialPPSUseSaturationLut_EnableOverrideDefaultValue; // 0xA59
		::System::Boolean ESPP_sceneSpecialPPSUseSaturationLut_OverrideDefaultValue; // 0xA5A
		::System::Byte _padding117[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSSaturationLut_FieldHandleType; // 0xA5C
		::UnityEngine::Texture* ESPP_sceneSpecialPPSSaturationLut; // 0xA60
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSSaturationRampGap_FieldHandleType; // 0xA68
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampGap_UseIt; // 0xA6C
		::System::Byte _padding118[0x3];
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_sceneSpecialPPSSaturationRampGap; // 0xA70
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampGap_EnableFade; // 0xA78
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampGap_EnableOverrideDefaultValue; // 0xA79
		::System::Byte _padding119[0x2];
		::UnityEngine::Vector4 ESPP_sceneSpecialPPSSaturationRampGap_OverrideDefaultValue; // 0xA7C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSSaturationRampValue_FieldHandleType; // 0xA8C
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampValue_UseIt; // 0xA90
		::System::Byte _padding120[0x7];
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_sceneSpecialPPSSaturationRampValue; // 0xA98
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampValue_EnableFade; // 0xAA0
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampValue_EnableOverrideDefaultValue; // 0xAA1
		::System::Byte _padding121[0x2];
		::UnityEngine::Vector4 ESPP_sceneSpecialPPSSaturationRampValue_OverrideDefaultValue; // 0xAA4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSSaturationRampGap2_FieldHandleType; // 0xAB4
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampGap2_UseIt; // 0xAB8
		::System::Byte _padding122[0x7];
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_sceneSpecialPPSSaturationRampGap2; // 0xAC0
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampGap2_EnableFade; // 0xAC8
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampGap2_EnableOverrideDefaultValue; // 0xAC9
		::System::Byte _padding123[0x2];
		::UnityEngine::Vector4 ESPP_sceneSpecialPPSSaturationRampGap2_OverrideDefaultValue; // 0xACC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSSaturationRampValue2_FieldHandleType; // 0xADC
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampValue2_UseIt; // 0xAE0
		::System::Byte _padding124[0x7];
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_sceneSpecialPPSSaturationRampValue2; // 0xAE8
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampValue2_EnableFade; // 0xAF0
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampValue2_EnableOverrideDefaultValue; // 0xAF1
		::System::Byte _padding125[0x2];
		::UnityEngine::Vector4 ESPP_sceneSpecialPPSSaturationRampValue2_OverrideDefaultValue; // 0xAF4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSSaturationRampGap3_FieldHandleType; // 0xB04
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampGap3_UseIt; // 0xB08
		::System::Byte _padding126[0x7];
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_sceneSpecialPPSSaturationRampGap3; // 0xB10
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampGap3_EnableFade; // 0xB18
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampGap3_EnableOverrideDefaultValue; // 0xB19
		::System::Byte _padding127[0x2];
		::UnityEngine::Vector4 ESPP_sceneSpecialPPSSaturationRampGap3_OverrideDefaultValue; // 0xB1C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSSaturationRampValue3_FieldHandleType; // 0xB2C
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampValue3_UseIt; // 0xB30
		::System::Byte _padding128[0x7];
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_sceneSpecialPPSSaturationRampValue3; // 0xB38
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampValue3_EnableFade; // 0xB40
		::System::Boolean ESPP_sceneSpecialPPSSaturationRampValue3_EnableOverrideDefaultValue; // 0xB41
		::System::Byte _padding129[0x2];
		::UnityEngine::Vector4 ESPP_sceneSpecialPPSSaturationRampValue3_OverrideDefaultValue; // 0xB44
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_applySaturationLutToUberPost_FieldHandleType; // 0xB54
		::System::Boolean ESPP_applySaturationLutToUberPost_UseIt; // 0xB58
		::System::Byte _padding130[0x7];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_applySaturationLutToUberPost; // 0xB60
		::System::Boolean ESPP_applySaturationLutToUberPost_EnableFade; // 0xB68
		::System::Boolean ESPP_applySaturationLutToUberPost_EnableOverrideDefaultValue; // 0xB69
		::System::Boolean ESPP_applySaturationLutToUberPost_OverrideDefaultValue; // 0xB6A
		::System::Byte _padding131[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSIgnoreRidus_FieldHandleType; // 0xB6C
		::System::Single ESPP_sceneSpecialPPSIgnoreRidus; // 0xB70
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSRadiusAlphaPow_FieldHandleType; // 0xB74
		::System::Single ESPP_sceneSpecialPPSRadiusAlphaPow; // 0xB78
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialPPSEmissionColor_FieldHandleType; // 0xB7C
		::System::Boolean ESPP_sceneSpecialPPSEmissionColor_UseIt; // 0xB80
		::System::Byte _padding132[0x7];
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_sceneSpecialPPSEmissionColor; // 0xB88
		::System::Boolean ESPP_sceneSpecialPPSEmissionColor_EnableFade; // 0xB90
		::System::Boolean ESPP_sceneSpecialPPSEmissionColor_EnableOverrideDefaultValue; // 0xB91
		::System::Byte _padding133[0x2];
		::UnityEngine::Color ESPP_sceneSpecialPPSEmissionColor_OverrideDefaultValue; // 0xB94
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneSpecialSkySaturation_FieldHandleType; // 0xBA4
		::System::Single ESPP_sceneSpecialSkySaturation; // 0xBA8
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_ForceUseMsaa_FieldHandleType; // 0xBAC
		::System::Boolean ESPP_ForceUseMsaa_UseIt; // 0xBB0
		::System::Byte _padding134[0x7];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_ForceUseMsaa; // 0xBB8
		::System::Boolean ESPP_ForceUseMsaa_EnableFade; // 0xBC0
		::System::Boolean ESPP_ForceUseMsaa_EnableOverrideDefaultValue; // 0xBC1
		::System::Boolean ESPP_ForceUseMsaa_OverrideDefaultValue; // 0xBC2
		::System::Byte _padding135[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_postExposure_FieldHandleType; // 0xBC4
		::System::Boolean ESPP_postExposure_UseIt; // 0xBC8
		::System::Byte _padding136[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_postExposure; // 0xBD0
		::System::Boolean ESPP_postExposure_EnableFade; // 0xBD8
		::System::Boolean ESPP_postExposure_EnableOverrideDefaultValue; // 0xBD9
		::System::Byte _padding137[0x2];
		::System::Single ESPP_postExposure_OverrideDefaultValue; // 0xBDC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_contrast_FieldHandleType; // 0xBE0
		::System::Boolean ESPP_contrast_UseIt; // 0xBE4
		::System::Byte _padding138[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_contrast; // 0xBE8
		::System::Boolean ESPP_contrast_EnableFade; // 0xBF0
		::System::Boolean ESPP_contrast_EnableOverrideDefaultValue; // 0xBF1
		::System::Byte _padding139[0x2];
		::System::Single ESPP_contrast_OverrideDefaultValue; // 0xBF4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_saturation_FieldHandleType; // 0xBF8
		::System::Boolean ESPP_saturation_UseIt; // 0xBFC
		::System::Byte _padding140[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_saturation; // 0xC00
		::System::Boolean ESPP_saturation_EnableFade; // 0xC08
		::System::Boolean ESPP_saturation_EnableOverrideDefaultValue; // 0xC09
		::System::Byte _padding141[0x2];
		::System::Single ESPP_saturation_OverrideDefaultValue; // 0xC0C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_gamma_FieldHandleType; // 0xC10
		::System::Boolean ESPP_gamma_UseIt; // 0xC14
		::System::Byte _padding142[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_gamma; // 0xC18
		::System::Boolean ESPP_gamma_EnableFade; // 0xC20
		::System::Boolean ESPP_gamma_EnableOverrideDefaultValue; // 0xC21
		::System::Byte _padding143[0x2];
		::System::Single ESPP_gamma_OverrideDefaultValue; // 0xC24
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lutInvert_FieldHandleType; // 0xC28
		::System::Boolean ESPP_lutInvert_UseIt; // 0xC2C
		::System::Byte _padding144[0x3];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_lutInvert; // 0xC30
		::System::Boolean ESPP_lutInvert_EnableFade; // 0xC38
		::System::Boolean ESPP_lutInvert_EnableOverrideDefaultValue; // 0xC39
		::System::Boolean ESPP_lutInvert_OverrideDefaultValue; // 0xC3A
		::System::Byte _padding145[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lutToneColors_FieldHandleType; // 0xC3C
		::System::Boolean ESPP_lutToneColors_UseIt; // 0xC40
		::System::Byte _padding146[0x7];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_lutToneColors; // 0xC48
		::System::Boolean ESPP_lutToneColors_EnableFade; // 0xC50
		::System::Boolean ESPP_lutToneColors_EnableOverrideDefaultValue; // 0xC51
		::System::Boolean ESPP_lutToneColors_OverrideDefaultValue; // 0xC52
		::System::Byte _padding147[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lutToneA_FieldHandleType; // 0xC54
		::UnityEngine::Color ESPP_lutToneA; // 0xC58
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lutToneB_FieldHandleType; // 0xC68
		::UnityEngine::Color ESPP_lutToneB; // 0xC6C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lutMiddlePoint_FieldHandleType; // 0xC7C
		::System::Boolean ESPP_lutMiddlePoint_UseIt; // 0xC80
		::System::Byte _padding148[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_lutMiddlePoint; // 0xC88
		::System::Boolean ESPP_lutMiddlePoint_EnableFade; // 0xC90
		::System::Boolean ESPP_lutMiddlePoint_EnableOverrideDefaultValue; // 0xC91
		::System::Byte _padding149[0x2];
		::System::Single ESPP_lutMiddlePoint_OverrideDefaultValue; // 0xC94
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lutSoftness_FieldHandleType; // 0xC98
		::System::Boolean ESPP_lutSoftness_UseIt; // 0xC9C
		::System::Byte _padding150[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_lutSoftness; // 0xCA0
		::System::Boolean ESPP_lutSoftness_EnableFade; // 0xCA8
		::System::Boolean ESPP_lutSoftness_EnableOverrideDefaultValue; // 0xCA9
		::System::Byte _padding151[0x2];
		::System::Single ESPP_lutSoftness_OverrideDefaultValue; // 0xCAC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_desaturate_FieldHandleType; // 0xCB0
		::System::Boolean ESPP_desaturate_UseIt; // 0xCB4
		::System::Byte _padding152[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_desaturate; // 0xCB8
		::System::Boolean ESPP_desaturate_EnableFade; // 0xCC0
		::System::Boolean ESPP_desaturate_EnableOverrideDefaultValue; // 0xCC1
		::System::Byte _padding153[0x2];
		::System::Single ESPP_desaturate_OverrideDefaultValue; // 0xCC4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_invert_FieldHandleType; // 0xCC8
		::System::Boolean ESPP_invert_UseIt; // 0xCCC
		::System::Byte _padding154[0x3];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_invert; // 0xCD0
		::System::Boolean ESPP_invert_EnableFade; // 0xCD8
		::System::Boolean ESPP_invert_EnableOverrideDefaultValue; // 0xCD9
		::System::Boolean ESPP_invert_OverrideDefaultValue; // 0xCDA
		::System::Byte _padding155[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_toneColors_FieldHandleType; // 0xCDC
		::System::Boolean ESPP_toneColors_UseIt; // 0xCE0
		::System::Byte _padding156[0x7];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_toneColors; // 0xCE8
		::System::Boolean ESPP_toneColors_EnableFade; // 0xCF0
		::System::Boolean ESPP_toneColors_EnableOverrideDefaultValue; // 0xCF1
		::System::Boolean ESPP_toneColors_OverrideDefaultValue; // 0xCF2
		::System::Byte _padding157[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_toneA_FieldHandleType; // 0xCF4
		::UnityEngine::Color ESPP_toneA; // 0xCF8
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_toneB_FieldHandleType; // 0xD08
		::UnityEngine::Color ESPP_toneB; // 0xD0C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_middlePoint_FieldHandleType; // 0xD1C
		::System::Boolean ESPP_middlePoint_UseIt; // 0xD20
		::System::Byte _padding158[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_middlePoint; // 0xD28
		::System::Boolean ESPP_middlePoint_EnableFade; // 0xD30
		::System::Boolean ESPP_middlePoint_EnableOverrideDefaultValue; // 0xD31
		::System::Byte _padding159[0x2];
		::System::Single ESPP_middlePoint_OverrideDefaultValue; // 0xD34
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_softness_FieldHandleType; // 0xD38
		::System::Boolean ESPP_softness_UseIt; // 0xD3C
		::System::Byte _padding160[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_softness; // 0xD40
		::System::Boolean ESPP_softness_EnableFade; // 0xD48
		::System::Boolean ESPP_softness_EnableOverrideDefaultValue; // 0xD49
		::System::Byte _padding161[0x2];
		::System::Single ESPP_softness_OverrideDefaultValue; // 0xD4C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxFogMaskPassOn_FieldHandleType; // 0xD50
		::System::Boolean ESPP_fxFogMaskPassOn_UseIt; // 0xD54
		::System::Byte _padding162[0x3];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_fxFogMaskPassOn; // 0xD58
		::System::Boolean ESPP_fxFogMaskPassOn_EnableFade; // 0xD60
		::System::Boolean ESPP_fxFogMaskPassOn_EnableOverrideDefaultValue; // 0xD61
		::System::Boolean ESPP_fxFogMaskPassOn_OverrideDefaultValue; // 0xD62
		::System::Byte _padding163[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxColorSaturation_FieldHandleType; // 0xD64
		::System::Boolean ESPP_fxColorSaturation_UseIt; // 0xD68
		::System::Byte _padding164[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_fxColorSaturation; // 0xD70
		::System::Boolean ESPP_fxColorSaturation_EnableFade; // 0xD78
		::System::Boolean ESPP_fxColorSaturation_EnableOverrideDefaultValue; // 0xD79
		::System::Byte _padding165[0x2];
		::System::Single ESPP_fxColorSaturation_OverrideDefaultValue; // 0xD7C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_justControlParticleLight_FieldHandleType; // 0xD80
		::System::Boolean ESPP_justControlParticleLight_UseIt; // 0xD84
		::System::Byte _padding166[0x3];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_justControlParticleLight; // 0xD88
		::System::Boolean ESPP_justControlParticleLight_EnableFade; // 0xD90
		::System::Boolean ESPP_justControlParticleLight_EnableOverrideDefaultValue; // 0xD91
		::System::Boolean ESPP_justControlParticleLight_OverrideDefaultValue; // 0xD92
		::System::Byte _padding167[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_localLightMultiplyIntensity_FieldHandleType; // 0xD94
		::System::Boolean ESPP_localLightMultiplyIntensity_UseIt; // 0xD98
		::System::Byte _padding168[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_localLightMultiplyIntensity; // 0xDA0
		::System::Boolean ESPP_localLightMultiplyIntensity_EnableFade; // 0xDA8
		::System::Boolean ESPP_localLightMultiplyIntensity_EnableOverrideDefaultValue; // 0xDA9
		::System::Byte _padding169[0x2];
		::System::Single ESPP_localLightMultiplyIntensity_OverrideDefaultValue; // 0xDAC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_localLightThreadHold_FieldHandleType; // 0xDB0
		::System::Boolean ESPP_localLightThreadHold_UseIt; // 0xDB4
		::System::Byte _padding170[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_localLightThreadHold; // 0xDB8
		::System::Boolean ESPP_localLightThreadHold_EnableFade; // 0xDC0
		::System::Boolean ESPP_localLightThreadHold_EnableOverrideDefaultValue; // 0xDC1
		::System::Byte _padding171[0x2];
		::System::Single ESPP_localLightThreadHold_OverrideDefaultValue; // 0xDC4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_indirectSpecularIntensity_FieldHandleType; // 0xDC8
		::System::Boolean ESPP_indirectSpecularIntensity_UseIt; // 0xDCC
		::System::Byte _padding172[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_indirectSpecularIntensity; // 0xDD0
		::System::Boolean ESPP_indirectSpecularIntensity_EnableFade; // 0xDD8
		::System::Boolean ESPP_indirectSpecularIntensity_EnableOverrideDefaultValue; // 0xDD9
		::System::Byte _padding173[0x2];
		::System::Single ESPP_indirectSpecularIntensity_OverrideDefaultValue; // 0xDDC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_enableLightShaft_FieldHandleType; // 0xDE0
		::System::Boolean ESPP_enableLightShaft_UseIt; // 0xDE4
		::System::Byte _padding174[0x3];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_enableLightShaft; // 0xDE8
		::System::Boolean ESPP_enableLightShaft_EnableFade; // 0xDF0
		::System::Boolean ESPP_enableLightShaft_EnableOverrideDefaultValue; // 0xDF1
		::System::Boolean ESPP_enableLightShaft_OverrideDefaultValue; // 0xDF2
		::System::Byte _padding175[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lightShaftThreshold_FieldHandleType; // 0xDF4
		::System::Boolean ESPP_lightShaftThreshold_UseIt; // 0xDF8
		::System::Byte _padding176[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_lightShaftThreshold; // 0xE00
		::System::Boolean ESPP_lightShaftThreshold_EnableFade; // 0xE08
		::System::Boolean ESPP_lightShaftThreshold_EnableOverrideDefaultValue; // 0xE09
		::System::Byte _padding177[0x2];
		::System::Single ESPP_lightShaftThreshold_OverrideDefaultValue; // 0xE0C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lightShaftIntensity_FieldHandleType; // 0xE10
		::System::Boolean ESPP_lightShaftIntensity_UseIt; // 0xE14
		::System::Byte _padding178[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_lightShaftIntensity; // 0xE18
		::System::Boolean ESPP_lightShaftIntensity_EnableFade; // 0xE20
		::System::Boolean ESPP_lightShaftIntensity_EnableOverrideDefaultValue; // 0xE21
		::System::Byte _padding179[0x2];
		::System::Single ESPP_lightShaftIntensity_OverrideDefaultValue; // 0xE24
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lightShaftColorClamp_FieldHandleType; // 0xE28
		::System::Boolean ESPP_lightShaftColorClamp_UseIt; // 0xE2C
		::System::Byte _padding180[0x3];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_lightShaftColorClamp; // 0xE30
		::System::Boolean ESPP_lightShaftColorClamp_EnableFade; // 0xE38
		::System::Boolean ESPP_lightShaftColorClamp_EnableOverrideDefaultValue; // 0xE39
		::System::Boolean ESPP_lightShaftColorClamp_OverrideDefaultValue; // 0xE3A
		::System::Byte _padding181[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lightShaftColor_FieldHandleType; // 0xE3C
		::System::Boolean ESPP_lightShaftColor_UseIt; // 0xE40
		::System::Byte _padding182[0x7];
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_lightShaftColor; // 0xE48
		::System::Boolean ESPP_lightShaftColor_EnableFade; // 0xE50
		::System::Boolean ESPP_lightShaftColor_EnableOverrideDefaultValue; // 0xE51
		::System::Byte _padding183[0x2];
		::UnityEngine::Color ESPP_lightShaftColor_OverrideDefaultValue; // 0xE54
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lightShaftLength_FieldHandleType; // 0xE64
		::System::Boolean ESPP_lightShaftLength_UseIt; // 0xE68
		::System::Byte _padding184[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_lightShaftLength; // 0xE70
		::System::Boolean ESPP_lightShaftLength_EnableFade; // 0xE78
		::System::Boolean ESPP_lightShaftLength_EnableOverrideDefaultValue; // 0xE79
		::System::Byte _padding185[0x2];
		::System::Single ESPP_lightShaftLength_OverrideDefaultValue; // 0xE7C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lightShaftFadeLength_FieldHandleType; // 0xE80
		::System::Boolean ESPP_lightShaftFadeLength_UseIt; // 0xE84
		::System::Byte _padding186[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_lightShaftFadeLength; // 0xE88
		::System::Boolean ESPP_lightShaftFadeLength_EnableFade; // 0xE90
		::System::Boolean ESPP_lightShaftFadeLength_EnableOverrideDefaultValue; // 0xE91
		::System::Byte _padding187[0x2];
		::System::Single ESPP_lightShaftFadeLength_OverrideDefaultValue; // 0xE94
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lightShaftBlur_FieldHandleType; // 0xE98
		::System::Boolean ESPP_lightShaftBlur_UseIt; // 0xE9C
		::System::Byte _padding188[0x3];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_lightShaftBlur; // 0xEA0
		::System::Boolean ESPP_lightShaftBlur_EnableFade; // 0xEA8
		::System::Boolean ESPP_lightShaftBlur_EnableOverrideDefaultValue; // 0xEA9
		::System::Boolean ESPP_lightShaftBlur_OverrideDefaultValue; // 0xEAA
		::System::Byte _padding189[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lightShaftUseCustomCenter_FieldHandleType; // 0xEAC
		::System::Boolean ESPP_lightShaftUseCustomCenter_UseIt; // 0xEB0
		::System::Byte _padding190[0x7];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_lightShaftUseCustomCenter; // 0xEB8
		::System::Boolean ESPP_lightShaftUseCustomCenter_EnableFade; // 0xEC0
		::System::Boolean ESPP_lightShaftUseCustomCenter_EnableOverrideDefaultValue; // 0xEC1
		::System::Boolean ESPP_lightShaftUseCustomCenter_OverrideDefaultValue; // 0xEC2
		::System::Byte _padding191[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lightShaftCustomCenter_FieldHandleType; // 0xEC4
		::System::Boolean ESPP_lightShaftCustomCenter_UseIt; // 0xEC8
		::System::Byte _padding192[0x7];
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_lightShaftCustomCenter; // 0xED0
		::System::Boolean ESPP_lightShaftCustomCenter_EnableFade; // 0xED8
		::System::Boolean ESPP_lightShaftCustomCenter_EnableOverrideDefaultValue; // 0xED9
		::System::Byte _padding193[0x2];
		::UnityEngine::Vector2 ESPP_lightShaftCustomCenter_OverrideDefaultValue; // 0xEDC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_overrideWeatherGIConfig_FieldHandleType; // 0xEE4
		::System::Boolean ESPP_overrideWeatherGIConfig_UseIt; // 0xEE8
		::System::Byte _padding194[0x7];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_overrideWeatherGIConfig; // 0xEF0
		::System::Boolean ESPP_overrideWeatherGIConfig_EnableFade; // 0xEF8
		::System::Boolean ESPP_overrideWeatherGIConfig_EnableOverrideDefaultValue; // 0xEF9
		::System::Boolean ESPP_overrideWeatherGIConfig_OverrideDefaultValue; // 0xEFA
		::System::Byte _padding195[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_skyColor_FieldHandleType; // 0xEFC
		::System::Boolean ESPP_skyColor_UseIt; // 0xF00
		::System::Byte _padding196[0x7];
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_skyColor; // 0xF08
		::System::Boolean ESPP_skyColor_EnableFade; // 0xF10
		::System::Boolean ESPP_skyColor_EnableOverrideDefaultValue; // 0xF11
		::System::Byte _padding197[0x2];
		::UnityEngine::Color ESPP_skyColor_OverrideDefaultValue; // 0xF14
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_middleColor_FieldHandleType; // 0xF24
		::System::Boolean ESPP_middleColor_UseIt; // 0xF28
		::System::Byte _padding198[0x7];
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_middleColor; // 0xF30
		::System::Boolean ESPP_middleColor_EnableFade; // 0xF38
		::System::Boolean ESPP_middleColor_EnableOverrideDefaultValue; // 0xF39
		::System::Byte _padding199[0x2];
		::UnityEngine::Color ESPP_middleColor_OverrideDefaultValue; // 0xF3C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_groundColor_FieldHandleType; // 0xF4C
		::System::Boolean ESPP_groundColor_UseIt; // 0xF50
		::System::Byte _padding200[0x7];
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_groundColor; // 0xF58
		::System::Boolean ESPP_groundColor_EnableFade; // 0xF60
		::System::Boolean ESPP_groundColor_EnableOverrideDefaultValue; // 0xF61
		::System::Byte _padding201[0x2];
		::UnityEngine::Color ESPP_groundColor_OverrideDefaultValue; // 0xF64
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_useLutWithMask_FieldHandleType; // 0xF74
		::System::Boolean ESPP_useLutWithMask_UseIt; // 0xF78
		::System::Byte _padding202[0x7];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_useLutWithMask; // 0xF80
		::System::Boolean ESPP_useLutWithMask_EnableFade; // 0xF88
		::System::Boolean ESPP_useLutWithMask_EnableOverrideDefaultValue; // 0xF89
		::System::Boolean ESPP_useLutWithMask_OverrideDefaultValue; // 0xF8A
		::System::Byte _padding203[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lutWithMaskTex_FieldHandleType; // 0xF8C
		::UnityEngine::Texture* ESPP_lutWithMaskTex; // 0xF90
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lutWithMaskContribution_FieldHandleType; // 0xF98
		::System::Boolean ESPP_lutWithMaskContribution_UseIt; // 0xF9C
		::System::Byte _padding204[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_lutWithMaskContribution; // 0xFA0
		::System::Boolean ESPP_lutWithMaskContribution_EnableFade; // 0xFA8
		::System::Boolean ESPP_lutWithMaskContribution_EnableOverrideDefaultValue; // 0xFA9
		::System::Byte _padding205[0x2];
		::System::Single ESPP_lutWithMaskContribution_OverrideDefaultValue; // 0xFAC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lightShaftIgnoreSceneDepthMask_FieldHandleType; // 0xFB0
		::System::Boolean ESPP_lightShaftIgnoreSceneDepthMask_UseIt; // 0xFB4
		::System::Byte _padding206[0x3];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_lightShaftIgnoreSceneDepthMask; // 0xFB8
		::System::Boolean ESPP_lightShaftIgnoreSceneDepthMask_EnableFade; // 0xFC0
		::System::Boolean ESPP_lightShaftIgnoreSceneDepthMask_EnableOverrideDefaultValue; // 0xFC1
		::System::Boolean ESPP_lightShaftIgnoreSceneDepthMask_OverrideDefaultValue; // 0xFC2
		::System::Byte _padding207[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_cameraClipFxExtraExtension_FieldHandleType; // 0xFC4
		::System::Boolean ESPP_cameraClipFxExtraExtension_UseIt; // 0xFC8
		::System::Byte _padding208[0x7];
		::MoleMole::EffectSimulate::Vector3KeyframeCurve* ESPP_cameraClipFxExtraExtension; // 0xFD0
		::System::Boolean ESPP_cameraClipFxExtraExtension_EnableFade; // 0xFD8
		::System::Boolean ESPP_cameraClipFxExtraExtension_EnableOverrideDefaultValue; // 0xFD9
		::System::Byte _padding209[0x2];
		::UnityEngine::Vector3 ESPP_cameraClipFxExtraExtension_OverrideDefaultValue; // 0xFDC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_enableLocalLightControl_FieldHandleType; // 0xFE8
		::System::Boolean ESPP_enableLocalLightControl_UseIt; // 0xFEC
		::System::Byte _padding210[0x3];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_enableLocalLightControl; // 0xFF0
		::System::Boolean ESPP_enableLocalLightControl_EnableFade; // 0xFF8
		::System::Boolean ESPP_enableLocalLightControl_EnableOverrideDefaultValue; // 0xFF9
		::System::Boolean ESPP_enableLocalLightControl_OverrideDefaultValue; // 0xFFA
		::System::Byte _padding211[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_localLightIntensityMultiplier_FieldHandleType; // 0xFFC
		::System::Boolean ESPP_localLightIntensityMultiplier_UseIt; // 0x1000
		::System::Byte _padding212[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_localLightIntensityMultiplier; // 0x1008
		::System::Boolean ESPP_localLightIntensityMultiplier_EnableFade; // 0x1010
		::System::Boolean ESPP_localLightIntensityMultiplier_EnableOverrideDefaultValue; // 0x1011
		::System::Byte _padding213[0x2];
		::System::Single ESPP_localLightIntensityMultiplier_OverrideDefaultValue; // 0x1014
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_localFogIntensity_FieldHandleType; // 0x1018
		::System::Boolean ESPP_localFogIntensity_UseIt; // 0x101C
		::System::Byte _padding214[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_localFogIntensity; // 0x1020
		::System::Boolean ESPP_localFogIntensity_EnableFade; // 0x1028
		::System::Boolean ESPP_localFogIntensity_EnableOverrideDefaultValue; // 0x1029
		::System::Byte _padding215[0x2];
		::System::Single ESPP_localFogIntensity_OverrideDefaultValue; // 0x102C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_saturationLutMaskMode_FieldHandleType; // 0x1030
		::UnityEngine::Rendering::Universal::FXColorCorrection_SaturationLutMaskMode ESPP_saturationLutMaskMode; // 0x1034
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_blackCanvasKeepWeatherValid_FieldHandleType; // 0x1038
		::System::Boolean ESPP_blackCanvasKeepWeatherValid_UseIt; // 0x103C
		::System::Byte _padding216[0x3];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_blackCanvasKeepWeatherValid; // 0x1040
		::System::Boolean ESPP_blackCanvasKeepWeatherValid_EnableFade; // 0x1048
		::System::Boolean ESPP_blackCanvasKeepWeatherValid_EnableOverrideDefaultValue; // 0x1049
		::System::Boolean ESPP_blackCanvasKeepWeatherValid_OverrideDefaultValue; // 0x104A
		::System::Byte _padding217[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_toneColorOffset_FieldHandleType; // 0x104C
		::System::Boolean ESPP_toneColorOffset_UseIt; // 0x1050
		::System::Byte _padding218[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_toneColorOffset; // 0x1058
		::System::Boolean ESPP_toneColorOffset_EnableFade; // 0x1060
		::System::Boolean ESPP_toneColorOffset_EnableOverrideDefaultValue; // 0x1061
		::System::Byte _padding219[0x2];
		::System::Single ESPP_toneColorOffset_OverrideDefaultValue; // 0x1064
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_toneColorIntensity_FieldHandleType; // 0x1068
		::System::Boolean ESPP_toneColorIntensity_UseIt; // 0x106C
		::System::Byte _padding220[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_toneColorIntensity; // 0x1070
		::System::Boolean ESPP_toneColorIntensity_EnableFade; // 0x1078
		::System::Boolean ESPP_toneColorIntensity_EnableOverrideDefaultValue; // 0x1079
		::System::Byte _padding221[0x2];
		::System::Single ESPP_toneColorIntensity_OverrideDefaultValue; // 0x107C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lutWithMaskMode_FieldHandleType; // 0x1080
		::UnityEngine::Rendering::Universal::FXColorCorrection_FxMaskLutMode ESPP_lutWithMaskMode; // 0x1084
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_clipPlaneForLut_FieldHandleType; // 0x1088
		::System::Boolean ESPP_clipPlaneForLut_UseIt; // 0x108C
		::System::Byte _padding222[0x3];
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_clipPlaneForLut; // 0x1090
		::System::Boolean ESPP_clipPlaneForLut_EnableFade; // 0x1098
		::System::Boolean ESPP_clipPlaneForLut_EnableOverrideDefaultValue; // 0x1099
		::System::Byte _padding223[0x2];
		::UnityEngine::Vector4 ESPP_clipPlaneForLut_OverrideDefaultValue; // 0x109C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_clipPlaneLutExposureMulti_FieldHandleType; // 0x10AC
		::System::Boolean ESPP_clipPlaneLutExposureMulti_UseIt; // 0x10B0
		::System::Byte _padding224[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_clipPlaneLutExposureMulti; // 0x10B8
		::System::Boolean ESPP_clipPlaneLutExposureMulti_EnableFade; // 0x10C0
		::System::Boolean ESPP_clipPlaneLutExposureMulti_EnableOverrideDefaultValue; // 0x10C1
		::System::Byte _padding225[0x2];
		::System::Single ESPP_clipPlaneLutExposureMulti_OverrideDefaultValue; // 0x10C4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION__CTOR_OFFSET))(this);
		}

		::System::Void NNEGPFCPCAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_NNEGPFCPCAB_OFFSET))(this);
		}

		::System::Void IEFBPLNILIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_IEFBPLNILIE_OFFSET))(this);
		}

		::System::Void AJIPNBANCOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_AJIPNBANCOC_OFFSET))(this);
		}

		::System::Void AAOGMJFNGIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_AAOGMJFNGIB_OFFSET))(this);
		}

		::System::Void BAHGDCGIEKL(::System::Single PBKKBBHOCLC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_BAHGDCGIEKL_OFFSET))(this, PBKKBBHOCLC);
		}

		::System::Void ALJEEEAPCBH(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_ALJEEEAPCBH_OFFSET))(this, HIIOCANBKAM);
		}

		::System::Void AFPCLLAALBH(::System::Single FDLDIDFMCIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_AFPCLLAALBH_OFFSET))(this, FDLDIDFMCIG);
		}

		::System::Void PEDOJDBBGPC(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_PEDOJDBBGPC_OFFSET))(this, AHAFNGEDPLI);
		}

		::System::Void ONPGLGIFOJJ(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXCOLORCORRECTION_ONPGLGIFOJJ_OFFSET))(this, AHAFNGEDPLI);
		}
	};
}
