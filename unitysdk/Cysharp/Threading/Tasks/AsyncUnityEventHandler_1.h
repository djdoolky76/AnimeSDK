#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Events { class UnityEvent; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int AsyncUnityEventHandler_1_TypeDefinitionIndex = 38482;

	template <typename T>
	class AsyncUnityEventHandler_1 : public ::System::Object
	{
	public:
		::UnityEngine::Events::UnityAction* action; // 0x0
		::UnityEngine::Events::UnityEvent* unityEvent; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Threading::CancellationTokenRegistration registration; // 0x0
		::System::Boolean isDisposed; // 0x0
		::System::Boolean callOnce; // 0x0
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T> core; // 0x0
		static ::System::Action** StaticGet_cancellationCallback()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks", "AsyncUnityEventHandler`1")->GetStaticField(0x0);
		}

	};
}
