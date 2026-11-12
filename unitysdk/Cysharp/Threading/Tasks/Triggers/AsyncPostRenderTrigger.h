#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnPostRenderHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOSTRENDERTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x203E6CA0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOSTRENDERTRIGGER_GETONPOSTRENDERASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x203E6930)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOSTRENDERTRIGGER_GETONPOSTRENDERASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x203E6880)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOSTRENDERTRIGGER_ONPOSTRENDERASYNC_1_OFFSET UNITYSDK_OFFSET(0x203E6B30)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOSTRENDERTRIGGER_ONPOSTRENDERASYNC_OFFSET UNITYSDK_OFFSET(0x203E6990)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOSTRENDERTRIGGER_ONPOSTRENDER_OFFSET UNITYSDK_OFFSET(0x203E6870)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncPostRenderTrigger_TypeDefinitionIndex = 39508;

	class AsyncPostRenderTrigger
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOSTRENDERTRIGGER_CTOR_OFFSET))(this);
		}

		::System::Void OnPostRender()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOSTRENDERTRIGGER_ONPOSTRENDER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnPostRenderHandler* GetOnPostRenderAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnPostRenderHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOSTRENDERTRIGGER_GETONPOSTRENDERASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnPostRenderHandler* GetOnPostRenderAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnPostRenderHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOSTRENDERTRIGGER_GETONPOSTRENDERASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask OnPostRenderAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOSTRENDERTRIGGER_ONPOSTRENDERASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnPostRenderAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOSTRENDERTRIGGER_ONPOSTRENDERASYNC_1_OFFSET))(this, a1);
		}

	};
}
