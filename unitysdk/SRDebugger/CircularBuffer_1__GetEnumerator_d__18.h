#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/System/Object.h"
namespace SRDebugger { template <typename T> class CircularBuffer_1; }

namespace SRDebugger
{
	inline static constexpr unsigned int CircularBuffer_1__GetEnumerator_d__18_TypeDefinitionIndex = 37953;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18>
	class CircularBuffer_1__GetEnumerator_d__18 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		T1 __2__current; // 0x0
		::SRDebugger::CircularBuffer_1<T2>* __4__this; // 0x0
		::Il2CppArray<::System::ArraySegment_1<T2>>* __7__wrap1; // 0x0
		::System::Int32 __7__wrap2; // 0x0
		::System::ArraySegment_1<T2> _segment_5__4; // 0x0
		::System::Int32 _i_5__5; // 0x0
	};
}
