#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
namespace RPG::Client { class MonoEffectPluginFiveDimFeature; }
namespace RPG::Client { class TriggerEffectParams; }
namespace UnityEngine { class MonoBehaviour; }

#define OKKMDOPFCPA_BLJJEKIMKOE_OFFSET UNITYSDK_OFFSET(0x17888A70)
#define OKKMDOPFCPA_CTOR_OFFSET UNITYSDK_OFFSET(0x17889090)
#define OKKMDOPFCPA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17888800)
#define OKKMDOPFCPA_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0x17888970)
#define OKKMDOPFCPA_JDJHMBNIJLM_OFFSET UNITYSDK_OFFSET(0x17888A30)
#define OKKMDOPFCPA_JOAPCCLEOEO_OFFSET UNITYSDK_OFFSET(0x17888AD0)
#define OKKMDOPFCPA_KLIOBGEPFEH_OFFSET UNITYSDK_OFFSET(0x178888B0)
#define OKKMDOPFCPA_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x17888790)
#define OKKMDOPFCPA_OMCHFCDMIPL_OFFSET UNITYSDK_OFFSET(0x17888870)
#define OKKMDOPFCPA_POPNLPIAOCM_OFFSET UNITYSDK_OFFSET(0x178889E0)

inline static constexpr unsigned int OKKMDOPFCPA_TypeDefinitionIndex = 71835;

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
