#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/TaskPool_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/System/Object.h"
namespace Cysharp::Threading::Tasks::CompilerServices { template <typename T> class AsyncUniTask_1; }
namespace System { class Action; }

namespace Cysharp::Threading::Tasks::CompilerServices
{
	inline static constexpr unsigned int AsyncUniTask_1_TypeDefinitionIndex = 38712;

	template <typename T>
	class AsyncUniTask_1 : public ::System::Object
	{
	public:
		::System::Action* returnDelegate; // 0x0
		::System::Action* _MoveNext_k__BackingField; // 0x0
		T stateMachine; // 0x0
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit> core; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<T>* nextNode; // 0x0
		static ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<T>*>* StaticGet_pool()
		{
			return (::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<T>*>*)UnitySDK::FromName("Cysharp.Threading.Tasks.CompilerServices", "AsyncUniTask`1")->GetStaticField(0x0);
		}

	};
}
