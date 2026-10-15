#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
namespace RPG::Client { class MonoEffectPluginShape; }
namespace UnityEngine { class MonoBehaviour; }

#define ADLPONGJPEF_AEOJLLCMNCD_OFFSET UNITYSDK_OFFSET(0xB145760)
#define ADLPONGJPEF_ANHGJBFNHBF_OFFSET UNITYSDK_OFFSET(0xB145F90)
#define ADLPONGJPEF_CTOR_OFFSET UNITYSDK_OFFSET(0xB146700)
#define ADLPONGJPEF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB1456F0)
#define ADLPONGJPEF_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0xB145840)
#define ADLPONGJPEF_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB145680)
#define ADLPONGJPEF_PPACLLPOHFB_OFFSET UNITYSDK_OFFSET(0xB1458B0)

	class ADLPONGJPEF : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADLPONGJPEF_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + ADLPONGJPEF_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADLPONGJPEF_DISPOSE_OFFSET))(this);
		}

		::System::Void AEOJLLCMNCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADLPONGJPEF_AEOJLLCMNCD_OFFSET))(this);
		}

		::System::Void PPACLLPOHFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADLPONGJPEF_PPACLLPOHFB_OFFSET))(this);
		}

		::System::Void ANHGJBFNHBF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADLPONGJPEF_ANHGJBFNHBF_OFFSET))(this);
		}

		::RPG::Client::MonoEffectPluginShape* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoEffectPluginShape*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADLPONGJPEF_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
