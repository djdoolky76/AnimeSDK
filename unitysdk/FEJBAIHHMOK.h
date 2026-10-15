#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
namespace RPG::Client { class MonoEffectPluginBase; }
namespace UnityEngine { class MonoBehaviour; }

#define FEJBAIHHMOK_CTOR_OFFSET UNITYSDK_OFFSET(0x15724C20)
#define FEJBAIHHMOK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15724B60)
#define FEJBAIHHMOK_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0x15724BD0)
#define FEJBAIHHMOK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15724AF0)

inline static constexpr unsigned int FEJBAIHHMOK_TypeDefinitionIndex = 69864;

	class FEJBAIHHMOK : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEJBAIHHMOK_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + FEJBAIHHMOK_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEJBAIHHMOK_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::MonoEffectPluginBase* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoEffectPluginBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEJBAIHHMOK_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
