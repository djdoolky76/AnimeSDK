#pragma once
#include "unitysdk/unitysdk.h"
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Distinct_2__Distinct_TypeDefinitionIndex = 45339;

	template <typename T1, typename T2>
	class Distinct_2__Distinct
	{
	public:
		::System::Collections::Generic::HashSet_1<T1>* set; // 0x0
		::System::Func_2<T2, T1>* keySelector; // 0x0
	};
}
