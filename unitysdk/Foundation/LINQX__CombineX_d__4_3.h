#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace Foundation
{
	inline static constexpr unsigned int LINQX__CombineX_d__4_3_TypeDefinitionIndex = 8328;

	template <typename T1, typename T2, typename T3>
	class LINQX__CombineX_d__4_3 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		T1 __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		::System::Collections::Generic::IEnumerable_1<T2>* in1; // 0x0
		::System::Collections::Generic::IEnumerable_1<T2>* __3__in1; // 0x0
		::System::Collections::Generic::IEnumerable_1<T3>* in2; // 0x0
		::System::Collections::Generic::IEnumerable_1<T3>* __3__in2; // 0x0
		::System::Func_3<T2, T3, T3>* func; // 0x0
		::System::Func_3<T2, T3, T3>* __3__func; // 0x0
		::System::Collections::Generic::IEnumerator_1<T2>* _e1_5__2; // 0x0
		::System::Collections::Generic::IEnumerator_1<T3>* _e2_5__3; // 0x0
	};
}
