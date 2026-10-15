#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple.h"
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnAudioFilterReadHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAUDIOFILTERREADTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F128370)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAUDIOFILTERREADTRIGGER_GETONAUDIOFILTERREADASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1F127FB0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAUDIOFILTERREADTRIGGER_GETONAUDIOFILTERREADASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1F127ED0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAUDIOFILTERREADTRIGGER_ONAUDIOFILTERREADASYNC_1_OFFSET UNITYSDK_OFFSET(0x1F1281F0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAUDIOFILTERREADTRIGGER_ONAUDIOFILTERREADASYNC_OFFSET UNITYSDK_OFFSET(0x1F128010)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAUDIOFILTERREADTRIGGER_ONAUDIOFILTERREAD_OFFSET UNITYSDK_OFFSET(0x1F127E50)

namespace Cysharp::Threading::Tasks::Triggers
{
	class AsyncAudioFilterReadTrigger
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAUDIOFILTERREADTRIGGER_CTOR_OFFSET))(this);
		}

		::System::Void OnAudioFilterRead(::Il2CppArray<::System::Single>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAUDIOFILTERREADTRIGGER_ONAUDIOFILTERREAD_OFFSET))(this, a1, a2);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnAudioFilterReadHandler* GetOnAudioFilterReadAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnAudioFilterReadHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAUDIOFILTERREADTRIGGER_GETONAUDIOFILTERREADASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnAudioFilterReadHandler* GetOnAudioFilterReadAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnAudioFilterReadHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAUDIOFILTERREADTRIGGER_GETONAUDIOFILTERREADASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask OnAudioFilterReadAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAUDIOFILTERREADTRIGGER_ONAUDIOFILTERREADASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnAudioFilterReadAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAUDIOFILTERREADTRIGGER_ONAUDIOFILTERREADASYNC_1_OFFSET))(this, a1);
		}

	};
}
