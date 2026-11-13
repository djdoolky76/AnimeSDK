#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnTransformChildrenChangedHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMCHILDRENCHANGEDTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F17F160)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMCHILDRENCHANGEDTRIGGER_GETONTRANSFORMCHILDRENCHANGEDASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1F17EDF0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMCHILDRENCHANGEDTRIGGER_GETONTRANSFORMCHILDRENCHANGEDASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1F17ED50)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMCHILDRENCHANGEDTRIGGER_ONTRANSFORMCHILDRENCHANGEDASYNC_1_OFFSET UNITYSDK_OFFSET(0x1F17EFF0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMCHILDRENCHANGEDTRIGGER_ONTRANSFORMCHILDRENCHANGEDASYNC_OFFSET UNITYSDK_OFFSET(0x1F17EE50)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMCHILDRENCHANGEDTRIGGER_ONTRANSFORMCHILDRENCHANGED_OFFSET UNITYSDK_OFFSET(0x1F17ED40)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncTransformChildrenChangedTrigger_TypeDefinitionIndex = 39524;

	class AsyncTransformChildrenChangedTrigger
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMCHILDRENCHANGEDTRIGGER_CTOR_OFFSET))(this);
		}

		::System::Void OnTransformChildrenChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMCHILDRENCHANGEDTRIGGER_ONTRANSFORMCHILDRENCHANGED_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnTransformChildrenChangedHandler* GetOnTransformChildrenChangedAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnTransformChildrenChangedHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMCHILDRENCHANGEDTRIGGER_GETONTRANSFORMCHILDRENCHANGEDASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnTransformChildrenChangedHandler* GetOnTransformChildrenChangedAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnTransformChildrenChangedHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMCHILDRENCHANGEDTRIGGER_GETONTRANSFORMCHILDRENCHANGEDASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask OnTransformChildrenChangedAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMCHILDRENCHANGEDTRIGGER_ONTRANSFORMCHILDRENCHANGEDASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnTransformChildrenChangedAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMCHILDRENCHANGEDTRIGGER_ONTRANSFORMCHILDRENCHANGEDASYNC_1_OFFSET))(this, a1);
		}

	};
}
