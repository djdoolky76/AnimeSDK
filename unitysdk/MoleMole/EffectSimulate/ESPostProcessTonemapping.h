#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/TonemappingMode.h"

namespace MoleMole::Config { class ConfigEntityTonemappingEffects; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_AAOGMJFNGIB_OFFSET UNITYSDK_OFFSET(0x1B49EBF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_AFPCLLAALBH_OFFSET UNITYSDK_OFFSET(0x1B4A1290)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_AJIPNBANCOC_OFFSET UNITYSDK_OFFSET(0x1B49E9A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_ALJEEEAPCBH_OFFSET UNITYSDK_OFFSET(0x1B49F840)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_BAHGDCGIEKL_OFFSET UNITYSDK_OFFSET(0x1B49F3F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_IEFBPLNILIE_OFFSET UNITYSDK_OFFSET(0x1B49E990)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_NNEGPFCPCAB_OFFSET UNITYSDK_OFFSET(0x1B49E550)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_ONPGLGIFOJJ_OFFSET UNITYSDK_OFFSET(0x1B4A26E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_PEDOJDBBGPC_OFFSET UNITYSDK_OFFSET(0x1B4A1D70)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4A3050)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessTonemapping_TypeDefinitionIndex = 43654;

	class ESPostProcessTonemapping
	{
	public:
		::MoleMole::Config::ConfigEntityTonemappingEffects* m_stAsset; // 0xB0
		::UnityEngine::NAPRenderPipeline0::TonemappingMode _VolDefault_mode; // 0xB8
		::System::Single _VolDefault_toeStrength; // 0xBC
		::System::Single _VolDefault_toeLength; // 0xC0
		::System::Single _VolDefault_shoulderStrength; // 0xC4
		::System::Single _VolDefault_shoulderLength; // 0xC8
		::System::Single _VolDefault_shoulderAngle; // 0xCC
		::System::Single _VolDefault_customGamma; // 0xD0
		::System::Boolean _VolPreVal_mode_overrideState; // 0xD4
		::System::Byte _padding0[0x3];
		::UnityEngine::NAPRenderPipeline0::TonemappingMode _VolPreVal_mode; // 0xD8
		::System::Boolean _VolPreVal_toeStrength_overrideState; // 0xDC
		::System::Byte _padding1[0x3];
		::System::Single _VolPreVal_toeStrength; // 0xE0
		::System::Boolean _VolPreVal_toeLength_overrideState; // 0xE4
		::System::Byte _padding2[0x3];
		::System::Single _VolPreVal_toeLength; // 0xE8
		::System::Boolean _VolPreVal_shoulderStrength_overrideState; // 0xEC
		::System::Byte _padding3[0x3];
		::System::Single _VolPreVal_shoulderStrength; // 0xF0
		::System::Boolean _VolPreVal_shoulderLength_overrideState; // 0xF4
		::System::Byte _padding4[0x3];
		::System::Single _VolPreVal_shoulderLength; // 0xF8
		::System::Boolean _VolPreVal_shoulderAngle_overrideState; // 0xFC
		::System::Byte _padding5[0x3];
		::System::Single _VolPreVal_shoulderAngle; // 0x100
		::System::Boolean _VolPreVal_customGamma_overrideState; // 0x104
		::System::Byte _padding6[0x3];
		::System::Single _VolPreVal_customGamma; // 0x108
		::System::Single _TimelineCurveFirstVal_toeStrength; // 0x10C
		::System::Single _TimelineCurveLastVal_toeStrength; // 0x110
		::System::Single _TimelineCurveFirstVal_toeLength; // 0x114
		::System::Single _TimelineCurveLastVal_toeLength; // 0x118
		::System::Single _TimelineCurveFirstVal_shoulderStrength; // 0x11C
		::System::Single _TimelineCurveLastVal_shoulderStrength; // 0x120
		::System::Single _TimelineCurveFirstVal_shoulderLength; // 0x124
		::System::Single _TimelineCurveLastVal_shoulderLength; // 0x128
		::System::Single _TimelineCurveFirstVal_shoulderAngle; // 0x12C
		::System::Single _TimelineCurveLastVal_shoulderAngle; // 0x130
		::System::Single _TimelineCurveFirstVal_customGamma; // 0x134
		::System::Single _TimelineCurveLastVal_customGamma; // 0x138
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_mode_FieldHandleType; // 0x13C
		::UnityEngine::NAPRenderPipeline0::TonemappingMode ESPP_mode; // 0x140
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_toeStrength_FieldHandleType; // 0x144
		::System::Boolean ESPP_toeStrength_UseIt; // 0x148
		::System::Byte _padding7[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_toeStrength; // 0x150
		::System::Boolean ESPP_toeStrength_EnableFade; // 0x158
		::System::Boolean ESPP_toeStrength_EnableOverrideDefaultValue; // 0x159
		::System::Byte _padding8[0x2];
		::System::Single ESPP_toeStrength_OverrideDefaultValue; // 0x15C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_toeLength_FieldHandleType; // 0x160
		::System::Boolean ESPP_toeLength_UseIt; // 0x164
		::System::Byte _padding9[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_toeLength; // 0x168
		::System::Boolean ESPP_toeLength_EnableFade; // 0x170
		::System::Boolean ESPP_toeLength_EnableOverrideDefaultValue; // 0x171
		::System::Byte _padding10[0x2];
		::System::Single ESPP_toeLength_OverrideDefaultValue; // 0x174
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_shoulderStrength_FieldHandleType; // 0x178
		::System::Boolean ESPP_shoulderStrength_UseIt; // 0x17C
		::System::Byte _padding11[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_shoulderStrength; // 0x180
		::System::Boolean ESPP_shoulderStrength_EnableFade; // 0x188
		::System::Boolean ESPP_shoulderStrength_EnableOverrideDefaultValue; // 0x189
		::System::Byte _padding12[0x2];
		::System::Single ESPP_shoulderStrength_OverrideDefaultValue; // 0x18C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_shoulderLength_FieldHandleType; // 0x190
		::System::Boolean ESPP_shoulderLength_UseIt; // 0x194
		::System::Byte _padding13[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_shoulderLength; // 0x198
		::System::Boolean ESPP_shoulderLength_EnableFade; // 0x1A0
		::System::Boolean ESPP_shoulderLength_EnableOverrideDefaultValue; // 0x1A1
		::System::Byte _padding14[0x2];
		::System::Single ESPP_shoulderLength_OverrideDefaultValue; // 0x1A4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_shoulderAngle_FieldHandleType; // 0x1A8
		::System::Boolean ESPP_shoulderAngle_UseIt; // 0x1AC
		::System::Byte _padding15[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_shoulderAngle; // 0x1B0
		::System::Boolean ESPP_shoulderAngle_EnableFade; // 0x1B8
		::System::Boolean ESPP_shoulderAngle_EnableOverrideDefaultValue; // 0x1B9
		::System::Byte _padding16[0x2];
		::System::Single ESPP_shoulderAngle_OverrideDefaultValue; // 0x1BC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_customGamma_FieldHandleType; // 0x1C0
		::System::Boolean ESPP_customGamma_UseIt; // 0x1C4
		::System::Byte _padding17[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_customGamma; // 0x1C8
		::System::Boolean ESPP_customGamma_EnableFade; // 0x1D0
		::System::Boolean ESPP_customGamma_EnableOverrideDefaultValue; // 0x1D1
		::System::Byte _padding18[0x2];
		::System::Single ESPP_customGamma_OverrideDefaultValue; // 0x1D4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING__CTOR_OFFSET))(this);
		}

		::System::Void NNEGPFCPCAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_NNEGPFCPCAB_OFFSET))(this);
		}

		::System::Void IEFBPLNILIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_IEFBPLNILIE_OFFSET))(this);
		}

		::System::Void AJIPNBANCOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_AJIPNBANCOC_OFFSET))(this);
		}

		::System::Void AAOGMJFNGIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_AAOGMJFNGIB_OFFSET))(this);
		}

		::System::Void BAHGDCGIEKL(::System::Single PBKKBBHOCLC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_BAHGDCGIEKL_OFFSET))(this, PBKKBBHOCLC);
		}

		::System::Void ALJEEEAPCBH(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_ALJEEEAPCBH_OFFSET))(this, HIIOCANBKAM);
		}

		::System::Void AFPCLLAALBH(::System::Single FDLDIDFMCIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_AFPCLLAALBH_OFFSET))(this, FDLDIDFMCIG);
		}

		::System::Void PEDOJDBBGPC(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_PEDOJDBBGPC_OFFSET))(this, AHAFNGEDPLI);
		}

		::System::Void ONPGLGIFOJJ(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSTONEMAPPING_ONPGLGIFOJJ_OFFSET))(this, AHAFNGEDPLI);
		}
	};
}
