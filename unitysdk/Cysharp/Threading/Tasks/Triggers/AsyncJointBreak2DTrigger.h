#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnJointBreak2DHandler; }
namespace UnityEngine { class Joint2D; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAK2DTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F175830)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAK2DTRIGGER_GETONJOINTBREAK2DASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1F175470)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAK2DTRIGGER_GETONJOINTBREAK2DASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1F175390)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAK2DTRIGGER_ONJOINTBREAK2DASYNC_1_OFFSET UNITYSDK_OFFSET(0x1F1756B0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAK2DTRIGGER_ONJOINTBREAK2DASYNC_OFFSET UNITYSDK_OFFSET(0x1F1754D0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAK2DTRIGGER_ONJOINTBREAK2D_OFFSET UNITYSDK_OFFSET(0x1F175320)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncJointBreak2DTrigger_TypeDefinitionIndex = 39484;

	class AsyncJointBreak2DTrigger
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAK2DTRIGGER_CTOR_OFFSET))(this);
		}

		::System::Void OnJointBreak2D(::UnityEngine::Joint2D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Joint2D*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAK2DTRIGGER_ONJOINTBREAK2D_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnJointBreak2DHandler* GetOnJointBreak2DAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnJointBreak2DHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAK2DTRIGGER_GETONJOINTBREAK2DASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnJointBreak2DHandler* GetOnJointBreak2DAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnJointBreak2DHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAK2DTRIGGER_GETONJOINTBREAK2DASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Joint2D*> OnJointBreak2DAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Joint2D*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAK2DTRIGGER_ONJOINTBREAK2DASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Joint2D*> OnJointBreak2DAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Joint2D*>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAK2DTRIGGER_ONJOINTBREAK2DASYNC_1_OFFSET))(this, a1);
		}

	};
}
