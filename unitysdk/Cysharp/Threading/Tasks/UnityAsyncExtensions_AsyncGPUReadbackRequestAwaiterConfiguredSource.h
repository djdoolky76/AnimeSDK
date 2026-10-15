#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/AsyncGPUReadbackRequest.h"
namespace Cysharp::Threading::Tasks { class IUniTaskSource; }
namespace Cysharp::Threading::Tasks { class TaskPool; }
namespace Cysharp::Threading::Tasks { class UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource; }
namespace System { class Action; }
namespace System { class Object; }

#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCGPUREADBACKREQUESTAWAITERCONFIGUREDSOURCE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F15EAB0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCGPUREADBACKREQUESTAWAITERCONFIGUREDSOURCE_CREATE_OFFSET UNITYSDK_OFFSET(0x1F157530)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCGPUREADBACKREQUESTAWAITERCONFIGUREDSOURCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F15EBB0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCGPUREADBACKREQUESTAWAITERCONFIGUREDSOURCE_CYSHARP_THREADING_TASKS_IUNITASKSOURCE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1F15EDD0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCGPUREADBACKREQUESTAWAITERCONFIGUREDSOURCE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1F15EBC0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCGPUREADBACKREQUESTAWAITERCONFIGUREDSOURCE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1F15EDF0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCGPUREADBACKREQUESTAWAITERCONFIGUREDSOURCE_GET_NEXTNODE_OFFSET UNITYSDK_OFFSET(0x1F15EAA0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCGPUREADBACKREQUESTAWAITERCONFIGUREDSOURCE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1F15EF10)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCGPUREADBACKREQUESTAWAITERCONFIGUREDSOURCE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1F15EEF0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCGPUREADBACKREQUESTAWAITERCONFIGUREDSOURCE_TRYRETURN_OFFSET UNITYSDK_OFFSET(0x1F15ED20)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCGPUREADBACKREQUESTAWAITERCONFIGUREDSOURCE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1F15EEA0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource_TypeDefinitionIndex = 38453;

	class UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest> core; // 0x10
		::System::Byte _padding0[0x28];
		::System::Threading::CancellationTokenRegistration cancellationTokenRegistration; // 0x40
		::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource* nextNode; // 0x58
		::System::Threading::CancellationToken cancellationToken; // 0x60
		::UnityEngine::Rendering::AsyncGPUReadbackRequest asyncOperation; // 0x68
		::System::Boolean cancelImmediately; // 0x78
		static ::Cysharp::Threading::Tasks::TaskPool** StaticGet_pool()
		{
			return (::Cysharp::Threading::Tasks::TaskPool**)UnitySDK::FromName("Cysharp.Threading.Tasks", "AsyncGPUReadbackRequestAwaiterConfiguredSource")->GetStaticField(0x49410);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCGPUREADBACKREQUESTAWAITERCONFIGUREDSOURCE_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCGPUREADBACKREQUESTAWAITERCONFIGUREDSOURCE_CTOR_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource* get_NextNode()
		{
			return ((::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCGPUREADBACKREQUESTAWAITERCONFIGUREDSOURCE_GET_NEXTNODE_OFFSET))(this);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskSource* Create(::UnityEngine::Rendering::AsyncGPUReadbackRequest a1, ::Cysharp::Threading::Tasks::PlayerLoopTiming a2, ::System::Threading::CancellationToken a3, ::System::Boolean a4, ::System::Int16 a5)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskSource*(*)(::UnityEngine::Rendering::AsyncGPUReadbackRequest, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::System::Boolean, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCGPUREADBACKREQUESTAWAITERCONFIGUREDSOURCE_CREATE_OFFSET))(a1, a2, a3, a4, a5);
		}

		::UnityEngine::Rendering::AsyncGPUReadbackRequest GetResult(::System::Int16 a1)
		{
			return ((::UnityEngine::Rendering::AsyncGPUReadbackRequest(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCGPUREADBACKREQUESTAWAITERCONFIGUREDSOURCE_GETRESULT_OFFSET))(this, a1);
		}

		::System::Void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCGPUREADBACKREQUESTAWAITERCONFIGUREDSOURCE_CYSHARP_THREADING_TASKS_IUNITASKSOURCE_GETRESULT_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(::System::Int16 a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCGPUREADBACKREQUESTAWAITERCONFIGUREDSOURCE_GETSTATUS_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCGPUREADBACKREQUESTAWAITERCONFIGUREDSOURCE_UNSAFEGETSTATUS_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action* a1, ::System::Object* a2, ::System::Int16 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Object*, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCGPUREADBACKREQUESTAWAITERCONFIGUREDSOURCE_ONCOMPLETED_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCGPUREADBACKREQUESTAWAITERCONFIGUREDSOURCE_MOVENEXT_OFFSET))(this);
		}

		::System::Boolean TryReturn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCGPUREADBACKREQUESTAWAITERCONFIGUREDSOURCE_TRYRETURN_OFFSET))(this);
		}

	};
}
