#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace ObservableCollections::Internal { template <typename T1, typename T2> class FreezedSortableView_2; }

namespace ObservableCollections::Internal
{
	inline static constexpr unsigned int FreezedSortableView_2__GetEnumerator_d__18_TypeDefinitionIndex = 28270;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18>
	class FreezedSortableView_2__GetEnumerator_d__18 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		::System::ValueTuple_2<T1, T2> __2__current; // 0x0
		::ObservableCollections::Internal::FreezedSortableView_2<T1, T2>* __4__this; // 0x0
		::System::Object* __7__wrap1; // 0x0
		::System::Boolean __7__wrap2; // 0x0
		::Il2CppArray<::System::ValueTuple_2<T1, T2>>* __7__wrap3; // 0x0
		::System::Int32 __7__wrap4; // 0x0
	};
}
