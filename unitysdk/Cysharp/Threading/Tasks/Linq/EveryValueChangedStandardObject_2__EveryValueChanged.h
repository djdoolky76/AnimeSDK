#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/MoveNextSource.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
namespace System { class WeakReference; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	template <typename T1, typename T2>
	class EveryValueChangedStandardObject_2__EveryValueChanged : public ::Cysharp::Threading::Tasks::MoveNextSource
	{
	public:
		::System::WeakReference* target; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<T2>* equalityComparer; // 0x0
		::System::Func_2<T1, T2>* propertySelector; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Threading::CancellationTokenRegistration cancellationTokenRegistration; // 0x0
		::System::Boolean first; // 0x0
		T2 currentValue; // 0x0
		::System::Boolean disposed; // 0x0
	};
}
