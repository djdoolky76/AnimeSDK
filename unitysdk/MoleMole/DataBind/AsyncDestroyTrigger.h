#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class GGOGEJEONBA;
class KOGPMKOGCLC;

#define MOLEMOLE_DATABIND_ASYNCDESTROYTRIGGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1CEABDF0)
#define MOLEMOLE_DATABIND_ASYNCDESTROYTRIGGER_GET_AUTODISPOSEPOOL_OFFSET UNITYSDK_OFFSET(0x1CE92680)
#define MOLEMOLE_DATABIND_ASYNCDESTROYTRIGGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1CEABE30)
#define MOLEMOLE_DATABIND_ASYNCDESTROYTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEABE90)

namespace MoleMole::DataBind
{
	inline static constexpr unsigned int AsyncDestroyTrigger_TypeDefinitionIndex = 34795;

	class AsyncDestroyTrigger : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean PBIFFEINDIC; // 0x18
		::System::Boolean OODGKLOFKOP; // 0x19
		::System::Byte _padding0[0x6];
		::GGOGEJEONBA* GAOLLJICJEA; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DATABIND_ASYNCDESTROYTRIGGER__CTOR_OFFSET))(this);
		}

		::KOGPMKOGCLC* get_AutoDisposePool()
		{
			return ((::KOGPMKOGCLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DATABIND_ASYNCDESTROYTRIGGER_GET_AUTODISPOSEPOOL_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DATABIND_ASYNCDESTROYTRIGGER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DATABIND_ASYNCDESTROYTRIGGER_ONDESTROY_OFFSET))(this);
		}
	};
}
