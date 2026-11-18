#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"

namespace MoleMole::Config { class ConfigEntityNapCapsuleAOLightingEffects; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_AAOGMJFNGIB_OFFSET UNITYSDK_OFFSET(0x142D0F10)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_AFPCLLAALBH_OFFSET UNITYSDK_OFFSET(0x142D2EF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_AJIPNBANCOC_OFFSET UNITYSDK_OFFSET(0x142D0D10)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_ALJEEEAPCBH_OFFSET UNITYSDK_OFFSET(0x142D1970)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_BAHGDCGIEKL_OFFSET UNITYSDK_OFFSET(0x142D15E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_IEFBPLNILIE_OFFSET UNITYSDK_OFFSET(0x142D0D00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_NNEGPFCPCAB_OFFSET UNITYSDK_OFFSET(0x142D0940)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_ONPGLGIFOJJ_OFFSET UNITYSDK_OFFSET(0x142D40D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_PEDOJDBBGPC_OFFSET UNITYSDK_OFFSET(0x142D3860)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING__CTOR_OFFSET UNITYSDK_OFFSET(0x142D4940)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessNapCapsuleAOLighting_TypeDefinitionIndex = 43068;

	class ESPostProcessNapCapsuleAOLighting
	{
	public:
		::MoleMole::Config::ConfigEntityNapCapsuleAOLightingEffects* m_stAsset; // 0xB0
		::System::Boolean _VolDefault_enableCapsuleAO; // 0xB8
		::System::Byte _padding0[0x3];
		::System::Single _VolDefault_ambientIntensity; // 0xBC
		::System::Single _VolDefault_shadowIntensity; // 0xC0
		::System::Single _VolDefault_shadowSharpness; // 0xC4
		::System::Single _VolDefault_luminanceBlend; // 0xC8
		::System::Boolean _VolPreVal_enableCapsuleAO_overrideState; // 0xCC
		::System::Boolean _VolPreVal_enableCapsuleAO; // 0xCD
		::System::Boolean _VolPreVal_ambientIntensity_overrideState; // 0xCE
		::System::Byte _padding1[0x1];
		::System::Single _VolPreVal_ambientIntensity; // 0xD0
		::System::Boolean _VolPreVal_shadowIntensity_overrideState; // 0xD4
		::System::Byte _padding2[0x3];
		::System::Single _VolPreVal_shadowIntensity; // 0xD8
		::System::Boolean _VolPreVal_shadowSharpness_overrideState; // 0xDC
		::System::Byte _padding3[0x3];
		::System::Single _VolPreVal_shadowSharpness; // 0xE0
		::System::Boolean _VolPreVal_luminanceBlend_overrideState; // 0xE4
		::System::Byte _padding4[0x3];
		::System::Single _VolPreVal_luminanceBlend; // 0xE8
		::System::Boolean _TimelineCurveFirstVal_enableCapsuleAO; // 0xEC
		::System::Boolean _TimelineCurveLastVal_enableCapsuleAO; // 0xED
		::System::Byte _padding5[0x2];
		::System::Single _TimelineCurveFirstVal_ambientIntensity; // 0xF0
		::System::Single _TimelineCurveLastVal_ambientIntensity; // 0xF4
		::System::Single _TimelineCurveFirstVal_shadowIntensity; // 0xF8
		::System::Single _TimelineCurveLastVal_shadowIntensity; // 0xFC
		::System::Single _TimelineCurveFirstVal_shadowSharpness; // 0x100
		::System::Single _TimelineCurveLastVal_shadowSharpness; // 0x104
		::System::Single _TimelineCurveFirstVal_luminanceBlend; // 0x108
		::System::Single _TimelineCurveLastVal_luminanceBlend; // 0x10C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_enableCapsuleAO_FieldHandleType; // 0x110
		::System::Boolean ESPP_enableCapsuleAO_UseIt; // 0x114
		::System::Byte _padding6[0x3];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_enableCapsuleAO; // 0x118
		::System::Boolean ESPP_enableCapsuleAO_EnableFade; // 0x120
		::System::Boolean ESPP_enableCapsuleAO_EnableOverrideDefaultValue; // 0x121
		::System::Boolean ESPP_enableCapsuleAO_OverrideDefaultValue; // 0x122
		::System::Byte _padding7[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_ambientIntensity_FieldHandleType; // 0x124
		::System::Boolean ESPP_ambientIntensity_UseIt; // 0x128
		::System::Byte _padding8[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_ambientIntensity; // 0x130
		::System::Boolean ESPP_ambientIntensity_EnableFade; // 0x138
		::System::Boolean ESPP_ambientIntensity_EnableOverrideDefaultValue; // 0x139
		::System::Byte _padding9[0x2];
		::System::Single ESPP_ambientIntensity_OverrideDefaultValue; // 0x13C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_shadowIntensity_FieldHandleType; // 0x140
		::System::Boolean ESPP_shadowIntensity_UseIt; // 0x144
		::System::Byte _padding10[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_shadowIntensity; // 0x148
		::System::Boolean ESPP_shadowIntensity_EnableFade; // 0x150
		::System::Boolean ESPP_shadowIntensity_EnableOverrideDefaultValue; // 0x151
		::System::Byte _padding11[0x2];
		::System::Single ESPP_shadowIntensity_OverrideDefaultValue; // 0x154
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_shadowSharpness_FieldHandleType; // 0x158
		::System::Boolean ESPP_shadowSharpness_UseIt; // 0x15C
		::System::Byte _padding12[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_shadowSharpness; // 0x160
		::System::Boolean ESPP_shadowSharpness_EnableFade; // 0x168
		::System::Boolean ESPP_shadowSharpness_EnableOverrideDefaultValue; // 0x169
		::System::Byte _padding13[0x2];
		::System::Single ESPP_shadowSharpness_OverrideDefaultValue; // 0x16C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_luminanceBlend_FieldHandleType; // 0x170
		::System::Boolean ESPP_luminanceBlend_UseIt; // 0x174
		::System::Byte _padding14[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_luminanceBlend; // 0x178
		::System::Boolean ESPP_luminanceBlend_EnableFade; // 0x180
		::System::Boolean ESPP_luminanceBlend_EnableOverrideDefaultValue; // 0x181
		::System::Byte _padding15[0x2];
		::System::Single ESPP_luminanceBlend_OverrideDefaultValue; // 0x184

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING__CTOR_OFFSET))(this);
		}

		::System::Void NNEGPFCPCAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_NNEGPFCPCAB_OFFSET))(this);
		}

		::System::Void IEFBPLNILIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_IEFBPLNILIE_OFFSET))(this);
		}

		::System::Void AJIPNBANCOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_AJIPNBANCOC_OFFSET))(this);
		}

		::System::Void AAOGMJFNGIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_AAOGMJFNGIB_OFFSET))(this);
		}

		::System::Void BAHGDCGIEKL(::System::Single PBKKBBHOCLC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_BAHGDCGIEKL_OFFSET))(this, PBKKBBHOCLC);
		}

		::System::Void ALJEEEAPCBH(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_ALJEEEAPCBH_OFFSET))(this, HIIOCANBKAM);
		}

		::System::Void AFPCLLAALBH(::System::Single FDLDIDFMCIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_AFPCLLAALBH_OFFSET))(this, FDLDIDFMCIG);
		}

		::System::Void PEDOJDBBGPC(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_PEDOJDBBGPC_OFFSET))(this, AHAFNGEDPLI);
		}

		::System::Void ONPGLGIFOJJ(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPCAPSULEAOLIGHTING_ONPGLGIFOJJ_OFFSET))(this, AHAFNGEDPLI);
		}
	};
}
