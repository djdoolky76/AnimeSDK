#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"

namespace MoleMole::Config { class ConfigEntityPaniniProjectionEffects; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPANINIPROJECTION_AAOGMJFNGIB_OFFSET UNITYSDK_OFFSET(0xFFFBD60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPANINIPROJECTION_AFPCLLAALBH_OFFSET UNITYSDK_OFFSET(0xFFFCA00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPANINIPROJECTION_AJIPNBANCOC_OFFSET UNITYSDK_OFFSET(0xFFFBBE0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPANINIPROJECTION_ALJEEEAPCBH_OFFSET UNITYSDK_OFFSET(0xFFFC200)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPANINIPROJECTION_BAHGDCGIEKL_OFFSET UNITYSDK_OFFSET(0xFFFC080)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPANINIPROJECTION_IEFBPLNILIE_OFFSET UNITYSDK_OFFSET(0xFFFBBD0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPANINIPROJECTION_NNEGPFCPCAB_OFFSET UNITYSDK_OFFSET(0xFFFB990)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPANINIPROJECTION_ONPGLGIFOJJ_OFFSET UNITYSDK_OFFSET(0xFFFD360)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPANINIPROJECTION_PEDOJDBBGPC_OFFSET UNITYSDK_OFFSET(0xFFFCEE0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPANINIPROJECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xFFFD7E0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessPaniniProjection_TypeDefinitionIndex = 92848;

	class ESPostProcessPaniniProjection
	{
	public:
		::MoleMole::Config::ConfigEntityPaniniProjectionEffects* m_stAsset; // 0xB0
		::System::Single _VolDefault_distance; // 0xB8
		::System::Single _VolDefault_cropToFit; // 0xBC
		::System::Boolean _VolPreVal_distance_overrideState; // 0xC0
		::System::Byte _padding0[0x3];
		::System::Single _VolPreVal_distance; // 0xC4
		::System::Boolean _VolPreVal_cropToFit_overrideState; // 0xC8
		::System::Byte _padding1[0x3];
		::System::Single _VolPreVal_cropToFit; // 0xCC
		::System::Single _TimelineCurveFirstVal_distance; // 0xD0
		::System::Single _TimelineCurveLastVal_distance; // 0xD4
		::System::Single _TimelineCurveFirstVal_cropToFit; // 0xD8
		::System::Single _TimelineCurveLastVal_cropToFit; // 0xDC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distance_FieldHandleType; // 0xE0
		::System::Boolean ESPP_distance_UseIt; // 0xE4
		::System::Byte _padding2[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_distance; // 0xE8
		::System::Boolean ESPP_distance_EnableFade; // 0xF0
		::System::Boolean ESPP_distance_EnableOverrideDefaultValue; // 0xF1
		::System::Byte _padding3[0x2];
		::System::Single ESPP_distance_OverrideDefaultValue; // 0xF4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_cropToFit_FieldHandleType; // 0xF8
		::System::Boolean ESPP_cropToFit_UseIt; // 0xFC
		::System::Byte _padding4[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_cropToFit; // 0x100
		::System::Boolean ESPP_cropToFit_EnableFade; // 0x108
		::System::Boolean ESPP_cropToFit_EnableOverrideDefaultValue; // 0x109
		::System::Byte _padding5[0x2];
		::System::Single ESPP_cropToFit_OverrideDefaultValue; // 0x10C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPANINIPROJECTION__CTOR_OFFSET))(this);
		}

		::System::Void NNEGPFCPCAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPANINIPROJECTION_NNEGPFCPCAB_OFFSET))(this);
		}

		::System::Void IEFBPLNILIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPANINIPROJECTION_IEFBPLNILIE_OFFSET))(this);
		}

		::System::Void AJIPNBANCOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPANINIPROJECTION_AJIPNBANCOC_OFFSET))(this);
		}

		::System::Void AAOGMJFNGIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPANINIPROJECTION_AAOGMJFNGIB_OFFSET))(this);
		}

		::System::Void BAHGDCGIEKL(::System::Single PBKKBBHOCLC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPANINIPROJECTION_BAHGDCGIEKL_OFFSET))(this, PBKKBBHOCLC);
		}

		::System::Void ALJEEEAPCBH(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPANINIPROJECTION_ALJEEEAPCBH_OFFSET))(this, HIIOCANBKAM);
		}

		::System::Void AFPCLLAALBH(::System::Single FDLDIDFMCIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPANINIPROJECTION_AFPCLLAALBH_OFFSET))(this, FDLDIDFMCIG);
		}

		::System::Void PEDOJDBBGPC(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPANINIPROJECTION_PEDOJDBBGPC_OFFSET))(this, AHAFNGEDPLI);
		}

		::System::Void ONPGLGIFOJJ(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSPANINIPROJECTION_ONPGLGIFOJJ_OFFSET))(this, AHAFNGEDPLI);
		}
	};
}
