#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"

namespace MoleMole::Config { class ConfigEntityUnsharpMaskEffects; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_AAOGMJFNGIB_OFFSET UNITYSDK_OFFSET(0x190E86B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_AFPCLLAALBH_OFFSET UNITYSDK_OFFSET(0x190EAF20)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_AJIPNBANCOC_OFFSET UNITYSDK_OFFSET(0x190E8490)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_ALJEEEAPCBH_OFFSET UNITYSDK_OFFSET(0x190E9380)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_BAHGDCGIEKL_OFFSET UNITYSDK_OFFSET(0x190E8FE0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_IEFBPLNILIE_OFFSET UNITYSDK_OFFSET(0x190E8480)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_NNEGPFCPCAB_OFFSET UNITYSDK_OFFSET(0x190E80C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_ONPGLGIFOJJ_OFFSET UNITYSDK_OFFSET(0x190EC450)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_PEDOJDBBGPC_OFFSET UNITYSDK_OFFSET(0x190EBB00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x190ECDA0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessUnsharpMask_TypeDefinitionIndex = 66958;

	class ESPostProcessUnsharpMask
	{
	public:
		::MoleMole::Config::ConfigEntityUnsharpMaskEffects* m_stAsset; // 0xB0
		::System::Boolean _VolDefault_enable; // 0xB8
		::System::Byte _padding0[0x3];
		::System::Single _VolDefault_radius; // 0xBC
		::System::Single _VolDefault_amount; // 0xC0
		::System::Int32 _VolDefault_sampleCount; // 0xC4
		::System::Single _VolDefault_threshold; // 0xC8
		::System::Boolean _VolDefault_debugMode; // 0xCC
		::System::Boolean _VolPreVal_enable_overrideState; // 0xCD
		::System::Boolean _VolPreVal_enable; // 0xCE
		::System::Boolean _VolPreVal_radius_overrideState; // 0xCF
		::System::Single _VolPreVal_radius; // 0xD0
		::System::Boolean _VolPreVal_amount_overrideState; // 0xD4
		::System::Byte _padding1[0x3];
		::System::Single _VolPreVal_amount; // 0xD8
		::System::Boolean _VolPreVal_sampleCount_overrideState; // 0xDC
		::System::Byte _padding2[0x3];
		::System::Int32 _VolPreVal_sampleCount; // 0xE0
		::System::Boolean _VolPreVal_threshold_overrideState; // 0xE4
		::System::Byte _padding3[0x3];
		::System::Single _VolPreVal_threshold; // 0xE8
		::System::Boolean _VolPreVal_debugMode_overrideState; // 0xEC
		::System::Boolean _VolPreVal_debugMode; // 0xED
		::System::Byte _padding4[0x2];
		::System::Single _TimelineCurveFirstVal_radius; // 0xF0
		::System::Single _TimelineCurveLastVal_radius; // 0xF4
		::System::Single _TimelineCurveFirstVal_amount; // 0xF8
		::System::Single _TimelineCurveLastVal_amount; // 0xFC
		::System::Int32 _TimelineCurveFirstVal_sampleCount; // 0x100
		::System::Int32 _TimelineCurveLastVal_sampleCount; // 0x104
		::System::Single _TimelineCurveFirstVal_threshold; // 0x108
		::System::Single _TimelineCurveLastVal_threshold; // 0x10C
		::System::Boolean _TimelineCurveFirstVal_debugMode; // 0x110
		::System::Boolean _TimelineCurveLastVal_debugMode; // 0x111
		::System::Byte _padding5[0x2];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_enable_FieldHandleType; // 0x114
		::System::Boolean ESPP_enable; // 0x118
		::System::Byte _padding6[0x3];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_radius_FieldHandleType; // 0x11C
		::System::Boolean ESPP_radius_UseIt; // 0x120
		::System::Byte _padding7[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_radius; // 0x128
		::System::Boolean ESPP_radius_EnableFade; // 0x130
		::System::Boolean ESPP_radius_EnableOverrideDefaultValue; // 0x131
		::System::Byte _padding8[0x2];
		::System::Single ESPP_radius_OverrideDefaultValue; // 0x134
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_amount_FieldHandleType; // 0x138
		::System::Boolean ESPP_amount_UseIt; // 0x13C
		::System::Byte _padding9[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_amount; // 0x140
		::System::Boolean ESPP_amount_EnableFade; // 0x148
		::System::Boolean ESPP_amount_EnableOverrideDefaultValue; // 0x149
		::System::Byte _padding10[0x2];
		::System::Single ESPP_amount_OverrideDefaultValue; // 0x14C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sampleCount_FieldHandleType; // 0x150
		::System::Boolean ESPP_sampleCount_UseIt; // 0x154
		::System::Byte _padding11[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_sampleCount; // 0x158
		::System::Boolean ESPP_sampleCount_EnableFade; // 0x160
		::System::Boolean ESPP_sampleCount_EnableOverrideDefaultValue; // 0x161
		::System::Byte _padding12[0x2];
		::System::Int32 ESPP_sampleCount_OverrideDefaultValue; // 0x164
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_threshold_FieldHandleType; // 0x168
		::System::Boolean ESPP_threshold_UseIt; // 0x16C
		::System::Byte _padding13[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_threshold; // 0x170
		::System::Boolean ESPP_threshold_EnableFade; // 0x178
		::System::Boolean ESPP_threshold_EnableOverrideDefaultValue; // 0x179
		::System::Byte _padding14[0x2];
		::System::Single ESPP_threshold_OverrideDefaultValue; // 0x17C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_debugMode_FieldHandleType; // 0x180
		::System::Boolean ESPP_debugMode_UseIt; // 0x184
		::System::Byte _padding15[0x3];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_debugMode; // 0x188
		::System::Boolean ESPP_debugMode_EnableFade; // 0x190
		::System::Boolean ESPP_debugMode_EnableOverrideDefaultValue; // 0x191
		::System::Boolean ESPP_debugMode_OverrideDefaultValue; // 0x192

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK__CTOR_OFFSET))(this);
		}

		::System::Void NNEGPFCPCAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_NNEGPFCPCAB_OFFSET))(this);
		}

		::System::Void IEFBPLNILIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_IEFBPLNILIE_OFFSET))(this);
		}

		::System::Void AJIPNBANCOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_AJIPNBANCOC_OFFSET))(this);
		}

		::System::Void AAOGMJFNGIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_AAOGMJFNGIB_OFFSET))(this);
		}

		::System::Void BAHGDCGIEKL(::System::Single PBKKBBHOCLC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_BAHGDCGIEKL_OFFSET))(this, PBKKBBHOCLC);
		}

		::System::Void ALJEEEAPCBH(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_ALJEEEAPCBH_OFFSET))(this, HIIOCANBKAM);
		}

		::System::Void AFPCLLAALBH(::System::Single FDLDIDFMCIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_AFPCLLAALBH_OFFSET))(this, FDLDIDFMCIG);
		}

		::System::Void PEDOJDBBGPC(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_PEDOJDBBGPC_OFFSET))(this, AHAFNGEDPLI);
		}

		::System::Void ONPGLGIFOJJ(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSUNSHARPMASK_ONPGLGIFOJJ_OFFSET))(this, AHAFNGEDPLI);
		}
	};
}
