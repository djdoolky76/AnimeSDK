#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::Config { class ConfigEntitySplitToningEffects; }
namespace MoleMole::EffectSimulate { class ColorKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSPLITTONING_AAOGMJFNGIB_OFFSET UNITYSDK_OFFSET(0x1B49BD20)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSPLITTONING_AFPCLLAALBH_OFFSET UNITYSDK_OFFSET(0x1B49D130)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSPLITTONING_AJIPNBANCOC_OFFSET UNITYSDK_OFFSET(0x1B49BB80)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSPLITTONING_ALJEEEAPCBH_OFFSET UNITYSDK_OFFSET(0x1B49C420)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSPLITTONING_BAHGDCGIEKL_OFFSET UNITYSDK_OFFSET(0x1B49C150)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSPLITTONING_IEFBPLNILIE_OFFSET UNITYSDK_OFFSET(0x1B49BB70)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSPLITTONING_NNEGPFCPCAB_OFFSET UNITYSDK_OFFSET(0x1B49B8A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSPLITTONING_ONPGLGIFOJJ_OFFSET UNITYSDK_OFFSET(0x1B49DD90)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSPLITTONING_PEDOJDBBGPC_OFFSET UNITYSDK_OFFSET(0x1B49D7C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSPLITTONING__CTOR_OFFSET UNITYSDK_OFFSET(0x1B49E360)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessSplitToning_TypeDefinitionIndex = 64254;

	class ESPostProcessSplitToning
	{
	public:
		::MoleMole::Config::ConfigEntitySplitToningEffects* m_stAsset; // 0xB0
		::UnityEngine::Color _VolDefault_shadows; // 0xB8
		::UnityEngine::Color _VolDefault_highlights; // 0xC8
		::System::Single _VolDefault_balance; // 0xD8
		::System::Boolean _VolPreVal_shadows_overrideState; // 0xDC
		::System::Byte _padding0[0x3];
		::UnityEngine::Color _VolPreVal_shadows; // 0xE0
		::System::Boolean _VolPreVal_highlights_overrideState; // 0xF0
		::System::Byte _padding1[0x3];
		::UnityEngine::Color _VolPreVal_highlights; // 0xF4
		::System::Boolean _VolPreVal_balance_overrideState; // 0x104
		::System::Byte _padding2[0x3];
		::System::Single _VolPreVal_balance; // 0x108
		::UnityEngine::Color _TimelineCurveFirstVal_shadows; // 0x10C
		::UnityEngine::Color _TimelineCurveLastVal_shadows; // 0x11C
		::UnityEngine::Color _TimelineCurveFirstVal_highlights; // 0x12C
		::UnityEngine::Color _TimelineCurveLastVal_highlights; // 0x13C
		::System::Single _TimelineCurveFirstVal_balance; // 0x14C
		::System::Single _TimelineCurveLastVal_balance; // 0x150
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_shadows_FieldHandleType; // 0x154
		::System::Boolean ESPP_shadows_UseIt; // 0x158
		::System::Byte _padding3[0x7];
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_shadows; // 0x160
		::System::Boolean ESPP_shadows_EnableFade; // 0x168
		::System::Boolean ESPP_shadows_EnableOverrideDefaultValue; // 0x169
		::System::Byte _padding4[0x2];
		::UnityEngine::Color ESPP_shadows_OverrideDefaultValue; // 0x16C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_highlights_FieldHandleType; // 0x17C
		::System::Boolean ESPP_highlights_UseIt; // 0x180
		::System::Byte _padding5[0x7];
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_highlights; // 0x188
		::System::Boolean ESPP_highlights_EnableFade; // 0x190
		::System::Boolean ESPP_highlights_EnableOverrideDefaultValue; // 0x191
		::System::Byte _padding6[0x2];
		::UnityEngine::Color ESPP_highlights_OverrideDefaultValue; // 0x194
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_balance_FieldHandleType; // 0x1A4
		::System::Boolean ESPP_balance_UseIt; // 0x1A8
		::System::Byte _padding7[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_balance; // 0x1B0
		::System::Boolean ESPP_balance_EnableFade; // 0x1B8
		::System::Boolean ESPP_balance_EnableOverrideDefaultValue; // 0x1B9
		::System::Byte _padding8[0x2];
		::System::Single ESPP_balance_OverrideDefaultValue; // 0x1BC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSPLITTONING__CTOR_OFFSET))(this);
		}

		::System::Void NNEGPFCPCAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSPLITTONING_NNEGPFCPCAB_OFFSET))(this);
		}

		::System::Void IEFBPLNILIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSPLITTONING_IEFBPLNILIE_OFFSET))(this);
		}

		::System::Void AJIPNBANCOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSPLITTONING_AJIPNBANCOC_OFFSET))(this);
		}

		::System::Void AAOGMJFNGIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSPLITTONING_AAOGMJFNGIB_OFFSET))(this);
		}

		::System::Void BAHGDCGIEKL(::System::Single PBKKBBHOCLC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSPLITTONING_BAHGDCGIEKL_OFFSET))(this, PBKKBBHOCLC);
		}

		::System::Void ALJEEEAPCBH(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSPLITTONING_ALJEEEAPCBH_OFFSET))(this, HIIOCANBKAM);
		}

		::System::Void AFPCLLAALBH(::System::Single FDLDIDFMCIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSPLITTONING_AFPCLLAALBH_OFFSET))(this, FDLDIDFMCIG);
		}

		::System::Void PEDOJDBBGPC(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSPLITTONING_PEDOJDBBGPC_OFFSET))(this, AHAFNGEDPLI);
		}

		::System::Void ONPGLGIFOJJ(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSPLITTONING_ONPGLGIFOJJ_OFFSET))(this, AHAFNGEDPLI);
		}
	};
}
