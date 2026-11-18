#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::Config { class ConfigEntityColorAdjustments; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_AAOGMJFNGIB_OFFSET UNITYSDK_OFFSET(0x19B3F700)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_AFPCLLAALBH_OFFSET UNITYSDK_OFFSET(0x19B44F20)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_AJIPNBANCOC_OFFSET UNITYSDK_OFFSET(0x19B3F300)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_ALJEEEAPCBH_OFFSET UNITYSDK_OFFSET(0x19B41160)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_BAHGDCGIEKL_OFFSET UNITYSDK_OFFSET(0x19B408E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_IEFBPLNILIE_OFFSET UNITYSDK_OFFSET(0x19B3F2F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_NNEGPFCPCAB_OFFSET UNITYSDK_OFFSET(0x19B3EBF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_ONPGLGIFOJJ_OFFSET UNITYSDK_OFFSET(0x19B47770)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_PEDOJDBBGPC_OFFSET UNITYSDK_OFFSET(0x19B465F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x19B488F0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessColorAdjustments_TypeDefinitionIndex = 56710;

	class ESPostProcessColorAdjustments
	{
	public:
		::MoleMole::Config::ConfigEntityColorAdjustments* m_stAsset; // 0xB0
		::System::Single _DefaultPostExposure; // 0xB8
		::System::Single _DefaultContrast; // 0xBC
		::UnityEngine::Color _DefaultColorFilter; // 0xC0
		::System::Single _DefaultHueShift; // 0xD0
		::System::Single _DefaultSaturation; // 0xD4
		::System::Single _DefaultDesaturate; // 0xD8
		::System::Boolean _DefaultApplyLutToSkybox; // 0xDC
		::System::Byte _padding0[0x3];
		::System::Single _DefaultSkySaturation; // 0xE0
		::System::Single _DefaultSkyContrast; // 0xE4
		::System::Boolean _VolDefault_UseSceneDesaturateMask; // 0xE8
		::System::Byte _padding1[0x3];
		::System::Single _VolDefault_postExposure; // 0xEC
		::System::Single _VolDefault_contrast; // 0xF0
		::UnityEngine::Color _VolDefault_colorFilter; // 0xF4
		::System::Single _VolDefault_hueShift; // 0x104
		::System::Single _VolDefault_saturation; // 0x108
		::System::Single _VolDefault_desaturate; // 0x10C
		::System::Boolean _VolDefault_applyLutToSkybox; // 0x110
		::System::Byte _padding2[0x3];
		::System::Single _VolDefault_skySaturation; // 0x114
		::System::Single _VolDefault_skyContrast; // 0x118
		::System::Single _VolDefault_sceneExposure; // 0x11C
		::System::Single _VolDefault_characterExposure; // 0x120
		::System::Single _VolDefault_skyboxExposure; // 0x124
		::UnityEngine::Texture* _VolDefault_FXLutTexture; // 0x128
		::System::Single _VolDefault_FXExposure; // 0x130
		::System::Boolean _VolPreVal_UseSceneDesaturateMask_overrideState; // 0x134
		::System::Boolean _VolPreVal_UseSceneDesaturateMask; // 0x135
		::System::Boolean _VolPreVal_postExposure_overrideState; // 0x136
		::System::Byte _padding3[0x1];
		::System::Single _VolPreVal_postExposure; // 0x138
		::System::Boolean _VolPreVal_contrast_overrideState; // 0x13C
		::System::Byte _padding4[0x3];
		::System::Single _VolPreVal_contrast; // 0x140
		::System::Boolean _VolPreVal_colorFilter_overrideState; // 0x144
		::System::Byte _padding5[0x3];
		::UnityEngine::Color _VolPreVal_colorFilter; // 0x148
		::System::Boolean _VolPreVal_hueShift_overrideState; // 0x158
		::System::Byte _padding6[0x3];
		::System::Single _VolPreVal_hueShift; // 0x15C
		::System::Boolean _VolPreVal_saturation_overrideState; // 0x160
		::System::Byte _padding7[0x3];
		::System::Single _VolPreVal_saturation; // 0x164
		::System::Boolean _VolPreVal_desaturate_overrideState; // 0x168
		::System::Byte _padding8[0x3];
		::System::Single _VolPreVal_desaturate; // 0x16C
		::System::Boolean _VolPreVal_applyLutToSkybox_overrideState; // 0x170
		::System::Boolean _VolPreVal_applyLutToSkybox; // 0x171
		::System::Boolean _VolPreVal_skySaturation_overrideState; // 0x172
		::System::Byte _padding9[0x1];
		::System::Single _VolPreVal_skySaturation; // 0x174
		::System::Boolean _VolPreVal_skyContrast_overrideState; // 0x178
		::System::Byte _padding10[0x3];
		::System::Single _VolPreVal_skyContrast; // 0x17C
		::System::Boolean _VolPreVal_sceneExposure_overrideState; // 0x180
		::System::Byte _padding11[0x3];
		::System::Single _VolPreVal_sceneExposure; // 0x184
		::System::Boolean _VolPreVal_characterExposure_overrideState; // 0x188
		::System::Byte _padding12[0x3];
		::System::Single _VolPreVal_characterExposure; // 0x18C
		::System::Boolean _VolPreVal_skyboxExposure_overrideState; // 0x190
		::System::Byte _padding13[0x3];
		::System::Single _VolPreVal_skyboxExposure; // 0x194
		::System::Boolean _VolPreVal_FXLutTexture_overrideState; // 0x198
		::System::Byte _padding14[0x7];
		::UnityEngine::Texture* _VolPreVal_FXLutTexture; // 0x1A0
		::System::Boolean _VolPreVal_FXExposure_overrideState; // 0x1A8
		::System::Byte _padding15[0x3];
		::System::Single _VolPreVal_FXExposure; // 0x1AC
		::System::Single _TimelineCurveFirstVal_postExposure; // 0x1B0
		::System::Single _TimelineCurveLastVal_postExposure; // 0x1B4
		::System::Single _TimelineCurveFirstVal_contrast; // 0x1B8
		::System::Single _TimelineCurveLastVal_contrast; // 0x1BC
		::System::Single _TimelineCurveFirstVal_hueShift; // 0x1C0
		::System::Single _TimelineCurveLastVal_hueShift; // 0x1C4
		::System::Single _TimelineCurveFirstVal_saturation; // 0x1C8
		::System::Single _TimelineCurveLastVal_saturation; // 0x1CC
		::System::Single _TimelineCurveFirstVal_desaturate; // 0x1D0
		::System::Single _TimelineCurveLastVal_desaturate; // 0x1D4
		::System::Boolean _TimelineCurveFirstVal_applyLutToSkybox; // 0x1D8
		::System::Boolean _TimelineCurveLastVal_applyLutToSkybox; // 0x1D9
		::System::Byte _padding16[0x2];
		::System::Single _TimelineCurveFirstVal_skySaturation; // 0x1DC
		::System::Single _TimelineCurveLastVal_skySaturation; // 0x1E0
		::System::Single _TimelineCurveFirstVal_skyContrast; // 0x1E4
		::System::Single _TimelineCurveLastVal_skyContrast; // 0x1E8
		::System::Single _TimelineCurveFirstVal_sceneExposure; // 0x1EC
		::System::Single _TimelineCurveLastVal_sceneExposure; // 0x1F0
		::System::Single _TimelineCurveFirstVal_characterExposure; // 0x1F4
		::System::Single _TimelineCurveLastVal_characterExposure; // 0x1F8
		::System::Single _TimelineCurveFirstVal_skyboxExposure; // 0x1FC
		::System::Single _TimelineCurveLastVal_skyboxExposure; // 0x200
		::System::Single _TimelineCurveFirstVal_FXExposure; // 0x204
		::System::Single _TimelineCurveLastVal_FXExposure; // 0x208
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_UseSceneDesaturateMask_FieldHandleType; // 0x20C
		::System::Boolean ESPP_UseSceneDesaturateMask; // 0x210
		::System::Byte _padding17[0x3];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_postExposure_FieldHandleType; // 0x214
		::System::Boolean ESPP_postExposure_UseIt; // 0x218
		::System::Byte _padding18[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_postExposure; // 0x220
		::System::Boolean ESPP_postExposure_EnableFade; // 0x228
		::System::Boolean ESPP_postExposure_EnableOverrideDefaultValue; // 0x229
		::System::Byte _padding19[0x2];
		::System::Single ESPP_postExposure_OverrideDefaultValue; // 0x22C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_contrast_FieldHandleType; // 0x230
		::System::Boolean ESPP_contrast_UseIt; // 0x234
		::System::Byte _padding20[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_contrast; // 0x238
		::System::Boolean ESPP_contrast_EnableFade; // 0x240
		::System::Boolean ESPP_contrast_EnableOverrideDefaultValue; // 0x241
		::System::Byte _padding21[0x2];
		::System::Single ESPP_contrast_OverrideDefaultValue; // 0x244
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_colorFilter_FieldHandleType; // 0x248
		::UnityEngine::Color ESPP_colorFilter; // 0x24C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hueShift_FieldHandleType; // 0x25C
		::System::Boolean ESPP_hueShift_UseIt; // 0x260
		::System::Byte _padding22[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_hueShift; // 0x268
		::System::Boolean ESPP_hueShift_EnableFade; // 0x270
		::System::Boolean ESPP_hueShift_EnableOverrideDefaultValue; // 0x271
		::System::Byte _padding23[0x2];
		::System::Single ESPP_hueShift_OverrideDefaultValue; // 0x274
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_saturation_FieldHandleType; // 0x278
		::System::Boolean ESPP_saturation_UseIt; // 0x27C
		::System::Byte _padding24[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_saturation; // 0x280
		::System::Boolean ESPP_saturation_EnableFade; // 0x288
		::System::Boolean ESPP_saturation_EnableOverrideDefaultValue; // 0x289
		::System::Byte _padding25[0x2];
		::System::Single ESPP_saturation_OverrideDefaultValue; // 0x28C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_desaturate_FieldHandleType; // 0x290
		::System::Boolean ESPP_desaturate_UseIt; // 0x294
		::System::Byte _padding26[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_desaturate; // 0x298
		::System::Boolean ESPP_desaturate_EnableFade; // 0x2A0
		::System::Boolean ESPP_desaturate_EnableOverrideDefaultValue; // 0x2A1
		::System::Byte _padding27[0x2];
		::System::Single ESPP_desaturate_OverrideDefaultValue; // 0x2A4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_applyLutToSkybox_FieldHandleType; // 0x2A8
		::System::Boolean ESPP_applyLutToSkybox_UseIt; // 0x2AC
		::System::Byte _padding28[0x3];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_applyLutToSkybox; // 0x2B0
		::System::Boolean ESPP_applyLutToSkybox_EnableFade; // 0x2B8
		::System::Boolean ESPP_applyLutToSkybox_EnableOverrideDefaultValue; // 0x2B9
		::System::Boolean ESPP_applyLutToSkybox_OverrideDefaultValue; // 0x2BA
		::System::Byte _padding29[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_skySaturation_FieldHandleType; // 0x2BC
		::System::Boolean ESPP_skySaturation_UseIt; // 0x2C0
		::System::Byte _padding30[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_skySaturation; // 0x2C8
		::System::Boolean ESPP_skySaturation_EnableFade; // 0x2D0
		::System::Boolean ESPP_skySaturation_EnableOverrideDefaultValue; // 0x2D1
		::System::Byte _padding31[0x2];
		::System::Single ESPP_skySaturation_OverrideDefaultValue; // 0x2D4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_skyContrast_FieldHandleType; // 0x2D8
		::System::Boolean ESPP_skyContrast_UseIt; // 0x2DC
		::System::Byte _padding32[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_skyContrast; // 0x2E0
		::System::Boolean ESPP_skyContrast_EnableFade; // 0x2E8
		::System::Boolean ESPP_skyContrast_EnableOverrideDefaultValue; // 0x2E9
		::System::Byte _padding33[0x2];
		::System::Single ESPP_skyContrast_OverrideDefaultValue; // 0x2EC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sceneExposure_FieldHandleType; // 0x2F0
		::System::Boolean ESPP_sceneExposure_UseIt; // 0x2F4
		::System::Byte _padding34[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_sceneExposure; // 0x2F8
		::System::Boolean ESPP_sceneExposure_EnableFade; // 0x300
		::System::Boolean ESPP_sceneExposure_EnableOverrideDefaultValue; // 0x301
		::System::Byte _padding35[0x2];
		::System::Single ESPP_sceneExposure_OverrideDefaultValue; // 0x304
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterExposure_FieldHandleType; // 0x308
		::System::Boolean ESPP_characterExposure_UseIt; // 0x30C
		::System::Byte _padding36[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_characterExposure; // 0x310
		::System::Boolean ESPP_characterExposure_EnableFade; // 0x318
		::System::Boolean ESPP_characterExposure_EnableOverrideDefaultValue; // 0x319
		::System::Byte _padding37[0x2];
		::System::Single ESPP_characterExposure_OverrideDefaultValue; // 0x31C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_skyboxExposure_FieldHandleType; // 0x320
		::System::Boolean ESPP_skyboxExposure_UseIt; // 0x324
		::System::Byte _padding38[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_skyboxExposure; // 0x328
		::System::Boolean ESPP_skyboxExposure_EnableFade; // 0x330
		::System::Boolean ESPP_skyboxExposure_EnableOverrideDefaultValue; // 0x331
		::System::Byte _padding39[0x2];
		::System::Single ESPP_skyboxExposure_OverrideDefaultValue; // 0x334
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_FXLutTexture_FieldHandleType; // 0x338
		::System::Byte _padding40[0x4];
		::UnityEngine::Texture* ESPP_FXLutTexture; // 0x340
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_FXExposure_FieldHandleType; // 0x348
		::System::Boolean ESPP_FXExposure_UseIt; // 0x34C
		::System::Byte _padding41[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_FXExposure; // 0x350
		::System::Boolean ESPP_FXExposure_EnableFade; // 0x358
		::System::Boolean ESPP_FXExposure_EnableOverrideDefaultValue; // 0x359
		::System::Byte _padding42[0x2];
		::System::Single ESPP_FXExposure_OverrideDefaultValue; // 0x35C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS__CTOR_OFFSET))(this);
		}

		::System::Void NNEGPFCPCAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_NNEGPFCPCAB_OFFSET))(this);
		}

		::System::Void IEFBPLNILIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_IEFBPLNILIE_OFFSET))(this);
		}

		::System::Void AJIPNBANCOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_AJIPNBANCOC_OFFSET))(this);
		}

		::System::Void AAOGMJFNGIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_AAOGMJFNGIB_OFFSET))(this);
		}

		::System::Void BAHGDCGIEKL(::System::Single PBKKBBHOCLC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_BAHGDCGIEKL_OFFSET))(this, PBKKBBHOCLC);
		}

		::System::Void ALJEEEAPCBH(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_ALJEEEAPCBH_OFFSET))(this, HIIOCANBKAM);
		}

		::System::Void AFPCLLAALBH(::System::Single FDLDIDFMCIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_AFPCLLAALBH_OFFSET))(this, FDLDIDFMCIG);
		}

		::System::Void PEDOJDBBGPC(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_PEDOJDBBGPC_OFFSET))(this, AHAFNGEDPLI);
		}

		::System::Void ONPGLGIFOJJ(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_ONPGLGIFOJJ_OFFSET))(this, AHAFNGEDPLI);
		}
	};
}
