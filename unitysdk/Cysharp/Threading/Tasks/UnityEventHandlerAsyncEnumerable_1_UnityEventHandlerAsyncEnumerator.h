#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/MoveNextSource.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
namespace System { class Action; }
namespace System { class Object; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Events { class UnityEvent; }

namespace Cysharp::Threading::Tasks
{
	template <typename T>
	class UnityEventHandlerAsyncEnumerable_1_UnityEventHandlerAsyncEnumerator : public ::Cysharp::Threading::Tasks::MoveNextSource
	{
	public:
		::UnityEngine::Events::UnityEvent* unityEvent; // 0x0
		::System::Threading::CancellationToken cancellationToken1; // 0x0
		::System::Threading::CancellationToken cancellationToken2; // 0x0
		::UnityEngine::Events::UnityAction* unityAction; // 0x0
		::System::Threading::CancellationTokenRegistration registration1; // 0x0
		::System::Threading::CancellationTokenRegistration registration2; // 0x0
		::System::Boolean isDisposed; // 0x0
		T _Current_k__BackingField; // 0x0
		static ::System::Action** StaticGet_cancel1()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks", "UnityEventHandlerAsyncEnumerator")->GetStaticField(0x0);
		}

		static ::System::Action** StaticGet_cancel2()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks", "UnityEventHandlerAsyncEnumerator")->GetStaticField(0x0);
		}

	};
}
