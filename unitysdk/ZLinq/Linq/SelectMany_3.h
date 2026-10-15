#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZLinq/Linq/FromEnumerable_1.h"
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace ZLinq::Linq
{
	inline static constexpr unsigned int SelectMany_3_TypeDefinitionIndex = 6139;

	template <typename T1, typename T2, typename T3>
	struct alignas(8) SelectMany_3
	{
		::System::Func_2<T1, ::System::Collections::Generic::IEnumerable_1<T2>*>* _selector_P; // 0x0
		T3 source; // 0x0
		::ZLinq::Linq::FromEnumerable_1<T2> innerEnumerator; // 0x0
		::System::Boolean hasInner; // 0x0
	};
}
