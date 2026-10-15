#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
namespace RPG::Client { class MonoEffectPluginFiveDimFeature; }
namespace RPG::Client { class TriggerEffectParams; }
namespace UnityEngine { class MonoBehaviour; }

#define OKKMDOPFCPA_BLJJEKIMKOE_OFFSET UNITYSDK_OFFSET(0xBEE2540)
#define OKKMDOPFCPA_CTOR_OFFSET UNITYSDK_OFFSET(0xBEE2B60)
#define OKKMDOPFCPA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBEE22D0)
#define OKKMDOPFCPA_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0xBEE2440)
#define OKKMDOPFCPA_JDJHMBNIJLM_OFFSET UNITYSDK_OFFSET(0xBEE2500)
#define OKKMDOPFCPA_JOAPCCLEOEO_OFFSET UNITYSDK_OFFSET(0xBEE25A0)
#define OKKMDOPFCPA_KLIOBGEPFEH_OFFSET UNITYSDK_OFFSET(0xBEE2380)
#define OKKMDOPFCPA_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBEE2260)
#define OKKMDOPFCPA_OMCHFCDMIPL_OFFSET UNITYSDK_OFFSET(0xBEE2340)
#define OKKMDOPFCPA_POPNLPIAOCM_OFFSET UNITYSDK_OFFSET(0xBEE24B0)

inline static constexpr unsigned int OKKMDOPFCPA_TypeDefinitionIndex = 69876;

	class OKKMDOPFCPA : public ::RPG::Client::BehaviorBase
	{
	public:
		::RPG::Client::TriggerEffectParams* KJFCJNJNMAI; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKMDOPFCPA_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + OKKMDOPFCPA_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKMDOPFCPA_DISPOSE_OFFSET))(this);
		}

		::System::Void OMCHFCDMIPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKMDOPFCPA_OMCHFCDMIPL_OFFSET))(this);
		}

		::System::Void KLIOBGEPFEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKMDOPFCPA_KLIOBGEPFEH_OFFSET))(this);
		}

		::System::Void POPNLPIAOCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKMDOPFCPA_POPNLPIAOCM_OFFSET))(this);
		}

		::System::Void JDJHMBNIJLM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKMDOPFCPA_JDJHMBNIJLM_OFFSET))(this);
		}

		::System::Void BLJJEKIMKOE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OKKMDOPFCPA_BLJJEKIMKOE_OFFSET))(this, a1);
		}

		::System::Void JOAPCCLEOEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKMDOPFCPA_JOAPCCLEOEO_OFFSET))(this);
		}

		::RPG::Client::MonoEffectPluginFiveDimFeature* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoEffectPluginFiveDimFeature*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKMDOPFCPA_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
