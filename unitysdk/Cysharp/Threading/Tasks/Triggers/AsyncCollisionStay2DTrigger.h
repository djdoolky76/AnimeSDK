#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnCollisionStay2DHandler; }
namespace UnityEngine { class Collision2D; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAY2DTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1711E0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAY2DTRIGGER_GETONCOLLISIONSTAY2DASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1F170E20)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAY2DTRIGGER_GETONCOLLISIONSTAY2DASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1F170D40)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAY2DTRIGGER_ONCOLLISIONSTAY2DASYNC_1_OFFSET UNITYSDK_OFFSET(0x1F171060)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAY2DTRIGGER_ONCOLLISIONSTAY2DASYNC_OFFSET UNITYSDK_OFFSET(0x1F170E80)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAY2DTRIGGER_ONCOLLISIONSTAY2D_OFFSET UNITYSDK_OFFSET(0x1F170CD0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncCollisionStay2DTrigger_TypeDefinitionIndex = 39468;

	class AsyncCollisionStay2DTrigger
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAY2DTRIGGER_CTOR_OFFSET))(this);
		}

		::System::Void OnCollisionStay2D(::UnityEngine::Collision2D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision2D*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAY2DTRIGGER_ONCOLLISIONSTAY2D_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionStay2DHandler* GetOnCollisionStay2DAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionStay2DHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAY2DTRIGGER_GETONCOLLISIONSTAY2DASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionStay2DHandler* GetOnCollisionStay2DAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionStay2DHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAY2DTRIGGER_GETONCOLLISIONSTAY2DASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision2D*> OnCollisionStay2DAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision2D*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAY2DTRIGGER_ONCOLLISIONSTAY2DASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision2D*> OnCollisionStay2DAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision2D*>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCOLLISIONSTAY2DTRIGGER_ONCOLLISIONSTAY2DASYNC_1_OFFSET))(this, a1);
		}

	};
}
