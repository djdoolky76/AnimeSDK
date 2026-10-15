#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnCollisionEnterHandler; }
namespace UnityEngine { class Collision; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTERTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F12A6D0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTERTRIGGER_GETONCOLLISIONENTERASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1F12A310)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTERTRIGGER_GETONCOLLISIONENTERASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1F12A230)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTERTRIGGER_ONCOLLISIONENTERASYNC_1_OFFSET UNITYSDK_OFFSET(0x1F12A550)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTERTRIGGER_ONCOLLISIONENTERASYNC_OFFSET UNITYSDK_OFFSET(0x1F12A370)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTERTRIGGER_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0x1F12A1C0)

namespace Cysharp::Threading::Tasks::Triggers
{
	class AsyncCollisionEnterTrigger
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTERTRIGGER_CTOR_OFFSET))(this);
		}

		::System::Void OnCollisionEnter(::UnityEngine::Collision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTERTRIGGER_ONCOLLISIONENTER_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionEnterHandler* GetOnCollisionEnterAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionEnterHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTERTRIGGER_GETONCOLLISIONENTERASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionEnterHandler* GetOnCollisionEnterAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionEnterHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTERTRIGGER_GETONCOLLISIONENTERASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask OnCollisionEnterAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTERTRIGGER_ONCOLLISIONENTERASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnCollisionEnterAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTERTRIGGER_ONCOLLISIONENTERASYNC_1_OFFSET))(this, a1);
		}

	};
}
