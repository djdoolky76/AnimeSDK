#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }
namespace UnityEngine::Events { template <typename T> class UnityEvent_1; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int AsyncUnityEventHandler_1_TypeDefinitionIndex = 38482;

	template <typename T>
	class AsyncUnityEventHandler_1 : public ::System::Object
	{
	public:
		::UnityEngine::Events::UnityAction_1<T>* action; // 0x0
		::UnityEngine::Events::UnityEvent_1<T>* unityEvent; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Threading::CancellationTokenRegistration registration; // 0x0
		::System::Boolean isDisposed; // 0x0
		::System::Boolean callOnce; // 0x0
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T> core; // 0x0
		static ::System::Action_1<::System::Object*>** StaticGet_cancellationCallback()
		{
			return (::System::Action_1<::System::Object*>**)UnitySDK::FromName("Cysharp.Threading.Tasks", "AsyncUnityEventHandler`1")->GetStaticField(0x0);
		}

	};
}
