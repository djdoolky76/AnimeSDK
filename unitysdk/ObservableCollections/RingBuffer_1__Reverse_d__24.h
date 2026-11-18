#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ObservableCollections { template <typename T> class RingBuffer_1; }

namespace ObservableCollections
{
	inline static constexpr unsigned int RingBuffer_1__Reverse_d__24_TypeDefinitionIndex = 28106;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24>
	class RingBuffer_1__Reverse_d__24 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		T1 __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		::ObservableCollections::RingBuffer_1<T2>* __4__this; // 0x0
		::System::Int32 _start_5__2; // 0x0
		::System::Int32 _i_5__3; // 0x0
	};
}
