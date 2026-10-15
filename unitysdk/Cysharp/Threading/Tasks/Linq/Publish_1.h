#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/TriggerEvent_1.h"
#include "unitysdk/System/Object.h"
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System { class IDisposable; }
namespace System::Threading { class CancellationTokenSource; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Publish_1_TypeDefinitionIndex = 45534;

	template <typename T>
	class Publish_1 : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* source; // 0x0
		::System::Threading::CancellationTokenSource* cancellationTokenSource; // 0x0
		::Cysharp::Threading::Tasks::TriggerEvent_1<T> trigger; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>* enumerator; // 0x0
		::System::IDisposable* connectedDisposable; // 0x0
		::System::Boolean isCompleted; // 0x0
	};
}
