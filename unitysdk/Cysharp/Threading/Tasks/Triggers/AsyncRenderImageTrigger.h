#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple.h"
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnRenderImageHandler; }
namespace UnityEngine { class RenderTexture; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDERIMAGETRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F137340)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDERIMAGETRIGGER_GETONRENDERIMAGEASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1F136F90)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDERIMAGETRIGGER_GETONRENDERIMAGEASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1F136EC0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDERIMAGETRIGGER_ONRENDERIMAGEASYNC_1_OFFSET UNITYSDK_OFFSET(0x1F1371C0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDERIMAGETRIGGER_ONRENDERIMAGEASYNC_OFFSET UNITYSDK_OFFSET(0x1F136FF0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDERIMAGETRIGGER_ONRENDERIMAGE_OFFSET UNITYSDK_OFFSET(0x1F136E40)

namespace Cysharp::Threading::Tasks::Triggers
{
	class AsyncRenderImageTrigger
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDERIMAGETRIGGER_CTOR_OFFSET))(this);
		}

		::System::Void OnRenderImage(::UnityEngine::RenderTexture* a1, ::UnityEngine::RenderTexture* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDERIMAGETRIGGER_ONRENDERIMAGE_OFFSET))(this, a1, a2);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnRenderImageHandler* GetOnRenderImageAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnRenderImageHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDERIMAGETRIGGER_GETONRENDERIMAGEASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnRenderImageHandler* GetOnRenderImageAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnRenderImageHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDERIMAGETRIGGER_GETONRENDERIMAGEASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask OnRenderImageAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDERIMAGETRIGGER_ONRENDERIMAGEASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnRenderImageAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDERIMAGETRIGGER_ONRENDERIMAGEASYNC_1_OFFSET))(this, a1);
		}

	};
}
