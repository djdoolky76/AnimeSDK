#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnCollisionEnter2DHandler; }
namespace UnityEngine { class Collision2D; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTER2DTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x203DB270)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTER2DTRIGGER_GETONCOLLISIONENTER2DASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x203DAEC0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTER2DTRIGGER_GETONCOLLISIONENTER2DASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x203DADF0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTER2DTRIGGER_ONCOLLISIONENTER2DASYNC_1_OFFSET UNITYSDK_OFFSET(0x203DB0F0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTER2DTRIGGER_ONCOLLISIONENTER2DASYNC_OFFSET UNITYSDK_OFFSET(0x203DAF20)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTER2DTRIGGER_ONCOLLISIONENTER2D_OFFSET UNITYSDK_OFFSET(0x203DAD80)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncCollisionEnter2DTrigger_TypeDefinitionIndex = 39460;

	class AsyncCollisionEnter2DTrigger
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTER2DTRIGGER_CTOR_OFFSET))(this);
		}

		::System::Void OnCollisionEnter2D(::UnityEngine::Collision2D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision2D*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTER2DTRIGGER_ONCOLLISIONENTER2D_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionEnter2DHandler* GetOnCollisionEnter2DAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionEnter2DHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTER2DTRIGGER_GETONCOLLISIONENTER2DASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionEnter2DHandler* GetOnCollisionEnter2DAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionEnter2DHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTER2DTRIGGER_GETONCOLLISIONENTER2DASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision2D*> OnCollisionEnter2DAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision2D*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTER2DTRIGGER_ONCOLLISIONENTER2DASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision2D*> OnCollisionEnter2DAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision2D*>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONENTER2DTRIGGER_ONCOLLISIONENTER2DASYNC_1_OFFSET))(this, a1);
		}

	};
}
