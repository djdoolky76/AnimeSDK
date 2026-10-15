#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/MoveNextSource.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
namespace Cysharp::Threading::Tasks { template <typename T> class ITriggerHandler_1; }
namespace Cysharp::Threading::Tasks::Linq { template <typename T> class Publish_1; }
namespace System { class Action; }
namespace System { class Object; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Publish_1__Publish_TypeDefinitionIndex = 45536;

	template <typename T>
	class Publish_1__Publish : public ::Cysharp::Threading::Tasks::MoveNextSource
	{
	public:
		::Cysharp::Threading::Tasks::Linq::Publish_1<T>* parent; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Threading::CancellationTokenRegistration cancellationTokenRegistration; // 0x0
		::System::Boolean isDisposed; // 0x0
		T _Current_k__BackingField; // 0x0
		::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* _Cysharp_Threading_Tasks_ITriggerHandler_TSource__Prev_k__BackingField; // 0x0
		::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* _Cysharp_Threading_Tasks_ITriggerHandler_TSource__Next_k__BackingField; // 0x0
		static ::System::Action** StaticGet_CancelDelegate()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "_Publish")->GetStaticField(0x0);
		}

	};
}
