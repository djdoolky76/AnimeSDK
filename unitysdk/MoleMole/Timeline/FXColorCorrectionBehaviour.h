#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/FXColorCorrectionBehaviour_FJCHJFFHBCD.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Rendering/Universal/FXColorCorrection_FxMaskLutMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/FXColorCorrection_FxScreenLightMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/FXColorCorrection_SaturationLutMaskMode.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class FXColorCorrection; }
namespace UnityEngine::Rendering::Universal { class WeatherConfigScriptableObject; }

#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x10D63B50)
#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x10D6F3F0)
#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_IOKEPFMBCOP_OFFSET UNITYSDK_OFFSET(0x10D64C80)
#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_KBDIIEDMPHD_OFFSET UNITYSDK_OFFSET(0x10D6F3D0)
#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x10D65930)
#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_OGPBBOPCBKO_OFFSET UNITYSDK_OFFSET(0x10D6F3E0)
#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x10D65070)
#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x10D6F3C0)
#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x10D6C8B0)
#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x10D6D280)
#define MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x10D6F120)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int FXColorCorrectionBehaviour_TypeDefinitionIndex = 49315;

	class FXColorCorrectionBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::FXColorCorrectionBehaviour_FJCHJFFHBCD _methodParm; // 0x18
		::System::Boolean enabled; // 0x318
		::System::Boolean active_postExposure; // 0x319
		::System::Boolean use_postExposure; // 0x31A
		::System::Byte _padding0[0x1];
		::System::Single postExposure; // 0x31C
		::System::Boolean active_contrast; // 0x320
		::System::Boolean use_contrast; // 0x321
		::System::Byte _padding1[0x2];
		::System::Single contrast; // 0x324
		::System::Boolean active_saturation; // 0x328
		::System::Boolean use_saturation; // 0x329
		::System::Byte _padding2[0x2];
		::System::Single saturation; // 0x32C
		::System::Boolean active_gamma; // 0x330
		::System::Boolean use_gamma; // 0x331
		::System::Byte _padding3[0x2];
		::System::Single gamma; // 0x334
		::System::Boolean active_lutInvert; // 0x338
		::System::Boolean use_lutInvert; // 0x339
		::System::Boolean lutInvert; // 0x33A
		::System::Boolean active_lutToneColors; // 0x33B
		::System::Boolean use_lutToneColors; // 0x33C
		::System::Boolean lutToneColors; // 0x33D
		::System::Boolean active_lutToneA; // 0x33E
		::System::Boolean use_lutToneA; // 0x33F
		::UnityEngine::Color lutToneA; // 0x340
		::System::Boolean active_lutToneB; // 0x350
		::System::Boolean use_lutToneB; // 0x351
		::System::Byte _padding4[0x2];
		::UnityEngine::Color lutToneB; // 0x354
		::System::Boolean active_lutMiddlePoint; // 0x364
		::System::Boolean use_lutMiddlePoint; // 0x365
		::System::Byte _padding5[0x2];
		::System::Single lutMiddlePoint; // 0x368
		::System::Boolean active_lutSoftness; // 0x36C
		::System::Boolean use_lutSoftness; // 0x36D
		::System::Byte _padding6[0x2];
		::System::Single lutSoftness; // 0x370
		::System::Boolean active_desaturate; // 0x374
		::System::Boolean use_desaturate; // 0x375
		::System::Byte _padding7[0x2];
		::System::Single desaturate; // 0x378
		::System::Boolean active_invert; // 0x37C
		::System::Boolean use_invert; // 0x37D
		::System::Boolean invert; // 0x37E
		::System::Boolean active_toneColors; // 0x37F
		::System::Boolean use_toneColors; // 0x380
		::System::Boolean toneColors; // 0x381
		::System::Boolean active_toneA; // 0x382
		::System::Boolean use_toneA; // 0x383
		::UnityEngine::Color toneA; // 0x384
		::System::Boolean active_toneB; // 0x394
		::System::Boolean use_toneB; // 0x395
		::System::Byte _padding8[0x2];
		::UnityEngine::Color toneB; // 0x398
		::System::Boolean active_middlePoint; // 0x3A8
		::System::Boolean use_middlePoint; // 0x3A9
		::System::Byte _padding9[0x2];
		::System::Single middlePoint; // 0x3AC
		::System::Boolean active_softness; // 0x3B0
		::System::Boolean use_softness; // 0x3B1
		::System::Byte _padding10[0x2];
		::System::Single softness; // 0x3B4
		::System::Boolean active_fxFogMaskPassOn; // 0x3B8
		::System::Boolean use_fxFogMaskPassOn; // 0x3B9
		::System::Boolean fxFogMaskPassOn; // 0x3BA
		::System::Boolean active_justControlParticleLight; // 0x3BB
		::System::Boolean use_justControlParticleLight; // 0x3BC
		::System::Boolean justControlParticleLight; // 0x3BD
		::System::Boolean active_localLightMultiplyIntensity; // 0x3BE
		::System::Boolean use_localLightMultiplyIntensity; // 0x3BF
		::System::Single localLightMultiplyIntensity; // 0x3C0
		::System::Boolean active_localLightThreadHold; // 0x3C4
		::System::Boolean use_localLightThreadHold; // 0x3C5
		::System::Byte _padding11[0x2];
		::System::Single localLightThreadHold; // 0x3C8
		::System::Boolean active_enableLightShaft; // 0x3CC
		::System::Boolean use_enableLightShaft; // 0x3CD
		::System::Boolean enableLightShaft; // 0x3CE
		::System::Boolean active_lightShaftThreshold; // 0x3CF
		::System::Boolean use_lightShaftThreshold; // 0x3D0
		::System::Byte _padding12[0x3];
		::System::Single lightShaftThreshold; // 0x3D4
		::System::Boolean active_lightShaftIntensity; // 0x3D8
		::System::Boolean use_lightShaftIntensity; // 0x3D9
		::System::Byte _padding13[0x2];
		::System::Single lightShaftIntensity; // 0x3DC
		::System::Boolean active_lightShaftColorClamp; // 0x3E0
		::System::Boolean use_lightShaftColorClamp; // 0x3E1
		::System::Boolean lightShaftColorClamp; // 0x3E2
		::System::Boolean active_lightShaftColor; // 0x3E3
		::System::Boolean use_lightShaftColor; // 0x3E4
		::System::Byte _padding14[0x3];
		::UnityEngine::Color lightShaftColor; // 0x3E8
		::System::Boolean active_lightShaftLength; // 0x3F8
		::System::Boolean use_lightShaftLength; // 0x3F9
		::System::Byte _padding15[0x2];
		::System::Single lightShaftLength; // 0x3FC
		::System::Boolean active_lightShaftFadeLength; // 0x400
		::System::Boolean use_lightShaftFadeLength; // 0x401
		::System::Byte _padding16[0x2];
		::System::Single lightShaftFadeLength; // 0x404
		::System::Boolean active_lightShaftBlur; // 0x408
		::System::Boolean use_lightShaftBlur; // 0x409
		::System::Boolean lightShaftBlur; // 0x40A
		::System::Boolean active_fxScreenLightMaskOn; // 0x40B
		::System::Boolean use_fxScreenLightMaskOn; // 0x40C
		::System::Boolean fxScreenLightMaskOn; // 0x40D
		::System::Boolean active_fxFxScreenLightMode; // 0x40E
		::System::Boolean use_fxFxScreenLightMode; // 0x40F
		::UnityEngine::Rendering::Universal::FXColorCorrection_FxScreenLightMode fxFxScreenLightMode; // 0x410
		::System::Boolean active_fxLightShaftMaskOn; // 0x414
		::System::Boolean use_fxLightShaftMaskOn; // 0x415
		::System::Boolean fxLightShaftMaskOn; // 0x416
		::System::Boolean active_enableCameraClip; // 0x417
		::System::Boolean use_enableCameraClip; // 0x418
		::System::Boolean enableCameraClip; // 0x419
		::System::Boolean active_cameraClipDistance; // 0x41A
		::System::Boolean use_cameraClipDistance; // 0x41B
		::System::Single cameraClipDistance; // 0x41C
		::System::Boolean active_sceneSpecialPPSEffectIntensity; // 0x420
		::System::Boolean use_sceneSpecialPPSEffectIntensity; // 0x421
		::System::Byte _padding17[0x2];
		::System::Single sceneSpecialPPSEffectIntensity; // 0x424
		::System::Boolean active_sceneSpecialSkySaturation; // 0x428
		::System::Boolean use_sceneSpecialSkySaturation; // 0x429
		::System::Byte _padding18[0x2];
		::System::Single sceneSpecialSkySaturation; // 0x42C
		::System::Boolean active_sceneSpecialPPSIgnoreRidus; // 0x430
		::System::Boolean use_sceneSpecialPPSIgnoreRidus; // 0x431
		::System::Byte _padding19[0x2];
		::System::Single sceneSpecialPPSIgnoreRidus; // 0x434
		::System::Boolean active_sceneSpecialPPSRadiusAlphaPow; // 0x438
		::System::Boolean use_sceneSpecialPPSRadiusAlphaPow; // 0x439
		::System::Byte _padding20[0x2];
		::System::Single sceneSpecialPPSRadiusAlphaPow; // 0x43C
		::System::Boolean active_sceneSpecialPPSEmissionColor; // 0x440
		::System::Boolean use_sceneSpecialPPSEmissionColor; // 0x441
		::System::Byte _padding21[0x2];
		::UnityEngine::Color sceneSpecialPPSEmissionColor; // 0x444
		::System::Boolean active_cameraClipExtension; // 0x454
		::System::Boolean use_cameraClipExtension; // 0x455
		::System::Byte _padding22[0x2];
		::UnityEngine::Vector3 cameraClipExtension; // 0x458
		::System::Boolean active_cameraClipAlpha; // 0x464
		::System::Boolean use_cameraClipAlpha; // 0x465
		::System::Byte _padding23[0x2];
		::System::Single cameraClipAlpha; // 0x468
		::System::Boolean active_weatherConfig; // 0x46C
		::System::Boolean use_weatherConfig; // 0x46D
		::System::Byte _padding24[0x2];
		::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* weatherConfig; // 0x470
		::System::Boolean active_weatherConfigWeight; // 0x478
		::System::Boolean use_weatherConfigWeight; // 0x479
		::System::Byte _padding25[0x2];
		::System::Single weatherConfigWeight; // 0x47C
		::System::Boolean active_fxScreenLightColor; // 0x480
		::System::Boolean use_fxScreenLightColor; // 0x481
		::System::Byte _padding26[0x2];
		::UnityEngine::Color fxScreenLightColor; // 0x484
		::System::Boolean active_overrideWeatherGIConfig; // 0x494
		::System::Boolean use_overrideWeatherGIConfig; // 0x495
		::System::Boolean overrideWeatherGIConfig; // 0x496
		::System::Boolean active_skyColor; // 0x497
		::System::Boolean use_skyColor; // 0x498
		::System::Byte _padding27[0x3];
		::UnityEngine::Color skyColor; // 0x49C
		::System::Boolean active_middleColor; // 0x4AC
		::System::Boolean use_middleColor; // 0x4AD
		::System::Byte _padding28[0x2];
		::UnityEngine::Color middleColor; // 0x4B0
		::System::Boolean active_groundColor; // 0x4C0
		::System::Boolean use_groundColor; // 0x4C1
		::System::Byte _padding29[0x2];
		::UnityEngine::Color groundColor; // 0x4C4
		::System::Boolean active_indirectSpecularIntensity; // 0x4D4
		::System::Boolean use_indirectSpecularIntensity; // 0x4D5
		::System::Byte _padding30[0x2];
		::System::Single indirectSpecularIntensity; // 0x4D8
		::System::Boolean active_fxColorSaturation; // 0x4DC
		::System::Boolean use_fxColorSaturation; // 0x4DD
		::System::Byte _padding31[0x2];
		::System::Single fxColorSaturation; // 0x4E0
		::System::Boolean active_lightShaftUseCustomCenter; // 0x4E4
		::System::Boolean use_lightShaftUseCustomCenter; // 0x4E5
		::System::Boolean lightShaftUseCustomCenter; // 0x4E6
		::System::Boolean active_lightShaftCustomCenter; // 0x4E7
		::System::Boolean use_lightShaftCustomCenter; // 0x4E8
		::System::Byte _padding32[0x3];
		::UnityEngine::Vector2 lightShaftCustomCenter; // 0x4EC
		::System::Boolean active_sceneSpecialPPSOverrideWeatherGBufferSaturation; // 0x4F4
		::System::Boolean use_sceneSpecialPPSOverrideWeatherGBufferSaturation; // 0x4F5
		::System::Boolean sceneSpecialPPSOverrideWeatherGBufferSaturation; // 0x4F6
		::System::Boolean active_sceneSpecialPPSGBufferSaturation; // 0x4F7
		::System::Boolean use_sceneSpecialPPSGBufferSaturation; // 0x4F8
		::System::Byte _padding33[0x3];
		::System::Single sceneSpecialPPSGBufferSaturation; // 0x4FC
		::System::Boolean active_sceneSpecialPPSUseSaturationLut; // 0x500
		::System::Boolean use_sceneSpecialPPSUseSaturationLut; // 0x501
		::System::Boolean sceneSpecialPPSUseSaturationLut; // 0x502
		::System::Boolean active_sceneSpecialPPSSaturationLut; // 0x503
		::System::Boolean use_sceneSpecialPPSSaturationLut; // 0x504
		::System::Byte _padding34[0x3];
		::UnityEngine::Texture* sceneSpecialPPSSaturationLut; // 0x508
		::System::Boolean active_sceneSpecialPPSSaturationRampGap; // 0x510
		::System::Boolean use_sceneSpecialPPSSaturationRampGap; // 0x511
		::System::Byte _padding35[0x2];
		::UnityEngine::Vector4 sceneSpecialPPSSaturationRampGap; // 0x514
		::System::Boolean active_sceneSpecialPPSSaturationRampValue; // 0x524
		::System::Boolean use_sceneSpecialPPSSaturationRampValue; // 0x525
		::System::Byte _padding36[0x2];
		::UnityEngine::Vector4 sceneSpecialPPSSaturationRampValue; // 0x528
		::System::Boolean active_sceneSpecialPPSSaturationRampGap2; // 0x538
		::System::Boolean use_sceneSpecialPPSSaturationRampGap2; // 0x539
		::System::Byte _padding37[0x2];
		::UnityEngine::Vector4 sceneSpecialPPSSaturationRampGap2; // 0x53C
		::System::Boolean active_sceneSpecialPPSSaturationRampValue2; // 0x54C
		::System::Boolean use_sceneSpecialPPSSaturationRampValue2; // 0x54D
		::System::Byte _padding38[0x2];
		::UnityEngine::Vector4 sceneSpecialPPSSaturationRampValue2; // 0x550
		::System::Boolean active_sceneSpecialPPSSaturationRampGap3; // 0x560
		::System::Boolean use_sceneSpecialPPSSaturationRampGap3; // 0x561
		::System::Byte _padding39[0x2];
		::UnityEngine::Vector4 sceneSpecialPPSSaturationRampGap3; // 0x564
		::System::Boolean active_sceneSpecialPPSSaturationRampValue3; // 0x574
		::System::Boolean use_sceneSpecialPPSSaturationRampValue3; // 0x575
		::System::Byte _padding40[0x2];
		::UnityEngine::Vector4 sceneSpecialPPSSaturationRampValue3; // 0x578
		::System::Boolean active_applySaturationLutToUberPost; // 0x588
		::System::Boolean use_applySaturationLutToUberPost; // 0x589
		::System::Boolean applySaturationLutToUberPost; // 0x58A
		::System::Boolean active_ForceUseMsaa; // 0x58B
		::System::Boolean use_ForceUseMsaa; // 0x58C
		::System::Boolean ForceUseMsaa; // 0x58D
		::System::Boolean active_useLutWithMask; // 0x58E
		::System::Boolean use_useLutWithMask; // 0x58F
		::System::Boolean useLutWithMask; // 0x590
		::System::Boolean active_lutWithMaskTex; // 0x591
		::System::Boolean use_lutWithMaskTex; // 0x592
		::System::Byte _padding41[0x5];
		::UnityEngine::Texture* lutWithMaskTex; // 0x598
		::System::Boolean active_lutWithMaskContribution; // 0x5A0
		::System::Boolean use_lutWithMaskContribution; // 0x5A1
		::System::Byte _padding42[0x2];
		::System::Single lutWithMaskContribution; // 0x5A4
		::System::Boolean active_lightShaftIgnoreSceneDepthMask; // 0x5A8
		::System::Boolean use_lightShaftIgnoreSceneDepthMask; // 0x5A9
		::System::Boolean lightShaftIgnoreSceneDepthMask; // 0x5AA
		::System::Boolean active_cameraClipFxExtraExtension; // 0x5AB
		::System::Boolean use_cameraClipFxExtraExtension; // 0x5AC
		::System::Byte _padding43[0x3];
		::UnityEngine::Vector3 cameraClipFxExtraExtension; // 0x5B0
		::System::Boolean active_enableLocalLightControl; // 0x5BC
		::System::Boolean use_enableLocalLightControl; // 0x5BD
		::System::Boolean enableLocalLightControl; // 0x5BE
		::System::Boolean active_localLightIntensityMultiplier; // 0x5BF
		::System::Boolean use_localLightIntensityMultiplier; // 0x5C0
		::System::Byte _padding44[0x3];
		::System::Single localLightIntensityMultiplier; // 0x5C4
		::System::Boolean active_localFogIntensity; // 0x5C8
		::System::Boolean use_localFogIntensity; // 0x5C9
		::System::Byte _padding45[0x2];
		::System::Single localFogIntensity; // 0x5CC
		::System::Boolean active_saturationLutMaskMode; // 0x5D0
		::System::Boolean use_saturationLutMaskMode; // 0x5D1
		::System::Byte _padding46[0x2];
		::UnityEngine::Rendering::Universal::FXColorCorrection_SaturationLutMaskMode saturationLutMaskMode; // 0x5D4
		::System::Boolean active_blackCanvasKeepWeatherValid; // 0x5D8
		::System::Boolean use_blackCanvasKeepWeatherValid; // 0x5D9
		::System::Boolean blackCanvasKeepWeatherValid; // 0x5DA
		::System::Boolean active_toneColorOffset; // 0x5DB
		::System::Boolean use_toneColorOffset; // 0x5DC
		::System::Byte _padding47[0x3];
		::System::Single toneColorOffset; // 0x5E0
		::System::Boolean active_toneColorIntensity; // 0x5E4
		::System::Boolean use_toneColorIntensity; // 0x5E5
		::System::Byte _padding48[0x2];
		::System::Single toneColorIntensity; // 0x5E8
		::System::Boolean active_lutWithMaskMode; // 0x5EC
		::System::Boolean use_lutWithMaskMode; // 0x5ED
		::System::Byte _padding49[0x2];
		::UnityEngine::Rendering::Universal::FXColorCorrection_FxMaskLutMode lutWithMaskMode; // 0x5F0
		::System::Boolean active_clipPlaneForLut; // 0x5F4
		::System::Boolean use_clipPlaneForLut; // 0x5F5
		::System::Byte _padding50[0x2];
		::UnityEngine::Vector4 clipPlaneForLut; // 0x5F8
		::System::Boolean active_clipPlaneLutExposureMulti; // 0x608
		::System::Boolean use_clipPlaneLutExposureMulti; // 0x609
		::System::Byte _padding51[0x2];
		::System::Single clipPlaneLutExposureMulti; // 0x60C
		::UnityEngine::Rendering::Universal::FXColorCorrection* _FXColorCorrection; // 0x610

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void ProcessFrame(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_PROCESSFRAME_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void SetValue(::System::String* KEKLFCCONCL, ::System::Single EEKENHBPKGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_SETVALUE_OFFSET))(this, KEKLFCCONCL, EEKENHBPKGO);
		}

		::UnityEngine::Rendering::Universal::FXColorCorrection* IOKEPFMBCOP(::System::Object* NEEMKJBIIBC)
		{
			return ((::UnityEngine::Rendering::Universal::FXColorCorrection*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_IOKEPFMBCOP_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void KBDIIEDMPHD(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_KBDIIEDMPHD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void OGPBBOPCBKO(::System::String* MIALFKCCCPI, ::System::Single KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_OGPBBOPCBKO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void GHDJIEJFFKG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void ODLBLHOKABA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOLORCORRECTIONBEHAVIOUR_ODLBLHOKABA_OFFSET))(this);
		}
	};
}
