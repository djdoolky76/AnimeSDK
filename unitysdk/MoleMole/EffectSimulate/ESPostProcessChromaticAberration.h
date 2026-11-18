#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class ConfigChromaticAberrations; }
namespace MoleMole::EffectSimulate { class ColorKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector2KeyframeCurve; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_AAOGMJFNGIB_OFFSET UNITYSDK_OFFSET(0x19B382B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_AFPCLLAALBH_OFFSET UNITYSDK_OFFSET(0x19B3BB30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_AJIPNBANCOC_OFFSET UNITYSDK_OFFSET(0x19B38010)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_ALJEEEAPCBH_OFFSET UNITYSDK_OFFSET(0x19B394E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_BAHGDCGIEKL_OFFSET UNITYSDK_OFFSET(0x19B38D90)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_IEFBPLNILIE_OFFSET UNITYSDK_OFFSET(0x19B38000)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_NNEGPFCPCAB_OFFSET UNITYSDK_OFFSET(0x19B37A60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_ONPGLGIFOJJ_OFFSET UNITYSDK_OFFSET(0x19B3D860)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_PEDOJDBBGPC_OFFSET UNITYSDK_OFFSET(0x19B3CA80)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION__CTOR_OFFSET UNITYSDK_OFFSET(0x19B3E640)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessChromaticAberration_TypeDefinitionIndex = 83213;

	class ESPostProcessChromaticAberration
	{
	public:
		::MoleMole::Config::ConfigChromaticAberrations* m_stAsset; // 0xB0
		::System::Single _DefaultIntensity; // 0xB8
		::System::Single _VolDefault_intensity; // 0xBC
		::UnityEngine::Vector2 _VolDefault_center; // 0xC0
		::System::Single _VolDefault_power; // 0xC8
		::UnityEngine::Color _VolDefault_ColorR; // 0xCC
		::System::Single _VolDefault_PowerR; // 0xDC
		::UnityEngine::Color _VolDefault_ColorG; // 0xE0
		::System::Single _VolDefault_PowerG; // 0xF0
		::UnityEngine::Color _VolDefault_ColorB; // 0xF4
		::System::Single _VolDefault_PowerB; // 0x104
		::System::Boolean _VolPreVal_intensity_overrideState; // 0x108
		::System::Byte _padding0[0x3];
		::System::Single _VolPreVal_intensity; // 0x10C
		::System::Boolean _VolPreVal_center_overrideState; // 0x110
		::System::Byte _padding1[0x3];
		::UnityEngine::Vector2 _VolPreVal_center; // 0x114
		::System::Boolean _VolPreVal_power_overrideState; // 0x11C
		::System::Byte _padding2[0x3];
		::System::Single _VolPreVal_power; // 0x120
		::System::Boolean _VolPreVal_ColorR_overrideState; // 0x124
		::System::Byte _padding3[0x3];
		::UnityEngine::Color _VolPreVal_ColorR; // 0x128
		::System::Boolean _VolPreVal_PowerR_overrideState; // 0x138
		::System::Byte _padding4[0x3];
		::System::Single _VolPreVal_PowerR; // 0x13C
		::System::Boolean _VolPreVal_ColorG_overrideState; // 0x140
		::System::Byte _padding5[0x3];
		::UnityEngine::Color _VolPreVal_ColorG; // 0x144
		::System::Boolean _VolPreVal_PowerG_overrideState; // 0x154
		::System::Byte _padding6[0x3];
		::System::Single _VolPreVal_PowerG; // 0x158
		::System::Boolean _VolPreVal_ColorB_overrideState; // 0x15C
		::System::Byte _padding7[0x3];
		::UnityEngine::Color _VolPreVal_ColorB; // 0x160
		::System::Boolean _VolPreVal_PowerB_overrideState; // 0x170
		::System::Byte _padding8[0x3];
		::System::Single _VolPreVal_PowerB; // 0x174
		::System::Single _TimelineCurveFirstVal_intensity; // 0x178
		::System::Single _TimelineCurveLastVal_intensity; // 0x17C
		::UnityEngine::Vector2 _TimelineCurveFirstVal_center; // 0x180
		::UnityEngine::Vector2 _TimelineCurveLastVal_center; // 0x188
		::System::Single _TimelineCurveFirstVal_power; // 0x190
		::System::Single _TimelineCurveLastVal_power; // 0x194
		::UnityEngine::Color _TimelineCurveFirstVal_ColorR; // 0x198
		::UnityEngine::Color _TimelineCurveLastVal_ColorR; // 0x1A8
		::System::Single _TimelineCurveFirstVal_PowerR; // 0x1B8
		::System::Single _TimelineCurveLastVal_PowerR; // 0x1BC
		::UnityEngine::Color _TimelineCurveFirstVal_ColorG; // 0x1C0
		::UnityEngine::Color _TimelineCurveLastVal_ColorG; // 0x1D0
		::System::Single _TimelineCurveFirstVal_PowerG; // 0x1E0
		::System::Single _TimelineCurveLastVal_PowerG; // 0x1E4
		::UnityEngine::Color _TimelineCurveFirstVal_ColorB; // 0x1E8
		::UnityEngine::Color _TimelineCurveLastVal_ColorB; // 0x1F8
		::System::Single _TimelineCurveFirstVal_PowerB; // 0x208
		::System::Single _TimelineCurveLastVal_PowerB; // 0x20C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_intensity_FieldHandleType; // 0x210
		::System::Boolean ESPP_intensity_UseIt; // 0x214
		::System::Byte _padding9[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_intensity; // 0x218
		::System::Boolean ESPP_intensity_EnableFade; // 0x220
		::System::Boolean ESPP_intensity_EnableOverrideDefaultValue; // 0x221
		::System::Byte _padding10[0x2];
		::System::Single ESPP_intensity_OverrideDefaultValue; // 0x224
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_center_FieldHandleType; // 0x228
		::System::Boolean ESPP_center_UseIt; // 0x22C
		::System::Byte _padding11[0x3];
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_center; // 0x230
		::System::Boolean ESPP_center_EnableFade; // 0x238
		::System::Boolean ESPP_center_EnableOverrideDefaultValue; // 0x239
		::System::Byte _padding12[0x2];
		::UnityEngine::Vector2 ESPP_center_OverrideDefaultValue; // 0x23C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_power_FieldHandleType; // 0x244
		::System::Boolean ESPP_power_UseIt; // 0x248
		::System::Byte _padding13[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_power; // 0x250
		::System::Boolean ESPP_power_EnableFade; // 0x258
		::System::Boolean ESPP_power_EnableOverrideDefaultValue; // 0x259
		::System::Byte _padding14[0x2];
		::System::Single ESPP_power_OverrideDefaultValue; // 0x25C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_ColorR_FieldHandleType; // 0x260
		::System::Boolean ESPP_ColorR_UseIt; // 0x264
		::System::Byte _padding15[0x3];
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_ColorR; // 0x268
		::System::Boolean ESPP_ColorR_EnableFade; // 0x270
		::System::Boolean ESPP_ColorR_EnableOverrideDefaultValue; // 0x271
		::System::Byte _padding16[0x2];
		::UnityEngine::Color ESPP_ColorR_OverrideDefaultValue; // 0x274
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_PowerR_FieldHandleType; // 0x284
		::System::Boolean ESPP_PowerR_UseIt; // 0x288
		::System::Byte _padding17[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_PowerR; // 0x290
		::System::Boolean ESPP_PowerR_EnableFade; // 0x298
		::System::Boolean ESPP_PowerR_EnableOverrideDefaultValue; // 0x299
		::System::Byte _padding18[0x2];
		::System::Single ESPP_PowerR_OverrideDefaultValue; // 0x29C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_ColorG_FieldHandleType; // 0x2A0
		::System::Boolean ESPP_ColorG_UseIt; // 0x2A4
		::System::Byte _padding19[0x3];
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_ColorG; // 0x2A8
		::System::Boolean ESPP_ColorG_EnableFade; // 0x2B0
		::System::Boolean ESPP_ColorG_EnableOverrideDefaultValue; // 0x2B1
		::System::Byte _padding20[0x2];
		::UnityEngine::Color ESPP_ColorG_OverrideDefaultValue; // 0x2B4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_PowerG_FieldHandleType; // 0x2C4
		::System::Boolean ESPP_PowerG_UseIt; // 0x2C8
		::System::Byte _padding21[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_PowerG; // 0x2D0
		::System::Boolean ESPP_PowerG_EnableFade; // 0x2D8
		::System::Boolean ESPP_PowerG_EnableOverrideDefaultValue; // 0x2D9
		::System::Byte _padding22[0x2];
		::System::Single ESPP_PowerG_OverrideDefaultValue; // 0x2DC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_ColorB_FieldHandleType; // 0x2E0
		::System::Boolean ESPP_ColorB_UseIt; // 0x2E4
		::System::Byte _padding23[0x3];
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_ColorB; // 0x2E8
		::System::Boolean ESPP_ColorB_EnableFade; // 0x2F0
		::System::Boolean ESPP_ColorB_EnableOverrideDefaultValue; // 0x2F1
		::System::Byte _padding24[0x2];
		::UnityEngine::Color ESPP_ColorB_OverrideDefaultValue; // 0x2F4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_PowerB_FieldHandleType; // 0x304
		::System::Boolean ESPP_PowerB_UseIt; // 0x308
		::System::Byte _padding25[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_PowerB; // 0x310
		::System::Boolean ESPP_PowerB_EnableFade; // 0x318
		::System::Boolean ESPP_PowerB_EnableOverrideDefaultValue; // 0x319
		::System::Byte _padding26[0x2];
		::System::Single ESPP_PowerB_OverrideDefaultValue; // 0x31C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION__CTOR_OFFSET))(this);
		}

		::System::Void NNEGPFCPCAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_NNEGPFCPCAB_OFFSET))(this);
		}

		::System::Void IEFBPLNILIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_IEFBPLNILIE_OFFSET))(this);
		}

		::System::Void AJIPNBANCOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_AJIPNBANCOC_OFFSET))(this);
		}

		::System::Void AAOGMJFNGIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_AAOGMJFNGIB_OFFSET))(this);
		}

		::System::Void BAHGDCGIEKL(::System::Single PBKKBBHOCLC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_BAHGDCGIEKL_OFFSET))(this, PBKKBBHOCLC);
		}

		::System::Void ALJEEEAPCBH(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_ALJEEEAPCBH_OFFSET))(this, HIIOCANBKAM);
		}

		::System::Void AFPCLLAALBH(::System::Single FDLDIDFMCIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_AFPCLLAALBH_OFFSET))(this, FDLDIDFMCIG);
		}

		::System::Void PEDOJDBBGPC(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_PEDOJDBBGPC_OFFSET))(this, AHAFNGEDPLI);
		}

		::System::Void ONPGLGIFOJJ(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHROMATICABERRATION_ONPGLGIFOJJ_OFFSET))(this, AHAFNGEDPLI);
		}
	};
}
