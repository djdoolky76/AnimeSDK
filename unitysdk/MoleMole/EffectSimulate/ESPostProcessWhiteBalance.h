#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"

namespace MoleMole::Config { class ConfigEntityWhiteBalanceEffects; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSWHITEBALANCE_AAOGMJFNGIB_OFFSET UNITYSDK_OFFSET(0xFFFDD10)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSWHITEBALANCE_AFPCLLAALBH_OFFSET UNITYSDK_OFFSET(0xFFFE9B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSWHITEBALANCE_AJIPNBANCOC_OFFSET UNITYSDK_OFFSET(0xFFFDB90)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSWHITEBALANCE_ALJEEEAPCBH_OFFSET UNITYSDK_OFFSET(0xFFFE1B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSWHITEBALANCE_BAHGDCGIEKL_OFFSET UNITYSDK_OFFSET(0xFFFE030)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSWHITEBALANCE_IEFBPLNILIE_OFFSET UNITYSDK_OFFSET(0xFFFDB80)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSWHITEBALANCE_NNEGPFCPCAB_OFFSET UNITYSDK_OFFSET(0xFFFD940)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSWHITEBALANCE_ONPGLGIFOJJ_OFFSET UNITYSDK_OFFSET(0xFFFF310)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSWHITEBALANCE_PEDOJDBBGPC_OFFSET UNITYSDK_OFFSET(0xFFFEE90)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSWHITEBALANCE__CTOR_OFFSET UNITYSDK_OFFSET(0xFFFF790)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessWhiteBalance_TypeDefinitionIndex = 58865;

	class ESPostProcessWhiteBalance
	{
	public:
		::MoleMole::Config::ConfigEntityWhiteBalanceEffects* m_stAsset; // 0xB0
		::System::Single _VolDefault_temperature; // 0xB8
		::System::Single _VolDefault_tint; // 0xBC
		::System::Boolean _VolPreVal_temperature_overrideState; // 0xC0
		::System::Byte _padding0[0x3];
		::System::Single _VolPreVal_temperature; // 0xC4
		::System::Boolean _VolPreVal_tint_overrideState; // 0xC8
		::System::Byte _padding1[0x3];
		::System::Single _VolPreVal_tint; // 0xCC
		::System::Single _TimelineCurveFirstVal_temperature; // 0xD0
		::System::Single _TimelineCurveLastVal_temperature; // 0xD4
		::System::Single _TimelineCurveFirstVal_tint; // 0xD8
		::System::Single _TimelineCurveLastVal_tint; // 0xDC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_temperature_FieldHandleType; // 0xE0
		::System::Boolean ESPP_temperature_UseIt; // 0xE4
		::System::Byte _padding2[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_temperature; // 0xE8
		::System::Boolean ESPP_temperature_EnableFade; // 0xF0
		::System::Boolean ESPP_temperature_EnableOverrideDefaultValue; // 0xF1
		::System::Byte _padding3[0x2];
		::System::Single ESPP_temperature_OverrideDefaultValue; // 0xF4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_tint_FieldHandleType; // 0xF8
		::System::Boolean ESPP_tint_UseIt; // 0xFC
		::System::Byte _padding4[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_tint; // 0x100
		::System::Boolean ESPP_tint_EnableFade; // 0x108
		::System::Boolean ESPP_tint_EnableOverrideDefaultValue; // 0x109
		::System::Byte _padding5[0x2];
		::System::Single ESPP_tint_OverrideDefaultValue; // 0x10C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSWHITEBALANCE__CTOR_OFFSET))(this);
		}

		::System::Void NNEGPFCPCAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSWHITEBALANCE_NNEGPFCPCAB_OFFSET))(this);
		}

		::System::Void IEFBPLNILIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSWHITEBALANCE_IEFBPLNILIE_OFFSET))(this);
		}

		::System::Void AJIPNBANCOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSWHITEBALANCE_AJIPNBANCOC_OFFSET))(this);
		}

		::System::Void AAOGMJFNGIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSWHITEBALANCE_AAOGMJFNGIB_OFFSET))(this);
		}

		::System::Void BAHGDCGIEKL(::System::Single PBKKBBHOCLC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSWHITEBALANCE_BAHGDCGIEKL_OFFSET))(this, PBKKBBHOCLC);
		}

		::System::Void ALJEEEAPCBH(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSWHITEBALANCE_ALJEEEAPCBH_OFFSET))(this, HIIOCANBKAM);
		}

		::System::Void AFPCLLAALBH(::System::Single FDLDIDFMCIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSWHITEBALANCE_AFPCLLAALBH_OFFSET))(this, FDLDIDFMCIG);
		}

		::System::Void PEDOJDBBGPC(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSWHITEBALANCE_PEDOJDBBGPC_OFFSET))(this, AHAFNGEDPLI);
		}

		::System::Void ONPGLGIFOJJ(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSWHITEBALANCE_ONPGLGIFOJJ_OFFSET))(this, AHAFNGEDPLI);
		}
	};
}
