#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
#include "unitysdk/System/Object.h"
namespace Cysharp::Threading::Tasks { template <typename T> class ITriggerHandler_1; }
namespace Cysharp::Threading::Tasks::Triggers { template <typename T> class AsyncTriggerBase_1; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncTriggerHandler_1_TypeDefinitionIndex = 38503;

	template <typename T>
	class AsyncTriggerHandler_1 : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<T>* trigger; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Threading::CancellationTokenRegistration registration; // 0x0
		::System::Boolean isDisposed; // 0x0
		::System::Boolean callOnce; // 0x0
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T> core; // 0x0
		::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* _Cysharp_Threading_Tasks_ITriggerHandler_T__Prev_k__BackingField; // 0x0
		::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* _Cysharp_Threading_Tasks_ITriggerHandler_T__Next_k__BackingField; // 0x0
		static ::System::Action_1<::System::Object*>** StaticGet_cancellationCallback()
		{
			return (::System::Action_1<::System::Object*>**)UnitySDK::FromName("Cysharp.Threading.Tasks.Triggers", "AsyncTriggerHandler`1")->GetStaticField(0x0);
		}

	};
}
