#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace ObservableCollections::Internal { template <typename T1, typename T2> class NotifyCollectionChangedSynchronizedView_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace ObservableCollections::Internal
{
	inline static constexpr unsigned int NotifyCollectionChangedSynchronizedView_2__GetEnumerator_d__21_TypeDefinitionIndex = 28206;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21>
	class NotifyCollectionChangedSynchronizedView_2__GetEnumerator_d__21 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		T1 __2__current; // 0x0
		::ObservableCollections::Internal::NotifyCollectionChangedSynchronizedView_2<T2, T3>* __4__this; // 0x0
		::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<T2, T3>>* __7__wrap1; // 0x0
	};
}
