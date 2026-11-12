#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnApplicationFocusHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONFOCUSTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x203D86A0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONFOCUSTRIGGER_GETONAPPLICATIONFOCUSASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x203D8330)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONFOCUSTRIGGER_GETONAPPLICATIONFOCUSASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x203D8290)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONFOCUSTRIGGER_ONAPPLICATIONFOCUSASYNC_1_OFFSET UNITYSDK_OFFSET(0x203D8530)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONFOCUSTRIGGER_ONAPPLICATIONFOCUSASYNC_OFFSET UNITYSDK_OFFSET(0x203D8390)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONFOCUSTRIGGER_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x203D8280)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncApplicationFocusTrigger_TypeDefinitionIndex = 39442;

	class AsyncApplicationFocusTrigger
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONFOCUSTRIGGER_CTOR_OFFSET))(this);
		}

		::System::Void OnApplicationFocus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONFOCUSTRIGGER_ONAPPLICATIONFOCUS_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationFocusHandler* GetOnApplicationFocusAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationFocusHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONFOCUSTRIGGER_GETONAPPLICATIONFOCUSASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationFocusHandler* GetOnApplicationFocusAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationFocusHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONFOCUSTRIGGER_GETONAPPLICATIONFOCUSASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> OnApplicationFocusAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONFOCUSTRIGGER_ONAPPLICATIONFOCUSASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> OnApplicationFocusAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONFOCUSTRIGGER_ONAPPLICATIONFOCUSASYNC_1_OFFSET))(this, a1);
		}

	};
}
