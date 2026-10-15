#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/TaskPool_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_WaitWhilePromise_1_TypeDefinitionIndex = 38258;

	template <typename T>
	class UniTask_WaitWhilePromise_1 : public ::System::Object
	{
	public:
		::System::Object* nextNode; // 0x0
		::System::Func_2<T, ::System::Boolean>* predicate; // 0x0
		T argument; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Threading::CancellationTokenRegistration cancellationTokenRegistration; // 0x0
		::System::Boolean cancelImmediately; // 0x0
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*> core; // 0x0
		static ::Cysharp::Threading::Tasks::TaskPool_1<::System::Object*>* StaticGet_pool()
		{
			return (::Cysharp::Threading::Tasks::TaskPool_1<::System::Object*>*)UnitySDK::FromName("Cysharp.Threading.Tasks", "WaitWhilePromise`1")->GetStaticField(0x0);
		}

	};
}
