#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"

namespace MoleMole::Config { class ConfigGaussianBlurEffects; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_AAOGMJFNGIB_OFFSET UNITYSDK_OFFSET(0x190E3260)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_AFPCLLAALBH_OFFSET UNITYSDK_OFFSET(0x190E5ED0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_AJIPNBANCOC_OFFSET UNITYSDK_OFFSET(0x190E3020)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_ALJEEEAPCBH_OFFSET UNITYSDK_OFFSET(0x190E4020)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_BAHGDCGIEKL_OFFSET UNITYSDK_OFFSET(0x190E3C90)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_IEFBPLNILIE_OFFSET UNITYSDK_OFFSET(0x190E3010)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_NNEGPFCPCAB_OFFSET UNITYSDK_OFFSET(0x190E2C50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_ONPGLGIFOJJ_OFFSET UNITYSDK_OFFSET(0x190E74A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_PEDOJDBBGPC_OFFSET UNITYSDK_OFFSET(0x190E6B80)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR__CTOR_OFFSET UNITYSDK_OFFSET(0x190E7DC0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessGaussianBlur_TypeDefinitionIndex = 52490;

	class ESPostProcessGaussianBlur
	{
	public:
		::MoleMole::Config::ConfigGaussianBlurEffects* m_stAsset; // 0xB0
		::System::Int32 _VolDefault_downSample; // 0xB8
		::System::Single _VolDefault_radius; // 0xBC
		::UnityEngine::Texture* _VolDefault_mask; // 0xC0
		::System::Single _VolDefault_maskTiling; // 0xC8
		::System::Single _VolDefault_maskRotation; // 0xCC
		::System::Boolean _VolDefault_maskDebug; // 0xD0
		::System::Boolean _VolDefault_enableBlurWithMonsterMask; // 0xD1
		::System::Boolean _VolPreVal_downSample_overrideState; // 0xD2
		::System::Byte _padding0[0x1];
		::System::Int32 _VolPreVal_downSample; // 0xD4
		::System::Boolean _VolPreVal_radius_overrideState; // 0xD8
		::System::Byte _padding1[0x3];
		::System::Single _VolPreVal_radius; // 0xDC
		::System::Boolean _VolPreVal_mask_overrideState; // 0xE0
		::System::Byte _padding2[0x7];
		::UnityEngine::Texture* _VolPreVal_mask; // 0xE8
		::System::Boolean _VolPreVal_maskTiling_overrideState; // 0xF0
		::System::Byte _padding3[0x3];
		::System::Single _VolPreVal_maskTiling; // 0xF4
		::System::Boolean _VolPreVal_maskRotation_overrideState; // 0xF8
		::System::Byte _padding4[0x3];
		::System::Single _VolPreVal_maskRotation; // 0xFC
		::System::Boolean _VolPreVal_maskDebug_overrideState; // 0x100
		::System::Boolean _VolPreVal_maskDebug; // 0x101
		::System::Boolean _VolPreVal_enableBlurWithMonsterMask_overrideState; // 0x102
		::System::Boolean _VolPreVal_enableBlurWithMonsterMask; // 0x103
		::System::Single _TimelineCurveFirstVal_radius; // 0x104
		::System::Single _TimelineCurveLastVal_radius; // 0x108
		::System::Single _TimelineCurveFirstVal_maskTiling; // 0x10C
		::System::Single _TimelineCurveLastVal_maskTiling; // 0x110
		::System::Single _TimelineCurveFirstVal_maskRotation; // 0x114
		::System::Single _TimelineCurveLastVal_maskRotation; // 0x118
		::System::Boolean _TimelineCurveFirstVal_maskDebug; // 0x11C
		::System::Boolean _TimelineCurveLastVal_maskDebug; // 0x11D
		::System::Boolean _TimelineCurveFirstVal_enableBlurWithMonsterMask; // 0x11E
		::System::Boolean _TimelineCurveLastVal_enableBlurWithMonsterMask; // 0x11F
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_downSample_FieldHandleType; // 0x120
		::System::Int32 ESPP_downSample; // 0x124
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_radius_FieldHandleType; // 0x128
		::System::Boolean ESPP_radius_UseIt; // 0x12C
		::System::Byte _padding5[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_radius; // 0x130
		::System::Boolean ESPP_radius_EnableFade; // 0x138
		::System::Boolean ESPP_radius_EnableOverrideDefaultValue; // 0x139
		::System::Byte _padding6[0x2];
		::System::Single ESPP_radius_OverrideDefaultValue; // 0x13C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_mask_FieldHandleType; // 0x140
		::System::Byte _padding7[0x4];
		::UnityEngine::Texture* ESPP_mask; // 0x148
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_maskTiling_FieldHandleType; // 0x150
		::System::Boolean ESPP_maskTiling_UseIt; // 0x154
		::System::Byte _padding8[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_maskTiling; // 0x158
		::System::Boolean ESPP_maskTiling_EnableFade; // 0x160
		::System::Boolean ESPP_maskTiling_EnableOverrideDefaultValue; // 0x161
		::System::Byte _padding9[0x2];
		::System::Single ESPP_maskTiling_OverrideDefaultValue; // 0x164
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_maskRotation_FieldHandleType; // 0x168
		::System::Boolean ESPP_maskRotation_UseIt; // 0x16C
		::System::Byte _padding10[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_maskRotation; // 0x170
		::System::Boolean ESPP_maskRotation_EnableFade; // 0x178
		::System::Boolean ESPP_maskRotation_EnableOverrideDefaultValue; // 0x179
		::System::Byte _padding11[0x2];
		::System::Single ESPP_maskRotation_OverrideDefaultValue; // 0x17C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_maskDebug_FieldHandleType; // 0x180
		::System::Boolean ESPP_maskDebug_UseIt; // 0x184
		::System::Byte _padding12[0x3];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_maskDebug; // 0x188
		::System::Boolean ESPP_maskDebug_EnableFade; // 0x190
		::System::Boolean ESPP_maskDebug_EnableOverrideDefaultValue; // 0x191
		::System::Boolean ESPP_maskDebug_OverrideDefaultValue; // 0x192
		::System::Byte _padding13[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_enableBlurWithMonsterMask_FieldHandleType; // 0x194
		::System::Boolean ESPP_enableBlurWithMonsterMask_UseIt; // 0x198
		::System::Byte _padding14[0x7];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_enableBlurWithMonsterMask; // 0x1A0
		::System::Boolean ESPP_enableBlurWithMonsterMask_EnableFade; // 0x1A8
		::System::Boolean ESPP_enableBlurWithMonsterMask_EnableOverrideDefaultValue; // 0x1A9
		::System::Boolean ESPP_enableBlurWithMonsterMask_OverrideDefaultValue; // 0x1AA

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR__CTOR_OFFSET))(this);
		}

		::System::Void NNEGPFCPCAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_NNEGPFCPCAB_OFFSET))(this);
		}

		::System::Void IEFBPLNILIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_IEFBPLNILIE_OFFSET))(this);
		}

		::System::Void AJIPNBANCOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_AJIPNBANCOC_OFFSET))(this);
		}

		::System::Void AAOGMJFNGIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_AAOGMJFNGIB_OFFSET))(this);
		}

		::System::Void BAHGDCGIEKL(::System::Single PBKKBBHOCLC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_BAHGDCGIEKL_OFFSET))(this, PBKKBBHOCLC);
		}

		::System::Void ALJEEEAPCBH(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_ALJEEEAPCBH_OFFSET))(this, HIIOCANBKAM);
		}

		::System::Void AFPCLLAALBH(::System::Single FDLDIDFMCIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_AFPCLLAALBH_OFFSET))(this, FDLDIDFMCIG);
		}

		::System::Void PEDOJDBBGPC(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_PEDOJDBBGPC_OFFSET))(this, AHAFNGEDPLI);
		}

		::System::Void ONPGLGIFOJJ(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_ONPGLGIFOJJ_OFFSET))(this, AHAFNGEDPLI);
		}
	};
}
