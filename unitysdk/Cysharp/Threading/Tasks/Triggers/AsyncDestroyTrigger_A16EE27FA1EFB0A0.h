#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks::Triggers { class AsyncDestroyTrigger; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER_A16EE27FA1EFB0A0_E6CAD58306FCDCB5_OFFSET UNITYSDK_OFFSET(0x3F23FC0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER_A16EE27FA1EFB0A0__CTOR_OFFSET UNITYSDK_OFFSET(0x1778980)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncDestroyTrigger_A16EE27FA1EFB0A0_TypeDefinitionIndex = 19918;

	class AsyncDestroyTrigger_A16EE27FA1EFB0A0 : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger* E3B41EAA33A08C46; // 0x10

		::System::Void _ctor(::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger* E3B41EAA33A08C46)
		{
			return ((::System::Void(*)(::PVOID, ::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER_A16EE27FA1EFB0A0__CTOR_OFFSET))(this, E3B41EAA33A08C46);
		}

		::System::Boolean E6CAD58306FCDCB5()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESTROYTRIGGER_A16EE27FA1EFB0A0_E6CAD58306FCDCB5_OFFSET))(this);
		}
	};
}
