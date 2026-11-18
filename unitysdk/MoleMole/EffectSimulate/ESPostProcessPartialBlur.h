#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"

namespace MoleMole::Config { class ConfigEntityPartialBlurEffects; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPARTIALBLUR_AAOGMJFNGIB_OFFSET UNITYSDK_OFFSET(0x1B45D820)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPARTIALBLUR_AFPCLLAALBH_OFFSET UNITYSDK_OFFSET(0x1B45FCA0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPARTIALBLUR_AJIPNBANCOC_OFFSET UNITYSDK_OFFSET(0x1B45D630)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPARTIALBLUR_ALJEEEAPCBH_OFFSET UNITYSDK_OFFSET(0x1B45E400)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPARTIALBLUR_BAHGDCGIEKL_OFFSET UNITYSDK_OFFSET(0x1B45E060)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPARTIALBLUR_IEFBPLNILIE_OFFSET UNITYSDK_OFFSET(0x1B45D620)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPARTIALBLUR_NNEGPFCPCAB_OFFSET UNITYSDK_OFFSET(0x1B45D260)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPARTIALBLUR_ONPGLGIFOJJ_OFFSET UNITYSDK_OFFSET(0x1B461170)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPARTIALBLUR_PEDOJDBBGPC_OFFSET UNITYSDK_OFFSET(0x1B460770)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPARTIALBLUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B461B70)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessPartialBlur_TypeDefinitionIndex = 67291;

