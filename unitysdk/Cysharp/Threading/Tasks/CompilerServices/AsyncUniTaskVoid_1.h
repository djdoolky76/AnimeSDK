#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Cysharp::Threading::Tasks { class TaskPool; }
namespace Cysharp::Threading::Tasks::CompilerServices { template <typename T> class AsyncUniTaskVoid_1; }
namespace System { class Action; }

namespace Cysharp::Threading::Tasks::CompilerServices
{
	inline static constexpr unsigned int AsyncUniTaskVoid_1_TypeDefinitionIndex = 38710;

	template <typename T>
	class AsyncUniTaskVoid_1 : public ::System::Object
	{
	public:
		::System::Action* _ReturnAction_k__BackingField; // 0x0
		T stateMachine; // 0x0
		::System::Action* _MoveNext_k__BackingField; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoid_1<T>* nextNode; // 0x0
		static ::Cysharp::Threading::Tasks::TaskPool** StaticGet_pool()
		{
			return (::Cysharp::Threading::Tasks::TaskPool**)UnitySDK::FromName("Cysharp.Threading.Tasks.CompilerServices", "AsyncUniTaskVoid`1")->GetStaticField(0x0);
		}

	};
}
