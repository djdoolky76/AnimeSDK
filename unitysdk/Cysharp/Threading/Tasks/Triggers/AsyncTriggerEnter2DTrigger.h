#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnTriggerEnter2DHandler; }
namespace UnityEngine { class Collider2D; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTER2DTRIGGER_GETONTRIGGERENTER2DASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x20030610)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTER2DTRIGGER_GETONTRIGGERENTER2DASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x20030530)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTER2DTRIGGER_ONTRIGGERENTER2DASYNC_1_OFFSET UNITYSDK_OFFSET(0x200307F0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTER2DTRIGGER_ONTRIGGERENTER2DASYNC_OFFSET UNITYSDK_OFFSET(0x20030670)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTER2DTRIGGER_ONTRIGGERENTER2D_OFFSET UNITYSDK_OFFSET(0x200304C0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTER2DTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x20030910)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncTriggerEnter2DTrigger_TypeDefinitionIndex = 31488;

	class AsyncTriggerEnter2DTrigger
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTER2DTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnTriggerEnter2D(::UnityEngine::Collider2D* other)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider2D*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTER2DTRIGGER_ONTRIGGERENTER2D_OFFSET))(this, other);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerEnter2DHandler* GetOnTriggerEnter2DAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerEnter2DHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTER2DTRIGGER_GETONTRIGGERENTER2DASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerEnter2DHandler* GetOnTriggerEnter2DAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerEnter2DHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTER2DTRIGGER_GETONTRIGGERENTER2DASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collider2D*> OnTriggerEnter2DAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collider2D*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTER2DTRIGGER_ONTRIGGERENTER2DASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collider2D*> OnTriggerEnter2DAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collider2D*>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERENTER2DTRIGGER_ONTRIGGERENTER2DASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
