#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/System/Object.h"
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class WeakReference_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int EveryValueChangedStandardObject_2_TypeDefinitionIndex = 45718;

	template <typename T1, typename T2>
	class EveryValueChangedStandardObject_2 : public ::System::Object
	{
	public:
		::System::WeakReference_1<T1>* target; // 0x0
		::System::Func_2<T1, T2>* propertySelector; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<T2>* equalityComparer; // 0x0
		::Cysharp::Threading::Tasks::PlayerLoopTiming monitorTiming; // 0x0
		::System::Boolean cancelImmediately; // 0x0
	};
}
