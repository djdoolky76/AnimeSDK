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
namespace System { template <typename T> class WeakReference_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_WaitUntilValueChangedStandardObjectPromise_2_TypeDefinitionIndex = 38264;

	template <typename T1, typename T2>
	class UniTask_WaitUntilValueChangedStandardObjectPromise_2 : public ::System::Object
	{
	public:
		::System::Object* nextNode; // 0x0
		::System::WeakReference_1<T1>* target; // 0x0
		T2 currentValue; // 0x0
		::System::Func_2<T1, ::UnityEngine::SpookyHash_U>* monitorFunction; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::SpookyHash_U>* equalityComparer; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Threading::CancellationTokenRegistration cancellationTokenRegistration; // 0x0
		::System::Boolean cancelImmediately; // 0x0
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityEngine::SpookyHash_U> core; // 0x0
		static ::Cysharp::Threading::Tasks::TaskPool_1<::System::Object*>* StaticGet_pool()
		{
			return (::Cysharp::Threading::Tasks::TaskPool_1<::System::Object*>*)UnitySDK::FromName("Cysharp.Threading.Tasks", "WaitUntilValueChangedStandardObjectPromise`2")->GetStaticField(0x0);
		}

	};
}