	class ESPostProcessPartialBlur
	{
	public:
		::MoleMole::Config::ConfigEntityPartialBlurEffects* m_stAsset; // 0xB0
		::System::Int32 _VolDefault_downScaleFactor; // 0xB8
		::System::Single _VolDefault_radius; // 0xBC
		::System::Int32 _VolDefault_sampleCountMain; // 0xC0
		::System::Single _VolDefault_standardDeviation; // 0xC4
		::System::Boolean _VolDefault_canBeDisabledByGlobalConfig; // 0xC8
		::System::Boolean _VolPreVal_downScaleFactor_overrideState; // 0xC9
		::System::Byte _padding0[0x2];
		::System::Int32 _VolPreVal_downScaleFactor; // 0xCC
		::System::Boolean _VolPreVal_radius_overrideState; // 0xD0
		::System::Byte _padding1[0x3];
		::System::Single _VolPreVal_radius; // 0xD4
		::System::Boolean _VolPreVal_sampleCountMain_overrideState; // 0xD8
		::System::Byte _padding2[0x3];
		::System::Int32 _VolPreVal_sampleCountMain; // 0xDC
		::System::Boolean _VolPreVal_standardDeviation_overrideState; // 0xE0
		::System::Byte _padding3[0x3];
		::System::Single _VolPreVal_standardDeviation; // 0xE4
		::System::Boolean _VolPreVal_canBeDisabledByGlobalConfig_overrideState; // 0xE8
		::System::Boolean _VolPreVal_canBeDisabledByGlobalConfig; // 0xE9
		::System::Byte _padding4[0x2];
		::System::Int32 _TimelineCurveFirstVal_downScaleFactor; // 0xEC
		::System::Int32 _TimelineCurveLastVal_downScaleFactor; // 0xF0
		::System::Single _TimelineCurveFirstVal_radius; // 0xF4
		::System::Single _TimelineCurveLastVal_radius; // 0xF8
		::System::Int32 _TimelineCurveFirstVal_sampleCountMain; // 0xFC
		::System::Int32 _TimelineCurveLastVal_sampleCountMain; // 0x100
		::System::Single _TimelineCurveFirstVal_standardDeviation; // 0x104
		::System::Single _TimelineCurveLastVal_standardDeviation; // 0x108
		::System::Boolean _TimelineCurveFirstVal_canBeDisabledByGlobalConfig; // 0x10C
		::System::Boolean _TimelineCurveLastVal_canBeDisabledByGlobalConfig; // 0x10D
		::System::Byte _padding5[0x2];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_downScaleFactor_FieldHandleType; // 0x110
		::System::Boolean ESPP_downScaleFactor_UseIt; // 0x114
		::System::Byte _padding6[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_downScaleFactor; // 0x118
		::System::Boolean ESPP_downScaleFactor_EnableFade; // 0x120
		::System::Boolean ESPP_downScaleFactor_EnableOverrideDefaultValue; // 0x121
		::System::Byte _padding7[0x2];
		::System::Int32 ESPP_downScaleFactor_OverrideDefaultValue; // 0x124
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_radius_FieldHandleType; // 0x128
		::System::Boolean ESPP_radius_UseIt; // 0x12C
		::System::Byte _padding8[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_radius; // 0x130
		::System::Boolean ESPP_radius_EnableFade; // 0x138
		::System::Boolean ESPP_radius_EnableOverrideDefaultValue; // 0x139
		::System::Byte _padding9[0x2];
		::System::Single ESPP_radius_OverrideDefaultValue; // 0x13C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sampleCountMain_FieldHandleType; // 0x140
		::System::Boolean ESPP_sampleCountMain_UseIt; // 0x144
		::System::Byte _padding10[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_sampleCountMain; // 0x148
		::System::Boolean ESPP_sampleCountMain_EnableFade; // 0x150
		::System::Boolean ESPP_sampleCountMain_EnableOverrideDefaultValue; // 0x151
		::System::Byte _padding11[0x2];
		::System::Int32 ESPP_sampleCountMain_OverrideDefaultValue; // 0x154
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_standardDeviation_FieldHandleType; // 0x158
		::System::Boolean ESPP_standardDeviation_UseIt; // 0x15C
		::System::Byte _padding12[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_standardDeviation; // 0x160
		::System::Boolean ESPP_standardDeviation_EnableFade; // 0x168
		::System::Boolean ESPP_standardDeviation_EnableOverrideDefaultValue; // 0x169
		::System::Byte _padding13[0x2];
		::System::Single ESPP_standardDeviation_OverrideDefaultValue; // 0x16C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_canBeDisabledByGlobalConfig_FieldHandleType; // 0x170
		::System::Boolean ESPP_canBeDisabledByGlobalConfig_UseIt; // 0x174
		::System::Byte _padding14[0x3];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_canBeDisabledByGlobalConfig; // 0x178
		::System::Boolean ESPP_canBeDisabledByGlobalConfig_EnableFade; // 0x180
		::System::Boolean ESPP_canBeDisabledByGlobalConfig_EnableOverrideDefaultValue; // 0x181
		::System::Boolean ESPP_canBeDisabledByGlobalConfig_OverrideDefaultValue; // 0x182

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPARTIALBLUR__CTOR_OFFSET))(this);
		}

		::System::Void NNEGPFCPCAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPARTIALBLUR_NNEGPFCPCAB_OFFSET))(this);
		}

		::System::Void IEFBPLNILIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPARTIALBLUR_IEFBPLNILIE_OFFSET))(this);
		}

		::System::Void AJIPNBANCOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPARTIALBLUR_AJIPNBANCOC_OFFSET))(this);
		}

		::System::Void AAOGMJFNGIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPARTIALBLUR_AAOGMJFNGIB_OFFSET))(this);
		}

		::System::Void BAHGDCGIEKL(::System::Single PBKKBBHOCLC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPARTIALBLUR_BAHGDCGIEKL_OFFSET))(this, PBKKBBHOCLC);
		}

		::System::Void ALJEEEAPCBH(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPARTIALBLUR_ALJEEEAPCBH_OFFSET))(this, HIIOCANBKAM);
		}

		::System::Void AFPCLLAALBH(::System::Single FDLDIDFMCIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPARTIALBLUR_AFPCLLAALBH_OFFSET))(this, FDLDIDFMCIG);
		}

		::System::Void PEDOJDBBGPC(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPARTIALBLUR_PEDOJDBBGPC_OFFSET))(this, AHAFNGEDPLI);
		}

		::System::Void ONPGLGIFOJJ(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPARTIALBLUR_ONPGLGIFOJJ_OFFSET))(this, AHAFNGEDPLI);
		}
	};
}
