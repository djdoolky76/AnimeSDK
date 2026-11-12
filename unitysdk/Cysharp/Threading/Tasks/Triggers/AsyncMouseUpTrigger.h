#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnMouseUpHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x203E3320)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPTRIGGER_GETONMOUSEUPASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x203E2FB0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPTRIGGER_GETONMOUSEUPASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x203E2F00)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPTRIGGER_ONMOUSEUPASYNC_1_OFFSET UNITYSDK_OFFSET(0x203E31B0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPTRIGGER_ONMOUSEUPASYNC_OFFSET UNITYSDK_OFFSET(0x203E3010)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPTRIGGER_ONMOUSEUP_OFFSET UNITYSDK_OFFSET(0x203E2EF0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncMouseUpTrigger_TypeDefinitionIndex = 39496;

	class AsyncMouseUpTrigger
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPTRIGGER_CTOR_OFFSET))(this);
		}

		::System::Void OnMouseUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPTRIGGER_ONMOUSEUP_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseUpHandler* GetOnMouseUpAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseUpHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPTRIGGER_GETONMOUSEUPASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseUpHandler* GetOnMouseUpAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseUpHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPTRIGGER_GETONMOUSEUPASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask OnMouseUpAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPTRIGGER_ONMOUSEUPASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnMouseUpAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPTRIGGER_ONMOUSEUPASYNC_1_OFFSET))(this, a1);
		}

	};
}
