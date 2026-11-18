#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace ObservableCollections
{
	inline static constexpr unsigned int ObservableStack_1_View_1__GetEnumerator_d__23_TypeDefinitionIndex = 28329;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23>
	class ObservableStack_1_View_1__GetEnumerator_d__23 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		::System::ValueTuple_2<T1, T2> __2__current; // 0x0
		::System::Object* __4__this; // 0x0
		::System::Object* __7__wrap1; // 0x0
		::System::Boolean __7__wrap2; // 0x0
		::System::Object* __7__wrap3; // 0x0
		::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<T1, T2>>* __7__wrap4; // 0x0
	};
}
