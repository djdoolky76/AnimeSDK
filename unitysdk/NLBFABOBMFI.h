#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
namespace RPG::Client { class MonoEffectPluginCableProcedural; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Transform; }

#define NLBFABOBMFI_CTOR_OFFSET UNITYSDK_OFFSET(0xBC59DE0)
#define NLBFABOBMFI_HCCKBPDFINA_OFFSET UNITYSDK_OFFSET(0xBC59C00)
#define NLBFABOBMFI_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0xBC59B90)
#define NLBFABOBMFI_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBC59A10)
#define NLBFABOBMFI_PAHIDOMHIIB_OFFSET UNITYSDK_OFFSET(0xBC59CD0)

inline static constexpr unsigned int NLBFABOBMFI_TypeDefinitionIndex = 69868;

	class NLBFABOBMFI : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLBFABOBMFI_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + NLBFABOBMFI_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void HCCKBPDFINA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NLBFABOBMFI_HCCKBPDFINA_OFFSET))(this, a1);
		}

		::System::Void PAHIDOMHIIB(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NLBFABOBMFI_PAHIDOMHIIB_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MonoEffectPluginCableProcedural* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoEffectPluginCableProcedural*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLBFABOBMFI_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
