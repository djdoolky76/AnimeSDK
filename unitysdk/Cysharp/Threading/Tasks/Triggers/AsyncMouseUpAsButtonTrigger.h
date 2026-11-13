#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnMouseUpAsButtonHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPASBUTTONTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F177A30)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPASBUTTONTRIGGER_GETONMOUSEUPASBUTTONASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1F1776C0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPASBUTTONTRIGGER_GETONMOUSEUPASBUTTONASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1F177620)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPASBUTTONTRIGGER_ONMOUSEUPASBUTTONASYNC_1_OFFSET UNITYSDK_OFFSET(0x1F1778C0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPASBUTTONTRIGGER_ONMOUSEUPASBUTTONASYNC_OFFSET UNITYSDK_OFFSET(0x1F177720)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPASBUTTONTRIGGER_ONMOUSEUPASBUTTON_OFFSET UNITYSDK_OFFSET(0x1F177610)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncMouseUpAsButtonTrigger_TypeDefinitionIndex = 39498;

	class AsyncMouseUpAsButtonTrigger
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPASBUTTONTRIGGER_CTOR_OFFSET))(this);
		}

		::System::Void OnMouseUpAsButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPASBUTTONTRIGGER_ONMOUSEUPASBUTTON_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseUpAsButtonHandler* GetOnMouseUpAsButtonAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseUpAsButtonHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPASBUTTONTRIGGER_GETONMOUSEUPASBUTTONASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseUpAsButtonHandler* GetOnMouseUpAsButtonAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseUpAsButtonHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPASBUTTONTRIGGER_GETONMOUSEUPASBUTTONASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask OnMouseUpAsButtonAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPASBUTTONTRIGGER_ONMOUSEUPASBUTTONASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnMouseUpAsButtonAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPASBUTTONTRIGGER_ONMOUSEUPASBUTTONASYNC_1_OFFSET))(this, a1);
		}

	};
}
