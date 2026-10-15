#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
#include "unitysdk/System/Object.h"
namespace Cysharp::Threading::Tasks { class TaskPool; }
namespace Cysharp::Threading::Tasks { template <typename T> class ITriggerHandler_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class ReadOnlyAsyncReactiveProperty_1; }
namespace System { class Action; }
namespace System { class Object; }

namespace Cysharp::Threading::Tasks
{
	template <typename T>
	class ReadOnlyAsyncReactiveProperty_1_WaitAsyncSource : public ::System::Object
	{
	public:
		::System::Object* nextNode; // 0x0
		::Cysharp::Threading::Tasks::ReadOnlyAsyncReactiveProperty_1<T>* parent; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Threading::CancellationTokenRegistration cancellationTokenRegistration; // 0x0
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T> core; // 0x0
		::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* _Cysharp_Threading_Tasks_ITriggerHandler_T__Prev_k__BackingField; // 0x0
		::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* _Cysharp_Threading_Tasks_ITriggerHandler_T__Next_k__BackingField; // 0x0
		static ::System::Action** StaticGet_cancellationCallback()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks", "WaitAsyncSource")->GetStaticField(0x0);
		}

		static ::Cysharp::Threading::Tasks::TaskPool** StaticGet_pool()
		{
			return (::Cysharp::Threading::Tasks::TaskPool**)UnitySDK::FromName("Cysharp.Threading.Tasks", "WaitAsyncSource")->GetStaticField(0x0);
		}

	};
}
