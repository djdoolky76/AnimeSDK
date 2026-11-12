#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
namespace RPG::Client { class MonoEffectPluginBase; }
namespace UnityEngine { class MonoBehaviour; }

#define CFJCFCNOKOC_CTOR_OFFSET UNITYSDK_OFFSET(0xD5FCA10)
#define CFJCFCNOKOC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD5FC950)
#define CFJCFCNOKOC_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0xD5FC9C0)
#define CFJCFCNOKOC_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xD5FC8E0)

inline static constexpr unsigned int CFJCFCNOKOC_TypeDefinitionIndex = 71865;

	class CFJCFCNOKOC : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFJCFCNOKOC_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CFJCFCNOKOC_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFJCFCNOKOC_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::MonoEffectPluginBase* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoEffectPluginBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFJCFCNOKOC_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
