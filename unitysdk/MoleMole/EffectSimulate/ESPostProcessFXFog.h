#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::Config { class ConfigEntityFXFogEffects; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class ColorKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_AAOGMJFNGIB_OFFSET UNITYSDK_OFFSET(0x162137F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_AFPCLLAALBH_OFFSET UNITYSDK_OFFSET(0x1621D2A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_AJIPNBANCOC_OFFSET UNITYSDK_OFFSET(0x16213270)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_ALJEEEAPCBH_OFFSET UNITYSDK_OFFSET(0x16216680)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_BAHGDCGIEKL_OFFSET UNITYSDK_OFFSET(0x162155E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_IEFBPLNILIE_OFFSET UNITYSDK_OFFSET(0x16213260)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_NNEGPFCPCAB_OFFSET UNITYSDK_OFFSET(0x162126B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_ONPGLGIFOJJ_OFFSET UNITYSDK_OFFSET(0x162218A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_PEDOJDBBGPC_OFFSET UNITYSDK_OFFSET(0x1621F970)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG__CTOR_OFFSET UNITYSDK_OFFSET(0x162237D0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessFXFog_TypeDefinitionIndex = 47437;

	class ESPostProcessFXFog
	{
	public:
		::MoleMole::Config::ConfigEntityFXFogEffects* m_stAsset; // 0xB0
		::System::Boolean _DefaultFxFogOverrideCustomData; // 0xB8
		::System::Boolean _DefaultFxFog; // 0xB9
		::System::Byte _padding0[0x2];
		::UnityEngine::Color _DefaultFxFogStartColor; // 0xBC
		::UnityEngine::Color _DefaultFxFogEndColor; // 0xCC
		::UnityEngine::Color _DefaultFxFogFinalColor; // 0xDC
		::System::Single _DefaultFxFogIntensityForSky; // 0xEC
		::System::Single _DefaultFxVolumetricFogIntensity; // 0xF0
		::System::Boolean _VolDefault_fxFogOverrideCustomData; // 0xF4
		::System::Boolean _VolDefault_fxFog; // 0xF5
		::System::Byte _padding1[0x2];
		::System::Single _VolDefault_fxFogStart; // 0xF8
		::UnityEngine::Color _VolDefault_fxFogStartColor; // 0xFC
		::System::Single _VolDefault_fxFogDistance; // 0x10C
		::UnityEngine::Color _VolDefault_fxFogEndColor; // 0x110
		::System::Single _VolDefault_fxFogDistance2; // 0x120
		::UnityEngine::Color _VolDefault_fxFogFinalColor; // 0x124
		::System::Boolean _VolDefault_fxFogForCharacter; // 0x134
		::System::Byte _padding2[0x3];
		::System::Single _VolDefault_fxFogStartForChar; // 0x138
		::System::Single _VolDefault_fxFogDistanceForChar; // 0x13C
		::System::Single _VolDefault_fxFogIntensityForSky; // 0x140
		::System::Single _VolDefault_fxVolumetricFogIntensity; // 0x144
		::System::Boolean _VolDefault_PPFogEnable; // 0x148
		::System::Byte _padding3[0x3];
		::System::Single _VolDefault_PPFogStartDistance; // 0x14C
		::System::Single _VolDefault_PPFogEndDistance; // 0x150
		::System::Single _VolDefault_PPFogEnd2Distance; // 0x154
		::UnityEngine::Color _VolDefault_PPFogColor; // 0x158
		::System::Single _VolDefault_PPFogMaxDensity; // 0x168
		::System::Single _VolDefault_fxFogIntensityForSceneAndChar; // 0x16C
		::System::Single _VolDefault_fxFogIntensityScaleForChar; // 0x170
		::System::Boolean _VolDefault_fxFogFixFxFogFinalColorANotWork; // 0x174
		::System::Boolean _VolDefault_fxFogKeepCharFogSameAsScene; // 0x175
		::System::Byte _padding4[0x2];
		::System::Single _VolDefault_fxFogBlendWithFogCard; // 0x178
		::System::Boolean _VolPreVal_fxFogOverrideCustomData_overrideState; // 0x17C
		::System::Boolean _VolPreVal_fxFogOverrideCustomData; // 0x17D
		::System::Boolean _VolPreVal_fxFog_overrideState; // 0x17E
		::System::Boolean _VolPreVal_fxFog; // 0x17F
		::System::Boolean _VolPreVal_fxFogStart_overrideState; // 0x180
		::System::Byte _padding5[0x3];
		::System::Single _VolPreVal_fxFogStart; // 0x184
		::System::Boolean _VolPreVal_fxFogStartColor_overrideState; // 0x188
		::System::Byte _padding6[0x3];
		::UnityEngine::Color _VolPreVal_fxFogStartColor; // 0x18C
		::System::Boolean _VolPreVal_fxFogDistance_overrideState; // 0x19C
		::System::Byte _padding7[0x3];
		::System::Single _VolPreVal_fxFogDistance; // 0x1A0
		::System::Boolean _VolPreVal_fxFogEndColor_overrideState; // 0x1A4
		::System::Byte _padding8[0x3];
		::UnityEngine::Color _VolPreVal_fxFogEndColor; // 0x1A8
		::System::Boolean _VolPreVal_fxFogDistance2_overrideState; // 0x1B8
		::System::Byte _padding9[0x3];
		::System::Single _VolPreVal_fxFogDistance2; // 0x1BC
		::System::Boolean _VolPreVal_fxFogFinalColor_overrideState; // 0x1C0
		::System::Byte _padding10[0x3];
		::UnityEngine::Color _VolPreVal_fxFogFinalColor; // 0x1C4
		::System::Boolean _VolPreVal_fxFogForCharacter_overrideState; // 0x1D4
		::System::Boolean _VolPreVal_fxFogForCharacter; // 0x1D5
		::System::Boolean _VolPreVal_fxFogStartForChar_overrideState; // 0x1D6
		::System::Byte _padding11[0x1];
		::System::Single _VolPreVal_fxFogStartForChar; // 0x1D8
		::System::Boolean _VolPreVal_fxFogDistanceForChar_overrideState; // 0x1DC
		::System::Byte _padding12[0x3];
		::System::Single _VolPreVal_fxFogDistanceForChar; // 0x1E0
		::System::Boolean _VolPreVal_fxFogIntensityForSky_overrideState; // 0x1E4
		::System::Byte _padding13[0x3];
		::System::Single _VolPreVal_fxFogIntensityForSky; // 0x1E8
		::System::Boolean _VolPreVal_fxVolumetricFogIntensity_overrideState; // 0x1EC
		::System::Byte _padding14[0x3];
		::System::Single _VolPreVal_fxVolumetricFogIntensity; // 0x1F0
		::System::Boolean _VolPreVal_PPFogEnable_overrideState; // 0x1F4
		::System::Boolean _VolPreVal_PPFogEnable; // 0x1F5
		::System::Boolean _VolPreVal_PPFogStartDistance_overrideState; // 0x1F6
		::System::Byte _padding15[0x1];
		::System::Single _VolPreVal_PPFogStartDistance; // 0x1F8
		::System::Boolean _VolPreVal_PPFogEndDistance_overrideState; // 0x1FC
		::System::Byte _padding16[0x3];
		::System::Single _VolPreVal_PPFogEndDistance; // 0x200
		::System::Boolean _VolPreVal_PPFogEnd2Distance_overrideState; // 0x204
		::System::Byte _padding17[0x3];
		::System::Single _VolPreVal_PPFogEnd2Distance; // 0x208
		::System::Boolean _VolPreVal_PPFogColor_overrideState; // 0x20C
		::System::Byte _padding18[0x3];
		::UnityEngine::Color _VolPreVal_PPFogColor; // 0x210
		::System::Boolean _VolPreVal_PPFogMaxDensity_overrideState; // 0x220
		::System::Byte _padding19[0x3];
		::System::Single _VolPreVal_PPFogMaxDensity; // 0x224
		::System::Boolean _VolPreVal_fxFogIntensityForSceneAndChar_overrideState; // 0x228
		::System::Byte _padding20[0x3];
		::System::Single _VolPreVal_fxFogIntensityForSceneAndChar; // 0x22C
		::System::Boolean _VolPreVal_fxFogIntensityScaleForChar_overrideState; // 0x230
		::System::Byte _padding21[0x3];
		::System::Single _VolPreVal_fxFogIntensityScaleForChar; // 0x234
		::System::Boolean _VolPreVal_fxFogFixFxFogFinalColorANotWork_overrideState; // 0x238
		::System::Boolean _VolPreVal_fxFogFixFxFogFinalColorANotWork; // 0x239
		::System::Boolean _VolPreVal_fxFogKeepCharFogSameAsScene_overrideState; // 0x23A
		::System::Boolean _VolPreVal_fxFogKeepCharFogSameAsScene; // 0x23B
		::System::Boolean _VolPreVal_fxFogBlendWithFogCard_overrideState; // 0x23C
		::System::Byte _padding22[0x3];
		::System::Single _VolPreVal_fxFogBlendWithFogCard; // 0x240
		::System::Single _TimelineCurveFirstVal_fxFogStart; // 0x244
		::System::Single _TimelineCurveLastVal_fxFogStart; // 0x248
		::UnityEngine::Color _TimelineCurveFirstVal_fxFogStartColor; // 0x24C
		::UnityEngine::Color _TimelineCurveLastVal_fxFogStartColor; // 0x25C
		::System::Single _TimelineCurveFirstVal_fxFogDistance; // 0x26C
		::System::Single _TimelineCurveLastVal_fxFogDistance; // 0x270
		::UnityEngine::Color _TimelineCurveFirstVal_fxFogEndColor; // 0x274
		::UnityEngine::Color _TimelineCurveLastVal_fxFogEndColor; // 0x284
		::System::Single _TimelineCurveFirstVal_fxFogDistance2; // 0x294
		::System::Single _TimelineCurveLastVal_fxFogDistance2; // 0x298
		::UnityEngine::Color _TimelineCurveFirstVal_fxFogFinalColor; // 0x29C
		::UnityEngine::Color _TimelineCurveLastVal_fxFogFinalColor; // 0x2AC
		::System::Boolean _TimelineCurveFirstVal_fxFogForCharacter; // 0x2BC
		::System::Boolean _TimelineCurveLastVal_fxFogForCharacter; // 0x2BD
		::System::Byte _padding23[0x2];
		::System::Single _TimelineCurveFirstVal_fxFogStartForChar; // 0x2C0
		::System::Single _TimelineCurveLastVal_fxFogStartForChar; // 0x2C4
		::System::Single _TimelineCurveFirstVal_fxFogDistanceForChar; // 0x2C8
		::System::Single _TimelineCurveLastVal_fxFogDistanceForChar; // 0x2CC
		::System::Single _TimelineCurveFirstVal_fxFogIntensityForSky; // 0x2D0
		::System::Single _TimelineCurveLastVal_fxFogIntensityForSky; // 0x2D4
		::System::Single _TimelineCurveFirstVal_fxVolumetricFogIntensity; // 0x2D8
		::System::Single _TimelineCurveLastVal_fxVolumetricFogIntensity; // 0x2DC
		::System::Boolean _TimelineCurveFirstVal_PPFogEnable; // 0x2E0
		::System::Boolean _TimelineCurveLastVal_PPFogEnable; // 0x2E1
		::System::Byte _padding24[0x2];
		::System::Single _TimelineCurveFirstVal_PPFogStartDistance; // 0x2E4
		::System::Single _TimelineCurveLastVal_PPFogStartDistance; // 0x2E8
		::System::Single _TimelineCurveFirstVal_PPFogEndDistance; // 0x2EC
		::System::Single _TimelineCurveLastVal_PPFogEndDistance; // 0x2F0
		::System::Single _TimelineCurveFirstVal_PPFogEnd2Distance; // 0x2F4
		::System::Single _TimelineCurveLastVal_PPFogEnd2Distance; // 0x2F8
		::UnityEngine::Color _TimelineCurveFirstVal_PPFogColor; // 0x2FC
		::UnityEngine::Color _TimelineCurveLastVal_PPFogColor; // 0x30C
		::System::Single _TimelineCurveFirstVal_PPFogMaxDensity; // 0x31C
		::System::Single _TimelineCurveLastVal_PPFogMaxDensity; // 0x320
		::System::Single _TimelineCurveFirstVal_fxFogIntensityForSceneAndChar; // 0x324
		::System::Single _TimelineCurveLastVal_fxFogIntensityForSceneAndChar; // 0x328
		::System::Single _TimelineCurveFirstVal_fxFogIntensityScaleForChar; // 0x32C
		::System::Single _TimelineCurveLastVal_fxFogIntensityScaleForChar; // 0x330
		::System::Boolean _TimelineCurveFirstVal_fxFogFixFxFogFinalColorANotWork; // 0x334
		::System::Boolean _TimelineCurveLastVal_fxFogFixFxFogFinalColorANotWork; // 0x335
		::System::Boolean _TimelineCurveFirstVal_fxFogKeepCharFogSameAsScene; // 0x336
		::System::Boolean _TimelineCurveLastVal_fxFogKeepCharFogSameAsScene; // 0x337
		::System::Single _TimelineCurveFirstVal_fxFogBlendWithFogCard; // 0x338
		::System::Single _TimelineCurveLastVal_fxFogBlendWithFogCard; // 0x33C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxFogOverrideCustomData_FieldHandleType; // 0x340
		::System::Boolean ESPP_fxFogOverrideCustomData; // 0x344
		::System::Byte _padding25[0x3];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxFog_FieldHandleType; // 0x348
		::System::Boolean ESPP_fxFog; // 0x34C
		::System::Byte _padding26[0x3];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxFogStart_FieldHandleType; // 0x350
		::System::Boolean ESPP_fxFogStart_UseIt; // 0x354
		::System::Byte _padding27[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_fxFogStart; // 0x358
		::System::Boolean ESPP_fxFogStart_EnableFade; // 0x360
		::System::Boolean ESPP_fxFogStart_EnableOverrideDefaultValue; // 0x361
		::System::Byte _padding28[0x2];
		::System::Single ESPP_fxFogStart_OverrideDefaultValue; // 0x364
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxFogStartColor_FieldHandleType; // 0x368
		::System::Boolean ESPP_fxFogStartColor_UseIt; // 0x36C
		::System::Byte _padding29[0x3];
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_fxFogStartColor; // 0x370
		::System::Boolean ESPP_fxFogStartColor_EnableFade; // 0x378
		::System::Boolean ESPP_fxFogStartColor_EnableOverrideDefaultValue; // 0x379
		::System::Byte _padding30[0x2];
		::UnityEngine::Color ESPP_fxFogStartColor_OverrideDefaultValue; // 0x37C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxFogDistance_FieldHandleType; // 0x38C
		::System::Boolean ESPP_fxFogDistance_UseIt; // 0x390
		::System::Byte _padding31[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_fxFogDistance; // 0x398
		::System::Boolean ESPP_fxFogDistance_EnableFade; // 0x3A0
		::System::Boolean ESPP_fxFogDistance_EnableOverrideDefaultValue; // 0x3A1
		::System::Byte _padding32[0x2];
		::System::Single ESPP_fxFogDistance_OverrideDefaultValue; // 0x3A4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxFogEndColor_FieldHandleType; // 0x3A8
		::System::Boolean ESPP_fxFogEndColor_UseIt; // 0x3AC
		::System::Byte _padding33[0x3];
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_fxFogEndColor; // 0x3B0
		::System::Boolean ESPP_fxFogEndColor_EnableFade; // 0x3B8
		::System::Boolean ESPP_fxFogEndColor_EnableOverrideDefaultValue; // 0x3B9
		::System::Byte _padding34[0x2];
		::UnityEngine::Color ESPP_fxFogEndColor_OverrideDefaultValue; // 0x3BC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxFogDistance2_FieldHandleType; // 0x3CC
		::System::Boolean ESPP_fxFogDistance2_UseIt; // 0x3D0
		::System::Byte _padding35[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_fxFogDistance2; // 0x3D8
		::System::Boolean ESPP_fxFogDistance2_EnableFade; // 0x3E0
		::System::Boolean ESPP_fxFogDistance2_EnableOverrideDefaultValue; // 0x3E1
		::System::Byte _padding36[0x2];
		::System::Single ESPP_fxFogDistance2_OverrideDefaultValue; // 0x3E4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxFogFinalColor_FieldHandleType; // 0x3E8
		::System::Boolean ESPP_fxFogFinalColor_UseIt; // 0x3EC
		::System::Byte _padding37[0x3];
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_fxFogFinalColor; // 0x3F0
		::System::Boolean ESPP_fxFogFinalColor_EnableFade; // 0x3F8
		::System::Boolean ESPP_fxFogFinalColor_EnableOverrideDefaultValue; // 0x3F9
		::System::Byte _padding38[0x2];
		::UnityEngine::Color ESPP_fxFogFinalColor_OverrideDefaultValue; // 0x3FC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxFogForCharacter_FieldHandleType; // 0x40C
		::System::Boolean ESPP_fxFogForCharacter_UseIt; // 0x410
		::System::Byte _padding39[0x7];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_fxFogForCharacter; // 0x418
		::System::Boolean ESPP_fxFogForCharacter_EnableFade; // 0x420
		::System::Boolean ESPP_fxFogForCharacter_EnableOverrideDefaultValue; // 0x421
		::System::Boolean ESPP_fxFogForCharacter_OverrideDefaultValue; // 0x422
		::System::Byte _padding40[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxFogStartForChar_FieldHandleType; // 0x424
		::System::Boolean ESPP_fxFogStartForChar_UseIt; // 0x428
		::System::Byte _padding41[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_fxFogStartForChar; // 0x430
		::System::Boolean ESPP_fxFogStartForChar_EnableFade; // 0x438
		::System::Boolean ESPP_fxFogStartForChar_EnableOverrideDefaultValue; // 0x439
		::System::Byte _padding42[0x2];
		::System::Single ESPP_fxFogStartForChar_OverrideDefaultValue; // 0x43C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxFogDistanceForChar_FieldHandleType; // 0x440
		::System::Boolean ESPP_fxFogDistanceForChar_UseIt; // 0x444
		::System::Byte _padding43[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_fxFogDistanceForChar; // 0x448
		::System::Boolean ESPP_fxFogDistanceForChar_EnableFade; // 0x450
		::System::Boolean ESPP_fxFogDistanceForChar_EnableOverrideDefaultValue; // 0x451
		::System::Byte _padding44[0x2];
		::System::Single ESPP_fxFogDistanceForChar_OverrideDefaultValue; // 0x454
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxFogIntensityForSky_FieldHandleType; // 0x458
		::System::Boolean ESPP_fxFogIntensityForSky_UseIt; // 0x45C
		::System::Byte _padding45[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_fxFogIntensityForSky; // 0x460
		::System::Boolean ESPP_fxFogIntensityForSky_EnableFade; // 0x468
		::System::Boolean ESPP_fxFogIntensityForSky_EnableOverrideDefaultValue; // 0x469
		::System::Byte _padding46[0x2];
		::System::Single ESPP_fxFogIntensityForSky_OverrideDefaultValue; // 0x46C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxVolumetricFogIntensity_FieldHandleType; // 0x470
		::System::Boolean ESPP_fxVolumetricFogIntensity_UseIt; // 0x474
		::System::Byte _padding47[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_fxVolumetricFogIntensity; // 0x478
		::System::Boolean ESPP_fxVolumetricFogIntensity_EnableFade; // 0x480
		::System::Boolean ESPP_fxVolumetricFogIntensity_EnableOverrideDefaultValue; // 0x481
		::System::Byte _padding48[0x2];
		::System::Single ESPP_fxVolumetricFogIntensity_OverrideDefaultValue; // 0x484
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_PPFogEnable_FieldHandleType; // 0x488
		::System::Boolean ESPP_PPFogEnable_UseIt; // 0x48C
		::System::Byte _padding49[0x3];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_PPFogEnable; // 0x490
		::System::Boolean ESPP_PPFogEnable_EnableFade; // 0x498
		::System::Boolean ESPP_PPFogEnable_EnableOverrideDefaultValue; // 0x499
		::System::Boolean ESPP_PPFogEnable_OverrideDefaultValue; // 0x49A
		::System::Byte _padding50[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_PPFogStartDistance_FieldHandleType; // 0x49C
		::System::Boolean ESPP_PPFogStartDistance_UseIt; // 0x4A0
		::System::Byte _padding51[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_PPFogStartDistance; // 0x4A8
		::System::Boolean ESPP_PPFogStartDistance_EnableFade; // 0x4B0
		::System::Boolean ESPP_PPFogStartDistance_EnableOverrideDefaultValue; // 0x4B1
		::System::Byte _padding52[0x2];
		::System::Single ESPP_PPFogStartDistance_OverrideDefaultValue; // 0x4B4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_PPFogEndDistance_FieldHandleType; // 0x4B8
		::System::Boolean ESPP_PPFogEndDistance_UseIt; // 0x4BC
		::System::Byte _padding53[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_PPFogEndDistance; // 0x4C0
		::System::Boolean ESPP_PPFogEndDistance_EnableFade; // 0x4C8
		::System::Boolean ESPP_PPFogEndDistance_EnableOverrideDefaultValue; // 0x4C9
		::System::Byte _padding54[0x2];
		::System::Single ESPP_PPFogEndDistance_OverrideDefaultValue; // 0x4CC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_PPFogEnd2Distance_FieldHandleType; // 0x4D0
		::System::Boolean ESPP_PPFogEnd2Distance_UseIt; // 0x4D4
		::System::Byte _padding55[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_PPFogEnd2Distance; // 0x4D8
		::System::Boolean ESPP_PPFogEnd2Distance_EnableFade; // 0x4E0
		::System::Boolean ESPP_PPFogEnd2Distance_EnableOverrideDefaultValue; // 0x4E1
		::System::Byte _padding56[0x2];
		::System::Single ESPP_PPFogEnd2Distance_OverrideDefaultValue; // 0x4E4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_PPFogColor_FieldHandleType; // 0x4E8
		::System::Boolean ESPP_PPFogColor_UseIt; // 0x4EC
		::System::Byte _padding57[0x3];
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_PPFogColor; // 0x4F0
		::System::Boolean ESPP_PPFogColor_EnableFade; // 0x4F8
		::System::Boolean ESPP_PPFogColor_EnableOverrideDefaultValue; // 0x4F9
		::System::Byte _padding58[0x2];
		::UnityEngine::Color ESPP_PPFogColor_OverrideDefaultValue; // 0x4FC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_PPFogMaxDensity_FieldHandleType; // 0x50C
		::System::Boolean ESPP_PPFogMaxDensity_UseIt; // 0x510
		::System::Byte _padding59[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_PPFogMaxDensity; // 0x518
		::System::Boolean ESPP_PPFogMaxDensity_EnableFade; // 0x520
		::System::Boolean ESPP_PPFogMaxDensity_EnableOverrideDefaultValue; // 0x521
		::System::Byte _padding60[0x2];
		::System::Single ESPP_PPFogMaxDensity_OverrideDefaultValue; // 0x524
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxFogIntensityForSceneAndChar_FieldHandleType; // 0x528
		::System::Boolean ESPP_fxFogIntensityForSceneAndChar_UseIt; // 0x52C
		::System::Byte _padding61[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_fxFogIntensityForSceneAndChar; // 0x530
		::System::Boolean ESPP_fxFogIntensityForSceneAndChar_EnableFade; // 0x538
		::System::Boolean ESPP_fxFogIntensityForSceneAndChar_EnableOverrideDefaultValue; // 0x539
		::System::Byte _padding62[0x2];
		::System::Single ESPP_fxFogIntensityForSceneAndChar_OverrideDefaultValue; // 0x53C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxFogIntensityScaleForChar_FieldHandleType; // 0x540
		::System::Boolean ESPP_fxFogIntensityScaleForChar_UseIt; // 0x544
		::System::Byte _padding63[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_fxFogIntensityScaleForChar; // 0x548
		::System::Boolean ESPP_fxFogIntensityScaleForChar_EnableFade; // 0x550
		::System::Boolean ESPP_fxFogIntensityScaleForChar_EnableOverrideDefaultValue; // 0x551
		::System::Byte _padding64[0x2];
		::System::Single ESPP_fxFogIntensityScaleForChar_OverrideDefaultValue; // 0x554
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxFogFixFxFogFinalColorANotWork_FieldHandleType; // 0x558
		::System::Boolean ESPP_fxFogFixFxFogFinalColorANotWork_UseIt; // 0x55C
		::System::Byte _padding65[0x3];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_fxFogFixFxFogFinalColorANotWork; // 0x560
		::System::Boolean ESPP_fxFogFixFxFogFinalColorANotWork_EnableFade; // 0x568
		::System::Boolean ESPP_fxFogFixFxFogFinalColorANotWork_EnableOverrideDefaultValue; // 0x569
		::System::Boolean ESPP_fxFogFixFxFogFinalColorANotWork_OverrideDefaultValue; // 0x56A
		::System::Byte _padding66[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxFogKeepCharFogSameAsScene_FieldHandleType; // 0x56C
		::System::Boolean ESPP_fxFogKeepCharFogSameAsScene_UseIt; // 0x570
		::System::Byte _padding67[0x7];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_fxFogKeepCharFogSameAsScene; // 0x578
		::System::Boolean ESPP_fxFogKeepCharFogSameAsScene_EnableFade; // 0x580
		::System::Boolean ESPP_fxFogKeepCharFogSameAsScene_EnableOverrideDefaultValue; // 0x581
		::System::Boolean ESPP_fxFogKeepCharFogSameAsScene_OverrideDefaultValue; // 0x582
		::System::Byte _padding68[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxFogBlendWithFogCard_FieldHandleType; // 0x584
		::System::Boolean ESPP_fxFogBlendWithFogCard_UseIt; // 0x588
		::System::Byte _padding69[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_fxFogBlendWithFogCard; // 0x590
		::System::Boolean ESPP_fxFogBlendWithFogCard_EnableFade; // 0x598
		::System::Boolean ESPP_fxFogBlendWithFogCard_EnableOverrideDefaultValue; // 0x599
		::System::Byte _padding70[0x2];
		::System::Single ESPP_fxFogBlendWithFogCard_OverrideDefaultValue; // 0x59C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG__CTOR_OFFSET))(this);
		}

		::System::Void NNEGPFCPCAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_NNEGPFCPCAB_OFFSET))(this);
		}

		::System::Void IEFBPLNILIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_IEFBPLNILIE_OFFSET))(this);
		}

		::System::Void AJIPNBANCOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_AJIPNBANCOC_OFFSET))(this);
		}

		::System::Void AAOGMJFNGIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_AAOGMJFNGIB_OFFSET))(this);
		}

		::System::Void BAHGDCGIEKL(::System::Single PBKKBBHOCLC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_BAHGDCGIEKL_OFFSET))(this, PBKKBBHOCLC);
		}

		::System::Void ALJEEEAPCBH(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_ALJEEEAPCBH_OFFSET))(this, HIIOCANBKAM);
		}

		::System::Void AFPCLLAALBH(::System::Single FDLDIDFMCIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_AFPCLLAALBH_OFFSET))(this, FDLDIDFMCIG);
		}

		::System::Void PEDOJDBBGPC(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_PEDOJDBBGPC_OFFSET))(this, AHAFNGEDPLI);
		}

		::System::Void ONPGLGIFOJJ(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_ONPGLGIFOJJ_OFFSET))(this, AHAFNGEDPLI);
		}
	};
}
