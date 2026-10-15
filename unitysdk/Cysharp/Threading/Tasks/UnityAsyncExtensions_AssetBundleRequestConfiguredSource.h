#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
#include "unitysdk/System/Object.h"
namespace Cysharp::Threading::Tasks { class IUniTaskSource; }
namespace Cysharp::Threading::Tasks { class TaskPool; }
namespace Cysharp::Threading::Tasks { class UnityAsyncExtensions_AssetBundleRequestConfiguredSource; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class IProgress_1; }
namespace UnityEngine { class AssetBundleRequest; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine { class Object; }

#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F15E070)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE_CONTINUATION_OFFSET UNITYSDK_OFFSET(0x1F15E890)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE_CREATE_OFFSET UNITYSDK_OFFSET(0x1F158B20)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F15E170)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE_CYSHARP_THREADING_TASKS_IUNITASKSOURCE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1F15E3D0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1F15E1F0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1F15E490)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE_GET_NEXTNODE_OFFSET UNITYSDK_OFFSET(0x1F15E060)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1F15E610)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1F15E5B0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE_TRYRETURN_OFFSET UNITYSDK_OFFSET(0x1F15E2C0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1F15E560)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UnityAsyncExtensions_AssetBundleRequestConfiguredSource_TypeDefinitionIndex = 38463;

	class UnityAsyncExtensions_AssetBundleRequestConfiguredSource : public ::System::Object
	{
	public:
		::System::Action* continuationAction; // 0x10
		::System::Threading::CancellationTokenRegistration cancellationTokenRegistration; // 0x18
		::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource* nextNode; // 0x30
		::System::IProgress_1<::System::Single>* progress; // 0x38
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityEngine::Object*> core; // 0x40
		::System::Byte _padding0[0x20];
		::System::Threading::CancellationToken cancellationToken; // 0x68
		::UnityEngine::AssetBundleRequest* asyncOperation; // 0x70
		::System::Boolean cancelImmediately; // 0x78
		::System::Boolean completed; // 0x79
		static ::Cysharp::Threading::Tasks::TaskPool** StaticGet_pool()
		{
			return (::Cysharp::Threading::Tasks::TaskPool**)UnitySDK::FromName("Cysharp.Threading.Tasks", "AssetBundleRequestConfiguredSource")->GetStaticField(0x49360);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE_CTOR_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource* get_NextNode()
		{
			return ((::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE_GET_NEXTNODE_OFFSET))(this);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskSource* Create(::UnityEngine::AssetBundleRequest* a1, ::Cysharp::Threading::Tasks::PlayerLoopTiming a2, ::System::IProgress_1<::System::Single>* a3, ::System::Threading::CancellationToken a4, ::System::Boolean a5, ::System::Int16 a6)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskSource*(*)(::UnityEngine::AssetBundleRequest*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::IProgress_1<::System::Single>*, ::System::Threading::CancellationToken, ::System::Boolean, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE_CREATE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		::UnityEngine::Object* GetResult(::System::Int16 a1)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE_GETRESULT_OFFSET))(this, a1);
		}

		::System::Void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE_CYSHARP_THREADING_TASKS_IUNITASKSOURCE_GETRESULT_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(::System::Int16 a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE_GETSTATUS_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE_UNSAFEGETSTATUS_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action* a1, ::System::Object* a2, ::System::Int16 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Object*, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE_ONCOMPLETED_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE_MOVENEXT_OFFSET))(this);
		}

		::System::Boolean TryReturn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE_TRYRETURN_OFFSET))(this);
		}

		::System::Void Continuation(::UnityEngine::AsyncOperation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AsyncOperation*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE_CONTINUATION_OFFSET))(this, a1);
		}

	};
}
