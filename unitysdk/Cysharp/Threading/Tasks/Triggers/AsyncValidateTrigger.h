#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnValidateHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCVALIDATETRIGGER_GETONVALIDATEASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1FFE8030)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCVALIDATETRIGGER_GETONVALIDATEASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1FFE7F80)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCVALIDATETRIGGER_ONVALIDATEASYNC_1_OFFSET UNITYSDK_OFFSET(0x1FFE81F0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCVALIDATETRIGGER_ONVALIDATEASYNC_OFFSET UNITYSDK_OFFSET(0x1FFE8090)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCVALIDATETRIGGER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1FFE7F60)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCVALIDATETRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FFE8300)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncValidateTrigger_TypeDefinitionIndex = 31498;

	class AsyncValidateTrigger
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCVALIDATETRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCVALIDATETRIGGER_ONVALIDATE_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnValidateHandler* GetOnValidateAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnValidateHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCVALIDATETRIGGER_GETONVALIDATEASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnValidateHandler* GetOnValidateAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnValidateHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCVALIDATETRIGGER_GETONVALIDATEASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask OnValidateAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCVALIDATETRIGGER_ONVALIDATEASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnValidateAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCVALIDATETRIGGER_ONVALIDATEASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
