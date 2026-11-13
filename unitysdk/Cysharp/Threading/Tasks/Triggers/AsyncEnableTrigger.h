#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnEnableHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENABLETRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F174020)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENABLETRIGGER_GETONENABLEASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1F173CB0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENABLETRIGGER_GETONENABLEASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1F173C10)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENABLETRIGGER_ONENABLEASYNC_1_OFFSET UNITYSDK_OFFSET(0x1F173EB0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENABLETRIGGER_ONENABLEASYNC_OFFSET UNITYSDK_OFFSET(0x1F173D10)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENABLETRIGGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F173C00)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncEnableTrigger_TypeDefinitionIndex = 39478;

	class AsyncEnableTrigger
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENABLETRIGGER_CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENABLETRIGGER_ONENABLE_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnEnableHandler* GetOnEnableAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnEnableHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENABLETRIGGER_GETONENABLEASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnEnableHandler* GetOnEnableAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnEnableHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENABLETRIGGER_GETONENABLEASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask OnEnableAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENABLETRIGGER_ONENABLEASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnEnableAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENABLETRIGGER_ONENABLEASYNC_1_OFFSET))(this, a1);
		}

	};
}
