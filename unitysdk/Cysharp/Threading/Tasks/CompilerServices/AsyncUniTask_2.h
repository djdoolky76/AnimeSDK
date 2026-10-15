#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/TaskPool_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/System/Object.h"
namespace Cysharp::Threading::Tasks::CompilerServices { template <typename T1, typename T2> class AsyncUniTask_2; }
namespace System { class Action; }

namespace Cysharp::Threading::Tasks::CompilerServices
{
	inline static constexpr unsigned int AsyncUniTask_2_TypeDefinitionIndex = 38714;

	template <typename T1, typename T2>
	class AsyncUniTask_2 : public ::System::Object
	{
	public:
		::System::Action* returnDelegate; // 0x0
		::System::Action* _MoveNext_k__BackingField; // 0x0
		T2 stateMachine; // 0x0
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T2> core; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<T1, T2>* nextNode; // 0x0
		static ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<T1, T2>*>* StaticGet_pool()
		{
			return (::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<T1, T2>*>*)UnitySDK::FromName("Cysharp.Threading.Tasks.CompilerServices", "AsyncUniTask`2")->GetStaticField(0x0);
		}

	};
}
