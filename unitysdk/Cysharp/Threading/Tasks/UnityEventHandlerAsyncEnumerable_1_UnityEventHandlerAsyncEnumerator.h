#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/MoveNextSource.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }
namespace UnityEngine::Events { template <typename T> class UnityEvent_1; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UnityEventHandlerAsyncEnumerable_1_UnityEventHandlerAsyncEnumerator_TypeDefinitionIndex = 38486;

	template <typename T>
	class UnityEventHandlerAsyncEnumerable_1_UnityEventHandlerAsyncEnumerator : public ::Cysharp::Threading::Tasks::MoveNextSource
	{
	public:
		::UnityEngine::Events::UnityEvent_1<T>* unityEvent; // 0x0
		::System::Threading::CancellationToken cancellationToken1; // 0x0
		::System::Threading::CancellationToken cancellationToken2; // 0x0
		::UnityEngine::Events::UnityAction_1<T>* unityAction; // 0x0
		::System::Threading::CancellationTokenRegistration registration1; // 0x0
		::System::Threading::CancellationTokenRegistration registration2; // 0x0
		::System::Boolean isDisposed; // 0x0
		T _Current_k__BackingField; // 0x0
		static ::System::Action_1<::System::Object*>** StaticGet_cancel1()
		{
			return (::System::Action_1<::System::Object*>**)UnitySDK::FromName("Cysharp.Threading.Tasks", "UnityEventHandlerAsyncEnumerator")->GetStaticField(0x0);
		}

		static ::System::Action_1<::System::Object*>** StaticGet_cancel2()
		{
			return (::System::Action_1<::System::Object*>**)UnitySDK::FromName("Cysharp.Threading.Tasks", "UnityEventHandlerAsyncEnumerator")->GetStaticField(0x0);
		}

	};
}
