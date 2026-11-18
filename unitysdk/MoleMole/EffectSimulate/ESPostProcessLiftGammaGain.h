#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Config { class ConfigEntityLiftGammaGainEffects; }
namespace MoleMole::EffectSimulate { class Vector4KeyframeCurve; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIFTGAMMAGAIN_AAOGMJFNGIB_OFFSET UNITYSDK_OFFSET(0x1BA74500)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIFTGAMMAGAIN_AFPCLLAALBH_OFFSET UNITYSDK_OFFSET(0x1BA75A40)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIFTGAMMAGAIN_AJIPNBANCOC_OFFSET UNITYSDK_OFFSET(0x1BA74360)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIFTGAMMAGAIN_ALJEEEAPCBH_OFFSET UNITYSDK_OFFSET(0x1BA74C70)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIFTGAMMAGAIN_BAHGDCGIEKL_OFFSET UNITYSDK_OFFSET(0x1BA74940)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIFTGAMMAGAIN_IEFBPLNILIE_OFFSET UNITYSDK_OFFSET(0x1BA74350)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIFTGAMMAGAIN_NNEGPFCPCAB_OFFSET UNITYSDK_OFFSET(0x1BA74080)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIFTGAMMAGAIN_ONPGLGIFOJJ_OFFSET UNITYSDK_OFFSET(0x1BA766E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIFTGAMMAGAIN_PEDOJDBBGPC_OFFSET UNITYSDK_OFFSET(0x1BA76110)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIFTGAMMAGAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA76CB0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessLiftGammaGain_TypeDefinitionIndex = 61085;

	class ESPostProcessLiftGammaGain
	{
	public:
		::MoleMole::Config::ConfigEntityLiftGammaGainEffects* m_stAsset; // 0xB0
		::UnityEngine::Vector4 _VolDefault_lift; // 0xB8
		::UnityEngine::Vector4 _VolDefault_gamma; // 0xC8
		::UnityEngine::Vector4 _VolDefault_gain; // 0xD8
		::System::Boolean _VolPreVal_lift_overrideState; // 0xE8
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector4 _VolPreVal_lift; // 0xEC
		::System::Boolean _VolPreVal_gamma_overrideState; // 0xFC
		::System::Byte _padding1[0x3];
		::UnityEngine::Vector4 _VolPreVal_gamma; // 0x100
		::System::Boolean _VolPreVal_gain_overrideState; // 0x110
		::System::Byte _padding2[0x3];
		::UnityEngine::Vector4 _VolPreVal_gain; // 0x114
		::UnityEngine::Vector4 _TimelineCurveFirstVal_lift; // 0x124
		::UnityEngine::Vector4 _TimelineCurveLastVal_lift; // 0x134
		::UnityEngine::Vector4 _TimelineCurveFirstVal_gamma; // 0x144
		::UnityEngine::Vector4 _TimelineCurveLastVal_gamma; // 0x154
		::UnityEngine::Vector4 _TimelineCurveFirstVal_gain; // 0x164
		::UnityEngine::Vector4 _TimelineCurveLastVal_gain; // 0x174
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lift_FieldHandleType; // 0x184
		::System::Boolean ESPP_lift_UseIt; // 0x188
		::System::Byte _padding3[0x7];
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_lift; // 0x190
		::System::Boolean ESPP_lift_EnableFade; // 0x198
		::System::Boolean ESPP_lift_EnableOverrideDefaultValue; // 0x199
		::System::Byte _padding4[0x2];
		::UnityEngine::Vector4 ESPP_lift_OverrideDefaultValue; // 0x19C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_gamma_FieldHandleType; // 0x1AC
		::System::Boolean ESPP_gamma_UseIt; // 0x1B0
		::System::Byte _padding5[0x7];
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_gamma; // 0x1B8
		::System::Boolean ESPP_gamma_EnableFade; // 0x1C0
		::System::Boolean ESPP_gamma_EnableOverrideDefaultValue; // 0x1C1
		::System::Byte _padding6[0x2];
		::UnityEngine::Vector4 ESPP_gamma_OverrideDefaultValue; // 0x1C4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_gain_FieldHandleType; // 0x1D4
		::System::Boolean ESPP_gain_UseIt; // 0x1D8
		::System::Byte _padding7[0x7];
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_gain; // 0x1E0
		::System::Boolean ESPP_gain_EnableFade; // 0x1E8
		::System::Boolean ESPP_gain_EnableOverrideDefaultValue; // 0x1E9
		::System::Byte _padding8[0x2];
		::UnityEngine::Vector4 ESPP_gain_OverrideDefaultValue; // 0x1EC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIFTGAMMAGAIN__CTOR_OFFSET))(this);
		}

		::System::Void NNEGPFCPCAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIFTGAMMAGAIN_NNEGPFCPCAB_OFFSET))(this);
		}

		::System::Void IEFBPLNILIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIFTGAMMAGAIN_IEFBPLNILIE_OFFSET))(this);
		}

		::System::Void AJIPNBANCOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIFTGAMMAGAIN_AJIPNBANCOC_OFFSET))(this);
		}

		::System::Void AAOGMJFNGIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIFTGAMMAGAIN_AAOGMJFNGIB_OFFSET))(this);
		}

		::System::Void BAHGDCGIEKL(::System::Single PBKKBBHOCLC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIFTGAMMAGAIN_BAHGDCGIEKL_OFFSET))(this, PBKKBBHOCLC);
		}

		::System::Void ALJEEEAPCBH(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIFTGAMMAGAIN_ALJEEEAPCBH_OFFSET))(this, HIIOCANBKAM);
		}

		::System::Void AFPCLLAALBH(::System::Single FDLDIDFMCIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIFTGAMMAGAIN_AFPCLLAALBH_OFFSET))(this, FDLDIDFMCIG);
		}

		::System::Void PEDOJDBBGPC(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIFTGAMMAGAIN_PEDOJDBBGPC_OFFSET))(this, AHAFNGEDPLI);
		}

		::System::Void ONPGLGIFOJJ(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLIFTGAMMAGAIN_ONPGLGIFOJJ_OFFSET))(this, AHAFNGEDPLI);
		}
	};
}
