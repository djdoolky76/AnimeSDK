#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnBecameVisibleHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBECAMEVISIBLETRIGGER_GETONBECAMEVISIBLEASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1FEB91C0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBECAMEVISIBLETRIGGER_GETONBECAMEVISIBLEASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1FEB9110)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBECAMEVISIBLETRIGGER_ONBECAMEVISIBLEASYNC_1_OFFSET UNITYSDK_OFFSET(0x1FEB9380)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBECAMEVISIBLETRIGGER_ONBECAMEVISIBLEASYNC_OFFSET UNITYSDK_OFFSET(0x1FEB9220)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBECAMEVISIBLETRIGGER_ONBECAMEVISIBLE_OFFSET UNITYSDK_OFFSET(0x1FEB90F0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBECAMEVISIBLETRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FEB9490)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncBecameVisibleTrigger_TypeDefinitionIndex = 31410;

	class AsyncBecameVisibleTrigger
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBECAMEVISIBLETRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnBecameVisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBECAMEVISIBLETRIGGER_ONBECAMEVISIBLE_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnBecameVisibleHandler* GetOnBecameVisibleAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnBecameVisibleHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBECAMEVISIBLETRIGGER_GETONBECAMEVISIBLEASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnBecameVisibleHandler* GetOnBecameVisibleAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnBecameVisibleHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBECAMEVISIBLETRIGGER_GETONBECAMEVISIBLEASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask OnBecameVisibleAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBECAMEVISIBLETRIGGER_ONBECAMEVISIBLEASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnBecameVisibleAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBECAMEVISIBLETRIGGER_ONBECAMEVISIBLEASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
