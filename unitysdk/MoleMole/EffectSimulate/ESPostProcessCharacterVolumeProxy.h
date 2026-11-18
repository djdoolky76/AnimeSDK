#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"

namespace MoleMole::Config { class ConfigEntityCharacterVolumeProxyEffects; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERVOLUMEPROXY_AAOGMJFNGIB_OFFSET UNITYSDK_OFFSET(0x1B94C1A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERVOLUMEPROXY_AFPCLLAALBH_OFFSET UNITYSDK_OFFSET(0x1B94C8C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERVOLUMEPROXY_AJIPNBANCOC_OFFSET UNITYSDK_OFFSET(0x1B94C050)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERVOLUMEPROXY_ALJEEEAPCBH_OFFSET UNITYSDK_OFFSET(0x1B94C490)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERVOLUMEPROXY_BAHGDCGIEKL_OFFSET UNITYSDK_OFFSET(0x1B94C3C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERVOLUMEPROXY_IEFBPLNILIE_OFFSET UNITYSDK_OFFSET(0x1B94C040)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERVOLUMEPROXY_NNEGPFCPCAB_OFFSET UNITYSDK_OFFSET(0x1B94BE70)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERVOLUMEPROXY_ONPGLGIFOJJ_OFFSET UNITYSDK_OFFSET(0x1B94CF70)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERVOLUMEPROXY_PEDOJDBBGPC_OFFSET UNITYSDK_OFFSET(0x1B94CC30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERVOLUMEPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B94D2B0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessCharacterVolumeProxy_TypeDefinitionIndex = 65662;

	class ESPostProcessCharacterVolumeProxy
	{
	public:
		::MoleMole::Config::ConfigEntityCharacterVolumeProxyEffects* m_stAsset; // 0xB0
		::System::Single _VolDefault_indoorWeight; // 0xB8
		::System::Boolean _VolPreVal_indoorWeight_overrideState; // 0xBC
		::System::Byte _padding0[0x3];
		::System::Single _VolPreVal_indoorWeight; // 0xC0
		::System::Single _TimelineCurveFirstVal_indoorWeight; // 0xC4
		::System::Single _TimelineCurveLastVal_indoorWeight; // 0xC8
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_indoorWeight_FieldHandleType; // 0xCC
		::System::Boolean ESPP_indoorWeight_UseIt; // 0xD0
		::System::Byte _padding1[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_indoorWeight; // 0xD8
		::System::Boolean ESPP_indoorWeight_EnableFade; // 0xE0
		::System::Boolean ESPP_indoorWeight_EnableOverrideDefaultValue; // 0xE1
		::System::Byte _padding2[0x2];
		::System::Single ESPP_indoorWeight_OverrideDefaultValue; // 0xE4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERVOLUMEPROXY__CTOR_OFFSET))(this);
		}

		::System::Void NNEGPFCPCAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERVOLUMEPROXY_NNEGPFCPCAB_OFFSET))(this);
		}

		::System::Void IEFBPLNILIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERVOLUMEPROXY_IEFBPLNILIE_OFFSET))(this);
		}

		::System::Void AJIPNBANCOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERVOLUMEPROXY_AJIPNBANCOC_OFFSET))(this);
		}

		::System::Void AAOGMJFNGIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERVOLUMEPROXY_AAOGMJFNGIB_OFFSET))(this);
		}

		::System::Void BAHGDCGIEKL(::System::Single PBKKBBHOCLC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERVOLUMEPROXY_BAHGDCGIEKL_OFFSET))(this, PBKKBBHOCLC);
		}

		::System::Void ALJEEEAPCBH(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERVOLUMEPROXY_ALJEEEAPCBH_OFFSET))(this, HIIOCANBKAM);
		}

		::System::Void AFPCLLAALBH(::System::Single FDLDIDFMCIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERVOLUMEPROXY_AFPCLLAALBH_OFFSET))(this, FDLDIDFMCIG);
		}

		::System::Void PEDOJDBBGPC(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERVOLUMEPROXY_PEDOJDBBGPC_OFFSET))(this, AHAFNGEDPLI);
		}

		::System::Void ONPGLGIFOJJ(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERVOLUMEPROXY_ONPGLGIFOJJ_OFFSET))(this, AHAFNGEDPLI);
		}
	};
}
