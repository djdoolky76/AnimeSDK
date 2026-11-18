#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace ObservableCollections::Internal { template <typename T1, typename T2> class FreezedView_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace ObservableCollections::Internal
{
	inline static constexpr unsigned int FreezedView_2__GetEnumerator_d__19_TypeDefinitionIndex = 28136;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19>
	class FreezedView_2__GetEnumerator_d__19 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		::System::ValueTuple_2<T1, T2> __2__current; // 0x0
		::ObservableCollections::Internal::FreezedView_2<T1, T2>* __4__this; // 0x0
		::System::Object* __7__wrap1; // 0x0
		::System::Boolean __7__wrap2; // 0x0
		::System::Object* __7__wrap3; // 0x0
		::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<T1, T2>>* __7__wrap4; // 0x0
	};
}
