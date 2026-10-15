#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/TaskPool_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/SpookyHash_U.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace UnityEngine { class Object; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_WaitUntilValueChangedUnityObjectPromise_2_TypeDefinitionIndex = 38262;

	template <typename T1, typename T2>
	class UniTask_WaitUntilValueChangedUnityObjectPromise_2 : public ::System::Object
	{
	public:
		::System::Object* nextNode; // 0x0
		T1 target; // 0x0
		::UnityEngine::Object* targetAsUnityObject; // 0x0
		T2 currentValue; // 0x0
		::System::Func_2<T2, ::UnityEngine::SpookyHash_U>* monitorFunction; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::SpookyHash_U>* equalityComparer; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Threading::CancellationTokenRegistration cancellationTokenRegistration; // 0x0
		::System::Boolean cancelImmediately; // 0x0
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityEngine::SpookyHash_U> core; // 0x0
		static ::Cysharp::Threading::Tasks::TaskPool_1<::System::Object*>* StaticGet_pool()
		{
			return (::Cysharp::Threading::Tasks::TaskPool_1<::System::Object*>*)UnitySDK::FromName("Cysharp.Threading.Tasks", "WaitUntilValueChangedUnityObjectPromise`2")->GetStaticField(0x0);
		}

	};
}
